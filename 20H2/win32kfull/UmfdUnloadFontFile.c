/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00F38D0
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00F3500 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00F3908 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
