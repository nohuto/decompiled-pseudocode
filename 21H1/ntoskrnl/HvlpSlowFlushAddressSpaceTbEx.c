/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x1404F5688
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14038CEBC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F50B0 (HvlpAffinityToHvProcessorSet.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r9
  __int128 v13; // [rsp+28h] [rbp-F0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-E0h]
  _BYTE v15[192]; // [rsp+48h] [rbp-D0h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v13, 1, (__int64)v15, 96LL);
  *v6 = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9 = v7 | 2;
  if ( a1 )
    v9 = v7;
  v6[1] = v9;
  v10 = HvlpAffinityToHvProcessorSet(a2, v6 + 2, (v13 & 2) != 0 ? 64 : 4064);
  if ( v10 == -1 )
    v10 = HvlpAffinityToHvProcessorSet(0LL, v8, 0);
  HvcallInitiateHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x13, *((__int64 *)&v14 + 1), 0LL, v11);
  return HvlpReleaseHypercallPage((__int64)&v13);
}
