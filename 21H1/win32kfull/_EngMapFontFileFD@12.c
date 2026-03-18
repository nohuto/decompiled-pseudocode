/*
 * XREFs of _EngMapFontFileFD@12 @ 0x1E9130
 * Callers:
 *     <none>
 * Callees:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal((_DWORD *)iFile, ppjBuf, pcjBuf, 1);
}
