/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0017794
 * Callers:
 *     GreMakeBitmapStock @ 0x1C0017540 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C0017650 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C02B7B40 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02BABA0 (NtGdiGetColorSpaceforBitmap.c)
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
