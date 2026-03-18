/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C661C
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801C6B94 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C7264 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003EC84 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1800BAB20 (--0-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBit.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace@U?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAUIDXGIResource@@@std@@V?$allocator@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1801C6328 (--$_Emplace@U-$pair@PEAUIDXGIResource@@V-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy.c)
 *     ??$_Find_lower_bound@PEAUIDXGIResource@@@?$_Tree@V?$_Tmap_traits@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAUIDXGIResource@@@std@@V?$allocator@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAUIDXGIResource@@@Z @ 0x1801C63F4 (--$_Find_lower_bound@PEAUIDXGIResource@@@-$_Tree@V-$_Tmap_traits@PEAUIDXGIResource@@V-$com_ptr_t.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D638 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(
        CIndirectSwapchainRenderTarget *this)
{
  _QWORD *v1; // r15
  __int64 *v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  CD3DDevice *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  CDeviceManager *v10; // rcx
  unsigned int v11; // edi
  struct _LUID v12; // rdx
  int Device; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // xmm0_4
  CD3DDevice *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  char *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // ebx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  CD3DDevice *v27; // rcx
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h]
  CD3DDevice *v32; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+38h] BYREF
  CD3DDevice *v34; // [rsp+B0h] [rbp+40h] BYREF

  v33 = 0LL;
  v1 = (_QWORD *)((char *)this + 1944);
  v32 = 0LL;
  v2 = (__int64 *)((char *)this + 1880);
  std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<IDXGIResource *>(
    (__int64 *)this + 235,
    (__int64)v30,
    (unsigned __int64 *)this + 243);
  v4 = v31;
  if ( *(_BYTE *)(v31 + 25) || *v1 < *(_QWORD *)(v31 + 32) )
  {
    v4 = *v2;
    v5 = *v2;
  }
  else
  {
    v5 = *v2;
  }
  if ( v4 != v5 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((__int64 *)&v32, *(_QWORD *)(v4 + 40));
    v7 = v32;
    goto LABEL_15;
  }
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v1;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v33);
  v9 = (**v8)(v8, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v33);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, v9, 0x128u);
    goto LABEL_27;
  }
  v12 = (struct _LUID)*((_QWORD *)this + 244);
  v34 = 0LL;
  Device = CDeviceManager::GetDevice(v10, v12, &v34);
  v11 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, Device, 0x12Bu);
    v27 = v34;
    if ( !v34 )
      goto LABEL_27;
    goto LABEL_25;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v32);
  if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 30)) )
    v16 = (int)FLOAT_1_0;
  else
    v16 = 0;
  v17 = v34;
  v18 = CD3DDevice::CreateRenderTargetBitmap(v34, v33, *((unsigned int *)this + 29), v15, DisplayId::All, v16, &v32);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x132u);
    if ( !v17 )
      goto LABEL_27;
    v27 = v17;
LABEL_25:
    CD3DDevice::Release(v27);
    goto LABEL_27;
  }
  v7 = v32;
  v20 = (char *)v32 + *(int *)(*((_QWORD *)v32 + 1) + 8LL) + 8;
  (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v20 + 40LL))(v20, (char *)this + 1872);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    &v29,
    (__int64)v7);
  std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Emplace<std::pair<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>(
    v2,
    (__int64)v30);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
  if ( v17 )
    CD3DDevice::Release(v17);
LABEL_15:
  v21 = *((unsigned int *)this + 446);
  v32 = 0LL;
  v34 = v7;
  v22 = v21 + 1;
  if ( (int)v21 + 1 < (unsigned int)v21 )
  {
    v11 = -2147024362;
    v23 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x13Eu);
    goto LABEL_27;
  }
  if ( v22 > *((_DWORD *)this + 445) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 1760, 8u, 1, &v34);
    v23 = v25;
    v11 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0xC0u);
      goto LABEL_21;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 220) + 8 * v21) = v7;
    v11 = 0;
    *((_DWORD *)this + 446) = v22;
  }
LABEL_27:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
  return v11;
}
