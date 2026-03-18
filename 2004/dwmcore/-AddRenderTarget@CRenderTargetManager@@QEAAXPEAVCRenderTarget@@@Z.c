/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DB75C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800DBD20 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E9364 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x180187A68 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x180188E00 (-Initialize@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x1801F3200 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180251B10 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18025490C (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x18001DD78 (--$_Emplace_reallocate@AEBU_LUID@@@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LU.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005ADB0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  _BYTE *v4; // rdx
  _BYTE *v5; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_BYTE *)this + 128) || *((_QWORD *)this + 15) == GetCurrentFrameId() )
  {
    v5 = (_BYTE *)*((_QWORD *)this + 5);
    if ( *((_BYTE **)this + 6) == v5 )
    {
      std::vector<_LUID>::_Emplace_reallocate<_LUID const &>((_QWORD *)this + 4, v5, &v7);
    }
    else
    {
      *(_QWORD *)v5 = a2;
      *((_QWORD *)this + 5) += 8LL;
    }
  }
  else
  {
    v6 = 0LL;
    if ( (int)CMILCOMBase::InternalQueryInterface(a2, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v6) >= 0 )
      *((_BYTE *)this + 130) = 1;
    v4 = (_BYTE *)*((_QWORD *)this + 2);
    if ( *((_BYTE **)this + 3) == v4 )
    {
      std::vector<_LUID>::_Emplace_reallocate<_LUID const &>((_QWORD *)this + 1, v4, &v7);
    }
    else
    {
      *(_QWORD *)v4 = a2;
      *((_QWORD *)this + 2) += 8LL;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v6);
  }
}
