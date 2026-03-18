/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1405496F8
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14039DE70 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14054C8F0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  __int16 v6; // bx
  __int128 v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  _BYTE v11[176]; // [rsp+48h] [rbp-C0h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 1, (__int64)v11, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v8 & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)&v8);
    v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 1, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v4[1] = 0;
  *v4 = a2;
  v6 = HvcallInitiateHypercall(((v5 + 7) << 14) & 0x3FE0000 | 0x15u);
  HvlpReleaseHypercallPage((__int64)&v8);
  return v6 != 0 ? 0xC0000001 : 0;
}
