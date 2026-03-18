/*
 * XREFs of ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18003A550
 * Callers:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003A514 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x180247658 (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FlushD2D(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  CD2DContext::FlushDrawList(this);
  if ( *((_BYTE *)this + 485) && *((_BYTE *)this + 486) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 336LL))(
           *((_QWORD *)this + 30),
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x30Cu, 0LL);
    *((_BYTE *)this + 486) = 0;
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((char *)this - 16, v3, 0LL);
}
