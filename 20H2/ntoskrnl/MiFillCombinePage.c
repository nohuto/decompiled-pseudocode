/*
 * XREFs of MiFillCombinePage @ 0x14036AD5C
 * Callers:
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiUnmapSinglePage @ 0x14036AE14 (MiUnmapSinglePage.c)
 *     MiMapSinglePage @ 0x14036AE54 (MiMapSinglePage.c)
 *     KeCopyPage @ 0x1404009F0 (KeCopyPage.c)
 */

__int64 __fastcall MiFillCombinePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rbx

  v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v8 = *(unsigned __int8 *)(a3 + 34);
  if ( (((unsigned __int8)v8 ^ *(_BYTE *)(a2 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(a2, v8 >> 6, 2);
  result = MiMapSinglePage(0LL, v7, 1073741840LL, 0LL);
  v10 = result;
  if ( result )
  {
    KeCopyPage(result, a4);
    MiUnmapSinglePage(v10);
    return 1LL;
  }
  return result;
}
