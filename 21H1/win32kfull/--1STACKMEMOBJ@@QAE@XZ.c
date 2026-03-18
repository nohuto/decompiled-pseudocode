/*
 * XREFs of ??1STACKMEMOBJ@@QAE@XZ @ 0x21F5EF
 * Callers:
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

void __thiscall STACKMEMOBJ::~STACKMEMOBJ(PATHOBJ **this)
{
  if ( this[5] )
    Win32FreePool(this[5]);
  if ( this[3] )
    Win32FreePool(this[3]);
  if ( this[4] )
    Win32FreePool(this[4]);
  this[4] = 0;
  this[3] = 0;
  this[5] = 0;
}
