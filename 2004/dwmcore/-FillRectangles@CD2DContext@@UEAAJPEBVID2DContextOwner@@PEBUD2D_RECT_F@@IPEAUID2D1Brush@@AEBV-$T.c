/*
 * XREFs of ?FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18023AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007BD48 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018FB30 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18023B384 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 */

__int64 __fastcall CD2DContext::FillRectangles(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rdi
  __int64 v12; // r8
  __int64 v13; // rbx

  v8 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a8, &a7, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0ffff_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT,
      v12,
      (float)a6[1],
      COERCE_UNSIGNED_INT((float)a6[2]),
      COERCE_UNSIGNED_INT((float)a6[3]));
  if ( (_DWORD)v8 )
  {
    v13 = v8;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 30) + 136LL))(
        *((_QWORD *)this + 30),
        a3,
        a5);
      a3 += 16LL;
      --v13;
    }
    while ( v13 );
  }
  return 0LL;
}
