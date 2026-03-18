/*
 * XREFs of LdrFindResource_U @ 0x1407B0370
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A67B14 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
