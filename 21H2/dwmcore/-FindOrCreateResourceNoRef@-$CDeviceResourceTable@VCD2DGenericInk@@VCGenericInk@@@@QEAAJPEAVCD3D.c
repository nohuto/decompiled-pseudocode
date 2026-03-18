/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1802159F0
 * Callers:
 *     ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x18019FE00 (-ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z.c)
 *     ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215BD8 (-GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180215CD8 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800D5CA8 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180214DE8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1802151A0 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(
        __int64 *a1,
        struct CD3DDevice *a2,
        struct CD2DGenericInk **a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 *v9; // rsi
  __int64 v10; // rax
  CGenericInk *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CD2DGenericInk *v14; // rbx
  const void **v15; // rcx
  _BYTE *v16; // rdx
  struct CD2DGenericInk *v17; // rax
  int DefaultDevice; // eax
  __int64 v19; // rcx
  CD3DDevice *v20; // rbx
  CGenericInk *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  struct CD2DGenericInk **v24; // rdx
  struct CD2DGenericInk *v25; // rcx
  struct CD2DGenericInk *v27; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v28; // [rsp+70h] [rbp+40h] BYREF

  v3 = a1[2];
  v4 = 0;
  v5 = a1[3];
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  v9 = a1;
  if ( v7 )
  {
    while ( a2 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v6) + 24LL) + 24LL);
      a1 = (__int64 *)(v10 - 16);
      if ( a2 == (struct CD3DDevice *)((v10 - 16) & -(__int64)(v10 != 0)) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    v17 = *(struct CD2DGenericInk **)(v3 + 8 * v6);
    *a3 = v17;
    if ( v17 )
      return v4;
  }
  if ( a2 )
  {
LABEL_5:
    v11 = (CGenericInk *)v9[1];
    v27 = 0LL;
    v12 = CGenericInk::CreateResource(v11, a2, &v27);
    v4 = v12;
    if ( v12 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x52u);
LABEL_27:
    v25 = v27;
    if ( v27 )
      goto LABEL_28;
    return v4;
  }
  v28 = 0LL;
  DefaultDevice = CDeviceManager::GetDefaultDevice((CDeviceManager *)a1, &v28);
  v4 = DefaultDevice;
  if ( DefaultDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, DefaultDevice, 0x4Bu);
    if ( v28 )
      CD3DDevice::Release(v28);
    return v4;
  }
  v20 = v28;
  v21 = (CGenericInk *)v9[1];
  v27 = 0LL;
  v22 = CGenericInk::CreateResource(v21, v28, &v27);
  v4 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x4Eu);
    if ( v20 )
      CD3DDevice::Release(v20);
    goto LABEL_27;
  }
  if ( v20 )
    CD3DDevice::Release(v20);
LABEL_6:
  v14 = v27;
  v28 = (CD3DDevice *)v9;
  v15 = (const void **)((char *)v27 + 56);
  v16 = (_BYTE *)*((_QWORD *)v27 + 8);
  if ( v16 == *((_BYTE **)v27 + 9) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v15, v16, &v28);
  }
  else
  {
    *(_QWORD *)v16 = v9;
    v15[1] = (char *)v15[1] + 8;
  }
  v24 = (struct CD2DGenericInk **)v9[3];
  if ( v24 == (struct CD2DGenericInk **)v9[4] )
  {
    std::vector<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> const &>(
      v9 + 2,
      (__int64)v24,
      (__int64 *)&v27);
    v14 = v27;
  }
  else
  {
    *v24 = v14;
    if ( v14 )
      CMILRefCountImpl::AddReference((struct CD2DGenericInk *)((char *)v14 + 8));
    v9[3] += 8LL;
  }
  *a3 = v14;
  if ( v14 )
  {
    v25 = v14;
LABEL_28:
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v25);
  }
  return v4;
}
