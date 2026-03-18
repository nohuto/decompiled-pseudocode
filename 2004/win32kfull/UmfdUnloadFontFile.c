/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00E2690
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00E26D0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00E2380 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal((__int64)pv);
  EngFreeMem(pv);
  return v2;
}
