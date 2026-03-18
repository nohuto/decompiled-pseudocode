/*
 * XREFs of LdrAccessResource @ 0x1407B0350
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A67B14 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1406FC428 (LdrpAccessResourceData.c)
 */

__int64 __fastcall LdrAccessResource(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
