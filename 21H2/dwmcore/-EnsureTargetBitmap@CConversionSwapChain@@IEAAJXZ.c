/*
 * XREFs of ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x180292718
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x180292C10 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x180293500 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180104B40 (--4-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$query_to@VIDeviceTextureTarget@@@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTextureTarget@@@Z @ 0x180104F4C (--$query_to@VIDeviceTextureTarget@@@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??I?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceTexture@@XZ @ 0x180199464 (--I-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceTexture@@XZ.c)
 *     ??I?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceTextureTarget@@XZ @ 0x180279F94 (--I-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceTextur.c)
 */

__int64 __fastcall CConversionSwapChain::EnsureTargetBitmap(CConversionSwapChain *this)
{
  __int64 *v1; // r15
  unsigned int v3; // ebx
  CD3DDevice *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, char *); // rcx
  const struct D2D_SIZE_U *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  struct IRenderTargetBitmap *v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(char *, __int64, __int64 *); // r14
  __int64 *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *v21; // [rsp+40h] [rbp-28h] BYREF
  int v22; // [rsp+48h] [rbp-20h]
  struct IRenderTargetBitmap *v23; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+48h] BYREF
  char v26; // [rsp+B8h] [rbp+50h] BYREF

  v1 = (__int64 *)((char *)this + 344);
  if ( *((_QWORD *)this + 43) )
  {
    return 0;
  }
  else
  {
    v4 = (CD3DDevice *)*((_QWORD *)this + 8);
    v23 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v23);
    v5 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)this + 10)
                                                  + 8LL
                                                  + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 16LL));
    v6 = (const struct D2D_SIZE_U *)(**v5)(v5, &v26);
    v22 = 37;
    v21 = "Conversion intermediate target bitmap";
    v7 = CD3DDevice::CreateRenderTargetBitmap(
           v4,
           (const struct CResourceTag *)&v21,
           v6,
           (CConversionSwapChain *)((char *)this + 352),
           (CConversionSwapChain *)((char *)this + 144),
           0,
           &v23);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x1C7u);
    }
    else
    {
      v24 = 0LL;
      v9 = v23;
      v10 = *(int *)(*((_QWORD *)v23 + 1) + 16LL);
      v11 = *(__int64 (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)((char *)v23 + v10 + 8) + 48LL);
      v12 = wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::operator&(&v24);
      v13 = (**(__int64 (__fastcall ***)(struct IRenderTargetBitmap *, const char **))v9)(v9, &v21);
      v14 = v11((char *)v9 + v10 + 8, v13, v12);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x1CBu);
      }
      else
      {
        v25 = 0LL;
        v16 = wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::operator&(&v25);
        v17 = wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::query_to<IDeviceTextureTarget>(
                (__int64)&v24,
                (__int64)v16);
        v3 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v17, 0x1CEu);
        }
        else
        {
          LOBYTE(v18) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, v18);
          wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(v1, (__int64 *)&v23);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
  }
  return v3;
}
