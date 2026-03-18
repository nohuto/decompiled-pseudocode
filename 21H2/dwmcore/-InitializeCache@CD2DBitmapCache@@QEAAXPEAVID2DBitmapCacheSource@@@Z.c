/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800681EC
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18000E0B0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1800202E0 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x18006618C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x180066388 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800664C0 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180068170 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180069F20 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1802A2078 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802A2660 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802A4430 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802A4920 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802A4BF0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802A4C50 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1800DE818 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x1800EB140 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  __int64 v4; // rsi
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  bool v8; // zf
  void (__fastcall ***v9)(_QWORD, GUID *, char *); // rcx
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 7));
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  v4 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
  {
    v5 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( v4 )
  {
    v6 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 32);
  v7 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v7 )
    CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease();
  v8 = *((_QWORD *)this + 3) == 0LL;
  *((_BYTE *)this + 72) = 0;
  if ( !v8 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 32);
    v9 = (void (__fastcall ***)(_QWORD, GUID *, char *))(*((_QWORD *)this + 3)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL));
    (**v9)(v9, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, (char *)this + 32);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3)) )
    {
      v12 = 0LL;
      v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 3)
                                                            + 8LL
                                                            + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL));
      if ( (**v10)(v10, &IID_IWICDecoderBitmapSource, &v12) >= 0 )
      {
        v11 = v12;
        *((_BYTE *)this + 72) = 1;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
}
