/*
 * XREFs of EditionInitGlobalCursorSizes @ 0x1C012C860
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1C012C8AC (--0CCursorSizes@@QEAA@XZ.c)
 */

__int64 EditionInitGlobalCursorSizes()
{
  CCursorSizes *v0; // rax
  unsigned int v1; // ebx
  CCursorSizes *v2; // rax

  v0 = (CCursorSizes *)Win32AllocPoolZInit(88LL, 1919964227LL);
  v1 = 0;
  if ( v0 )
    v2 = CCursorSizes::CCursorSizes(v0);
  else
    v2 = 0LL;
  gpCursorSizes = v2;
  LOBYTE(v1) = v2 != 0LL;
  return v1;
}
