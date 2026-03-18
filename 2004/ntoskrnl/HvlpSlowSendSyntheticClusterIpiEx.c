/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F250C
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14038DA70 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404EE030 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F5700 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  __int16 v6; // bx
  _OWORD v8[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v9[176]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v8, 1, (__int64)v9, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v8[0] & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)v8);
    v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v8, 1, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v4[1] = 0;
  *v4 = a2;
  v6 = HvcallInitiateHypercall(((v5 + 7) << 14) & 0x3FE0000 | 0x15u);
  HvlpReleaseHypercallPage((__int64)v8);
  return v6 != 0 ? 0xC0000001 : 0;
}
