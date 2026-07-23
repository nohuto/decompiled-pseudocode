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

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  _RTL_SRWLOCK *v1; // edi
  unsigned int Value; // eax

  if ( TppIopValidateIo(1) )
  {
    TppBarrierAdjust((signed __int64 *)Io + 4, 1, 0);
    _InterlockedIncrement((volatile signed __int32 *)Io + 42);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    v1 = (_RTL_SRWLOCK *)*((_DWORD *)Io + 23);
    if ( !v1 || (Value = v1[68].Value) == 0 )
      Value = MEMORY[0x7FFE03C0];
    if ( v1[64].Value != Value )
    {
      RtlAcquireSRWLockExclusive(v1 + 11);
      TppAdjustRunningThreadGoalWithLock(v1);
      RtlReleaseSRWLockExclusive(v1 + 11);
    }
  }
}
