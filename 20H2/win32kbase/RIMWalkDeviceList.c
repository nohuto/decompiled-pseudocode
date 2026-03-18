/*
 * XREFs of RIMWalkDeviceList @ 0x1C01530B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMWalkDeviceList(__int64 a1, void (__fastcall *a2)(__int64 *, __int64))
{
  __int64 *i; // rbx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
    a2(i - 2, a1);
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
