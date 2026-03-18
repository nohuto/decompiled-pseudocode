/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x1404F6300
 * Callers:
 *     HvlpGetPageList @ 0x1404F6238 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1404F641C (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404EE030 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+40h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v5, 1, (__int64)v6, 24LL);
  v3[1] = -1LL;
  *v3 = a2;
  v3[2] = 1LL;
  HvcallInitiateHypercall(151);
  return HvlpReleaseHypercallPage((__int64)v5);
}
