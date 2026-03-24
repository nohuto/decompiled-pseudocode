/*
 * XREFs of LdrFindResource_U @ 0x1407C5730
 * Callers:
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6B744 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x14068DCE4 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 *a2, unsigned int a3, unsigned int **a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
