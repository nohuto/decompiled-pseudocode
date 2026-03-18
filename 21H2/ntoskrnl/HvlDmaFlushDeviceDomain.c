/*
 * XREFs of HvlDmaFlushDeviceDomain @ 0x140546150
 * Callers:
 *     HvlDmaFlushDeviceDomainVaList @ 0x1405461E0 (HvlDmaFlushDeviceDomainVaList.c)
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaFlushDeviceDomain(int *a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  int v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v6 = 0LL;
  v4 = 1;
  v5 = *a1;
  v1 = HvcallFastExtended(65744LL, (__int64)v3, 0x20u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
