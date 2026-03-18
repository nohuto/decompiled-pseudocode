/*
 * XREFs of _UmfdUnloadFontFile@4 @ 0xCDECE
 * Callers:
 *     <none>
 * Callees:
 *     _UmfdUnloadFontFileInternal@4 @ 0xCDEEE (_UmfdUnloadFontFileInternal@4.c)
 */

int __stdcall UmfdUnloadFontFile(PVOID pv)
{
  int v1; // esi

  v1 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v1;
}
