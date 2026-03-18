/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C009C2F4
 * Callers:
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C7D08 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     GreMakeBitmapNonStock @ 0x1C00AA6B0 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax
  __int64 v4; // rcx

  HmgDecrementShareReferenceCountEx((__int64)this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v3 = *((_WORD *)this + 51);
      if ( (v3 & 0x400) != 0 )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v3 & 0xFBFF;
        GreMakeBitmapNonStock(v4);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
