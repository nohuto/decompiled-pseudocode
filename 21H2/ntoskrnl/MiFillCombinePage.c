/*
 * XREFs of MiFillCombinePage @ 0x14026C038
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiUnmapSinglePage @ 0x14026C0E4 (MiUnmapSinglePage.c)
 *     MiMapSinglePage @ 0x14026C124 (MiMapSinglePage.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 */

__int64 __fastcall MiFillCombinePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rbx

  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v6 = *(unsigned __int8 *)(a3 + 34);
  if ( (((unsigned __int8)v6 ^ *(_BYTE *)(a2 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(a2, v6 >> 6, 2);
  result = MiMapSinglePage(0LL, v5, 1073741840LL, 0LL);
  v8 = result;
  if ( result )
  {
    KeCopyPage(result, a4);
    MiUnmapSinglePage(v8);
    return 1LL;
  }
  return result;
}
