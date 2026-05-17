/*
 * XREFs of TpReleaseJobNotification @ 0x18007F350
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppJobpRundownJob @ 0x18007F3B8 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x18007F4A8 (TppJobpValidateJob.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseJobNotification(__int64 a1)
{
  signed __int32 v2; // eax

  v2 = TppJobpValidateJob(a1, 1LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v2 )
    {
      TppJobpRundownJob(a1);
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return v2;
}
