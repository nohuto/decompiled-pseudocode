/*
 * XREFs of MiFillCombinePage @ 0x1403683BC
 * Callers:
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiUnmapSinglePage @ 0x140368474 (MiUnmapSinglePage.c)
 *     MiMapSinglePage @ 0x1403684B4 (MiMapSinglePage.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 */

__int64 __fastcall MiFillCombinePage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
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
    MiChangePageAttribute(a2, v8 >> 6, 2LL, a4);
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
