/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x1404F08AC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404EE030 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F58C4 (HvlpHvToNtStatus.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  unsigned __int16 v0; // bx
  _OWORD v2[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  *(_DWORD *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v2, 1, (__int64)v3, 8LL) = 4;
  v0 = HvcallInitiateHypercall(135);
  HvlpReleaseHypercallPage((__int64)v2);
  return HvlpHvToNtStatus(v0);
}
