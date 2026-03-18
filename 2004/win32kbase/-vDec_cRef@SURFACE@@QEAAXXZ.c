/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00C0E8C
 * Callers:
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C8428 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     GreMakeBitmapNonStock @ 0x1C0015680 (GreMakeBitmapNonStock.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v2; // rdx
  __int16 v4; // ax
  unsigned __int64 v5; // rcx

  HmgDecrementShareReferenceCountEx((__int64)this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v4 = *((_WORD *)this + 51);
      if ( (v4 & 0x400) != 0 )
      {
        v5 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v4 & 0xFBFF;
        GreMakeBitmapNonStock(v5, v2);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
