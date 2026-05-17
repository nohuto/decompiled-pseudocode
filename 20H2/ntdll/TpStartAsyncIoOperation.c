/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800127E0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x180012858 (TppIopValidateIo.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180112110 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = TppIopValidateIo(a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    TppBarrierAdjust(a1 + 56, 1LL);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 280), 1u);
    _InterlockedAdd((volatile signed __int32 *)a1, 1u);
    v3 = *(_QWORD *)(a1 + 144);
    if ( !v3 || (result = *(unsigned int *)(v3 + 440), !(_DWORD)result) )
      result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v3 + 424) != (_DWORD)result )
    {
      RtlAcquireSRWLockExclusive(v3 + 72);
      TppAdjustRunningThreadGoalWithLock(v3);
      return RtlReleaseSRWLockExclusive(v3 + 72);
    }
  }
  return result;
}
