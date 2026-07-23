/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x1800852C0
 * Callers:
 *     <none>
 * Callees:
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdx
  signed __int32 v3; // eax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v2 = *(_RTL_SRWLOCK **)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v3) = TppCancelTimer(a1, v2 + 14, 0);
  if ( (_BYTE)v3 )
  {
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v3 == 1 )
      LOBYTE(v3) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v3;
}
