/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C2DE4
 * Callers:
 *     ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x18016E430 (-ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z.c)
 *     ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2FD8 (-GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801C30B4 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180045584 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FAE0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801C22D8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C2630 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180238BE8 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(
        __int64 *a1,
        struct CD3DDevice *a2,
        CMILCOMBase **a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v10; // rax
  CMILCOMBase *v11; // rax
  CDeviceManager *v12; // rcx
  int DefaultDevice; // eax
  __int64 v14; // rcx
  CD3DDevice *v15; // rbx
  CGenericInk *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  CGenericInk *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  CMILCOMBase *v22; // rbx
  const void **v23; // rcx
  _BYTE *v24; // rdx
  CMILCOMBase **v25; // rdx
  CRenderTargetBitmap *v26; // rcx
  CRenderTargetBitmap *v28; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v29; // [rsp+70h] [rbp+40h] BYREF

  v3 = a1[2];
  v4 = 0;
  v5 = a1[3];
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  if ( v7 )
  {
    while ( a2 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v6) + 24LL) + 24LL);
      if ( a2 == (struct CD3DDevice *)((v10 - 16) & -(__int64)(v10 != 0)) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_7;
    }
    v11 = *(CMILCOMBase **)(v3 + 8 * v6);
    *a3 = v11;
    if ( v11 )
      return v4;
  }
LABEL_7:
  if ( a2 )
  {
    v19 = (CGenericInk *)a1[1];
    v28 = 0LL;
    v20 = CGenericInk::CreateResource(v19, a2, &v28);
    v4 = v20;
    if ( v20 >= 0 )
      goto LABEL_17;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x52u, 0LL);
LABEL_28:
    v26 = v28;
    if ( v28 )
      goto LABEL_29;
    return v4;
  }
  v29 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v29);
  DefaultDevice = CDeviceManager::GetDefaultDevice(v12, &v29);
  v4 = DefaultDevice;
  if ( DefaultDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
    if ( v29 )
      CD3DDevice::Release(v29);
    return v4;
  }
  v15 = v29;
  v16 = (CGenericInk *)a1[1];
  v28 = 0LL;
  v17 = CGenericInk::CreateResource(v16, v29, &v28);
  v4 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x4Eu, 0LL);
    if ( v15 )
      CD3DDevice::Release(v15);
    goto LABEL_28;
  }
  if ( v15 )
    CD3DDevice::Release(v15);
LABEL_17:
  v22 = v28;
  v29 = (CD3DDevice *)a1;
  v23 = (const void **)((char *)v28 + 56);
  v24 = (_BYTE *)*((_QWORD *)v28 + 8);
  if ( *((_BYTE **)v28 + 9) == v24 )
  {
    std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(v23, v24, &v29);
  }
  else
  {
    *(_QWORD *)v24 = a1;
    v23[1] = (char *)v23[1] + 8;
  }
  v25 = (CMILCOMBase **)a1[3];
  if ( (CMILCOMBase **)a1[4] == v25 )
  {
    std::vector<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> const &>(
      a1 + 2,
      (__int64)v25,
      &v28);
    v22 = v28;
  }
  else
  {
    *v25 = v22;
    if ( v22 )
      CMILCOMBase::InternalAddRef(v22);
    a1[3] += 8LL;
  }
  *a3 = v22;
  if ( v22 )
  {
    v26 = v22;
LABEL_29:
    CRenderTargetBitmap::Release(v26);
  }
  return v4;
}
