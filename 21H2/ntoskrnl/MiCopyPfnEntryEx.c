/*
 * XREFs of MiCopyPfnEntryEx @ 0x14025B9D0
 * Callers:
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x140245010 (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiSwitchKstackPages @ 0x1405368AC (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x1405639B0 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCopyPfnEntryEx(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // r8
  __int64 v4; // rax
  __int128 v6; // [rsp+10h] [rbp-28h]
  __m128i v7; // [rsp+20h] [rbp-18h]

  v2 = *(_OWORD *)(a2 + 16);
  v7 = *(__m128i *)(a2 + 32);
  v3 = *(_QWORD *)(a2 + 40);
  v7.m128i_i8[3] = _mm_cvtsi128_si32(_mm_srli_si128(v7, 3)) & 0x3F | *(_BYTE *)(a1 + 35) & 0x40;
  *(_QWORD *)&v6 = v2;
  if ( (((unsigned __int64)v7.m128i_i64[1] >> 60) & 7) == 3 )
    v3 &= 0x8FFFFFFFFFFFFFFFuLL;
  v7.m128i_i8[2] = v7.m128i_i8[2] & 0x3F | *(_BYTE *)(a1 + 34) & 0xC0;
  LOBYTE(v4) = v7.m128i_i8[2] & 7;
  v7.m128i_i64[1] = (v3 ^ ((unsigned __int64)(unsigned __int16)(*(_QWORD *)(a1 + 40) >> 39) << 39)) & 0x1FF8000000000LL ^ v3;
  if ( (v7.m128i_i8[2] & 7) != 6 )
  {
    v4 = (*((_QWORD *)&v2 + 1) ^ *(_QWORD *)(a1 + 24)) & 0xF00000000000000LL ^ *((_QWORD *)&v2 + 1);
    *((_QWORD *)&v6 + 1) = v4;
    v2 = v6;
  }
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v2;
  *(__m128i *)(a1 + 32) = v7;
  return v4;
}
