/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180033098
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180018F70 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x180026E80 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800274E8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180031370 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x1800325C8 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003293C (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180033028 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180263688 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x180263C20 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802655B0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180265A80 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180265D50 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180265DA0 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18009DF38 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C14BC (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  const struct IDeviceResourceNotify ***v2; // r14
  const struct IDeviceResourceNotify ***v4; // rdi
  __int64 v6; // rdi
  char *v7; // rcx
  CRenderTargetBitmap *v8; // rcx
  bool v9; // zf
  void (__fastcall ***v10)(_QWORD, GUID *, char *); // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  const struct IDeviceResourceNotify **v13; // rsi
  const struct IDeviceResourceNotify *v14; // rcx
  CRenderTargetBitmap *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (const struct IDeviceResourceNotify ***)*((_QWORD *)this + 7);
  v4 = (const struct IDeviceResourceNotify ***)*((_QWORD *)this + 6);
  if ( v4 != v2 )
  {
    do
    {
      v13 = *v4;
      if ( *v4 )
      {
        v14 = v13[1];
        if ( v14 )
        {
          CD2DResource::RemoveResourceNotifier((const struct IDeviceResourceNotify *)((char *)v14 + 104), *v13);
          v15 = v13[1];
          if ( v15 )
            CRenderTargetBitmap::Release(v15);
        }
        operator delete(v13, 0x10uLL);
      }
      ++v4;
    }
    while ( v4 != v2 );
    v4 = (const struct IDeviceResourceNotify ***)*((_QWORD *)this + 6);
  }
  *((_QWORD *)this + 7) = v4;
  v6 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  if ( v6 )
  {
    v12 = v6 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset((char *)this + 32);
  v8 = (CRenderTargetBitmap *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v8 )
    CRenderTargetBitmap::Release(v8);
  v9 = *((_QWORD *)this + 3) == 0LL;
  *((_BYTE *)this + 72) = 0;
  if ( !v9 )
  {
    wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset((char *)this + 32);
    v10 = (void (__fastcall ***)(_QWORD, GUID *, char *))(*((_QWORD *)this + 3)
                                                        + 8LL
                                                        + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL));
    (**v10)(v10, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, (char *)this + 32);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3)) )
    {
      v17 = 0LL;
      v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 3)
                                                            + 8LL
                                                            + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL));
      if ( (**v11)(v11, &IID_IWICDecoderBitmapSource, &v17) >= 0 )
      {
        v16 = v17;
        *((_BYTE *)this + 72) = 1;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
}
