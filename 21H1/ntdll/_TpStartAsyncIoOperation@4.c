/*
 * XREFs of _TpStartAsyncIoOperation@4 @ 0x4B2E70A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 */

signed __int32 __stdcall TpStartAsyncIoOperation(int a1)
{
  signed __int32 result; // eax
  int v2; // edi

  result = TppIopValidateIo(1);
  if ( result )
  {
    TppBarrierAdjust((signed __int64 *)(a1 + 32), 1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 168));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v2 = *(_DWORD *)(a1 + 92);
    if ( !v2 || (result = *(_DWORD *)(v2 + 272)) == 0 )
      result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v2 + 256) != result )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v2 + 44));
      TppAdjustRunningThreadGoalWithLock(v2);
      return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v2 + 44));
    }
  }
  return result;
}
