/*
 * XREFs of _EditionInitGlobalCursorSizes@0 @ 0xEBF9A
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCursorSizes@@QAE@XZ @ 0xEBFC6 (--0CCursorSizes@@QAE@XZ.c)
 */

BOOL __stdcall EditionInitGlobalCursorSizes()
{
  CCursorSizes *v0; // eax
  CCursorSizes *v1; // ecx

  v0 = (CCursorSizes *)Win32AllocPoolZInit(76, 1919964227);
  if ( v0 )
    v1 = CCursorSizes::CCursorSizes(v0);
  else
    v1 = 0;
  gpCursorSizes = v1;
  return v1 != 0;
}
