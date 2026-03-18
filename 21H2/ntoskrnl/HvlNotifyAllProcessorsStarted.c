/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x140547850
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  unsigned __int16 v0; // bx
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  __int64 v4; // [rsp+38h] [rbp-30h]
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  *(_DWORD *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v2, 1, (__int64)v5, 8LL) = 4;
  v0 = HvcallInitiateHypercall(135);
  HvlpReleaseHypercallPage((__int64)&v2);
  return HvlpHvToNtStatus(v0);
}
