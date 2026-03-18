/*
 * XREFs of ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18001E704
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18001DE54 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801C0A60 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800132A0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18001E850 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801BFBDC (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1801C0184 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureDXGIOutput(CLegacyRenderTarget *this)
{
  unsigned int v2; // esi
  CDisplayManager *v4; // rcx
  int DXGIOutput; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  char v10; // cl
  CRegion *v11; // rcx
  struct IDXGIOutputDWM *v12; // rax
  __int64 v13; // rcx
  struct CSyncLockGroup *Group; // rax
  _DWORD *v15; // rax
  struct IDXGIOutputDWM *v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v17[28]; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+64h] [rbp-A4h]
  int v19; // [rsp+68h] [rbp-A0h]
  char v20; // [rsp+B4h] [rbp-54h]
  char v21; // [rsp+B5h] [rbp-53h]
  unsigned int v22; // [rsp+FCh] [rbp-Ch]

  if ( *((_QWORD *)this + 21) )
  {
    return 0;
  }
  else
  {
    v16[0] = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v16);
    DXGIOutput = CDisplayManager::GetDXGIOutput(v4, *((_DWORD *)this + 4604), v16);
    v2 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DXGIOutput, 0x45Au, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v16[0] + 32LL))(v16[0], v17);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x45Du, 0LL);
      }
      else
      {
        v9 = v22;
        *((_DWORD *)this + 26) = v18;
        *((_DWORD *)this + 27) = v19;
        if ( v9 )
        {
          Group = CSyncLockGroup::GetGroup(v9);
          *((_QWORD *)this + 2314) = Group;
          *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       (char *)Group + 16,
                       (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = (char *)this + 144;
        }
        v10 = v20;
        *((_BYTE *)this + 18608) = v21 & 1;
        *((_BYTE *)this + 18609) = (v10 & 8) != 0;
        if ( (v10 & 1) != 0 )
        {
          v15 = operator new(0x48uLL);
          if ( v15 )
          {
            *(_QWORD *)v15 = v15 + 2;
            v15[2] = 0;
          }
          v11 = (CRegion *)*((_QWORD *)this + 2325);
          *((_QWORD *)this + 2325) = v15;
        }
        else
        {
          v11 = (CRegion *)*((_QWORD *)this + 2325);
          *((_QWORD *)this + 2325) = 0LL;
        }
        if ( v11 )
          CRegion::`scalar deleting destructor'(v11, 1);
        v12 = v16[0];
        v13 = *((_QWORD *)this + 21);
        v16[0] = 0LL;
        *((_QWORD *)this + 21) = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(v16);
  }
  return v2;
}
