/*
 * XREFs of LdrAccessResource @ 0x1408550E0
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140B25A50 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x14075883C (LdrpAccessResourceData.c)
 */

__int64 __fastcall LdrAccessResource(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
