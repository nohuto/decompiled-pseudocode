/*
 * XREFs of LdrFindResource_U @ 0x140855100
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140B25A50 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x14075717C (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 *a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
