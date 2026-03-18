/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180004440
 * Callers:
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180003C20 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180021C10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180078060 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A1AD0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019BDC0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18006D3D0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18007905C (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18009A50C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180223CB0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CComposition **this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  CComposition *v14; // rbx
  _BYTE v15[64]; // [rsp+40h] [rbp-61h] BYREF
  int v16; // [rsp+80h] [rbp-21h]
  _BYTE v17[64]; // [rsp+90h] [rbp-11h] BYREF
  int v18; // [rsp+D0h] [rbp+2Fh]
  char v19; // [rsp+118h] [rbp+77h] BYREF

  v16 = 0;
  v18 = 0;
  v8 = ((unsigned __int64)a5 + 40) & -(__int64)(a5 != 0LL);
  CVisual::CalcCpuClippingTransform(this, 5LL, a2, v8, &v19, v15, (unsigned __int64)v17 & -(__int64)(this[30] != 0LL));
  if ( a4 || !v8 )
  {
    LOBYTE(v9) = 1;
  }
  else if ( v19 )
  {
    LOBYTE(v9) = CMILMatrix::IsEqualTo<0>(v8, v15) ^ 1;
  }
  else
  {
    LOBYTE(v9) = 0;
  }
  v10 = (*(__int64 (__fastcall **)(struct CTreeData *, _BYTE *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v15,
          v9,
          (unsigned __int64)v17 & -(__int64)(this[30] != 0LL));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x7D2u, 0LL);
  }
  else if ( CVisual::GetInteractionInternal((CVisual *)this) && (*((_BYTE *)this + 94) & 1) != 0 )
  {
    a5 = 0LL;
    v14 = this[2];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
    if ( (int)CComposition::GetManipulationManager(v14, &a5) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, (struct CVisual *)this, (const struct CMILMatrix *)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  }
  return v12;
}
