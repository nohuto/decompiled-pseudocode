/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00AAA0C
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C00AA6B0 (GreMakeBitmapNonStock.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
