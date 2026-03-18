/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800D1C04 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_N0PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EBA0 (-EnterClippingScope@CScopedClipStack@@QEAAJ_N0PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18007EE30 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??4?$com_ptr_t@VIDeviceTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTarget@@@Z @ 0x1800807DC (--4-$com_ptr_t@VIDeviceTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTarget@@@.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x180080BF0 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1800DE6B4 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IDeviceTarget *a2)
{
  struct IDeviceTarget **v2; // r14
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct IDeviceTarget *v16; // r8
  CD2DContext *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  CD3DDevice *v24; // rcx
  __int128 v25; // [rsp+30h] [rbp-38h] BYREF

  v2 = (struct IDeviceTarget **)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v21 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  }
  v6 = *((_QWORD *)a2 + 1);
  v25 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD))((char *)a2 + *(int *)(v6 + 8) + 8);
  v8 = (**v7)(v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x6Eu);
LABEL_14:
    wil::com_ptr_t<IDeviceTarget,wil::err_returncode_policy>::operator=(v2);
    if ( *v2 )
    {
      CDrawingContext::UpdateRenderTargetInfo(this);
    }
    else
    {
      v24 = (CD3DDevice *)*((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = 0LL;
      if ( v24 )
        CD3DDevice::Release(v24);
    }
    goto LABEL_8;
  }
  *((_BYTE *)this + 8041) = 1;
  v11 = CScopedClipStack::EnterClippingScope((int)this + 864, 0, 0, 0, (__int64)&v25);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xBD7u);
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v10, 0x7Bu);
    goto LABEL_14;
  }
  *((_BYTE *)this + 8042) = 0;
  wil::com_ptr_t<IDeviceTarget,wil::err_returncode_policy>::operator=(v2);
  if ( !*((_QWORD *)this + 5) )
  {
    v13 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=((char *)this + 40, v14);
  }
  v15 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int128 *))*v2)(*v2, &v25);
  v16 = *v2;
  v17 = (CD2DContext *)(*((_QWORD *)this + 5) + 16LL);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v15;
  *((_QWORD *)this + 9) = *(_QWORD *)(v15 + 16);
  v18 = CD2DContext::PushTarget(v17, (CDrawingContext *)((char *)this + 24), v16);
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x93u);
    --*((_DWORD *)this + 222);
    goto LABEL_14;
  }
LABEL_8:
  if ( v4 )
  {
    v22 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v10;
}
