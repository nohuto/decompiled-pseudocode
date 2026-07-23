/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800127E0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x180012858 (TppIopValidateIo.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x18005294C (TppBarrierAdjust.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111C00 (TppAdjustRunningThreadGoalWithLock.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v2; // rdi
  int v3; // eax

  if ( (unsigned int)TppIopValidateIo(Io, 0LL, 1LL) )
  {
    TppBarrierAdjust((char *)Io + 56, 1LL);
    _InterlockedAdd((volatile signed __int32 *)Io + 70, 1u);
    _InterlockedAdd((volatile signed __int32 *)Io, 1u);
    v2 = *((_QWORD *)Io + 18);
    if ( !v2 || (v3 = *(_DWORD *)(v2 + 440)) == 0 )
      v3 = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v2 + 424) != v3 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v2 + 72));
      TppAdjustRunningThreadGoalWithLock(v2);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v2 + 72));
    }
  }
}
