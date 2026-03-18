/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C008C7A4
 * Callers:
 *     GreMakeBitmapStock @ 0x1C008C550 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C008C660 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C02B65A0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B9640 (NtGdiGetColorSpaceforBitmap.c)
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
