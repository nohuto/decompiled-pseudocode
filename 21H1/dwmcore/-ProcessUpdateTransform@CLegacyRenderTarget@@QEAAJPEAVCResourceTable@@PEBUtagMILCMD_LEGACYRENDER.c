/*
 * XREFs of ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800D5B4C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x1800D5C30 (-UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateTransform(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // rcx
  _BYTE v11[176]; // [rsp+40h] [rbp-C8h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 8);
  if ( (int)v5 < 0 || *((int *)a3 + 9) < 0 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x69u, 0LL);
  }
  else
  {
    CLegacyRenderTarget::UpdateTransform(this);
    v7 = *((_DWORD *)a3 + 2);
    if ( *((_DWORD *)this + 59) != v7 )
    {
      *((_DWORD *)this + 59) = v7;
      v10 = *((_QWORD *)this + 20);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 160LL))(v10);
    }
    v8 = *((_QWORD *)this + 19);
    if ( v8 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v11) >= 0 )
      *((_BYTE *)this + 18585) = (v11[88] & 8) != 0;
  }
  return v4;
}
