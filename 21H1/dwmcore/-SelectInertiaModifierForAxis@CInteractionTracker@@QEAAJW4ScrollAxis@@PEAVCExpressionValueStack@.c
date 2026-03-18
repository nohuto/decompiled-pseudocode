/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CEDD0
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180205B88 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C93E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x1801C1A24 (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801C1A94 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801C1C14 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1801C2160 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x1801CB124 (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x1801CB1C4 (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1801CD390 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x1801CFB34 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801DBB5C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x180210300 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1802152CC (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180216768 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x180216908 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180216A50 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        wchar_t *a4,
        _QWORD *a5)
{
  __int64 v6; // r12
  __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rax
  int IsAnyConditionSatisfied; // eax
  __int64 v13; // rcx
  int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // esi
  int v21; // esi
  struct CBaseExpression *v22; // rbx
  CMotion *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int ForceForAxis; // eax
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD); // rax
  LPVOID v30; // rax
  LPVOID v31; // rsi
  CMotion *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  bool v37; // zf
  int Value; // eax
  __int64 v39; // rcx
  struct IAccelerator *v40; // rax
  __int64 v41; // rcx
  struct IAccelerator *v42; // rbx
  int v43; // xmm1_4
  int v44; // xmm0_4
  void (__fastcall **v45)(_QWORD); // rax
  CScalarForce *v46; // rax
  CScalarForce *v47; // rsi
  CMotion *v48; // rax
  bool v49; // [rsp+30h] [rbp-50h] BYREF
  float v50; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 (__fastcall ***v51)(_QWORD); // [rsp+38h] [rbp-48h] BYREF
  struct CBaseExpression *v52; // [rsp+40h] [rbp-40h] BYREF
  __int64 v53; // [rsp+48h] [rbp-38h] BYREF
  CScalarForce *v54; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v55[4]; // [rsp+60h] [rbp-20h] BYREF
  bool v56; // [rsp+C0h] [rbp+40h] BYREF
  struct CExpressionValueStack *v57; // [rsp+D0h] [rbp+50h]

  v57 = a3;
  v51 = 0LL;
  v53 = 0LL;
  v6 = (int)a2;
  if ( !(unsigned __int8)InteractionSourceManager::IsInertiaEnabledForAxis(a1 + 192, a2) )
    goto LABEL_35;
  v9 = *(_QWORD *)(a1 + 8 * v6 + 376);
  v10 = 0;
  v11 = v6;
  if ( v9 )
  {
    CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 8 * v6 + 376));
    v56 = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(
                                (CConditionalExpression *)v9,
                                a3,
                                (__int64)a4,
                                &v56);
    v14 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, IsAnyConditionSatisfied, 0xE41u, 0LL);
      goto LABEL_36;
    }
    v11 = v6;
    v10 = v56;
  }
  if ( (unsigned int)v6 > 1 )
  {
    if ( !v10 )
      goto LABEL_35;
    goto LABEL_15;
  }
  if ( v10 )
  {
LABEL_15:
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 408) + 4LL * *(int *)(v9 + 356));
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(a1 + 400);
  if ( !v9 )
    goto LABEL_35;
  CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 400));
  v49 = 0;
  v15 = CConditionalExpression::IsAnyConditionSatisfied((CConditionalExpression *)v9, a3, (__int64)a4, &v49);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE58u, 0LL);
    goto LABEL_36;
  }
  if ( !v49 )
    goto LABEL_35;
  v17 = 3;
  v10 = 2;
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
  CInteractionTracker::GetAnimationForAxis((__int64 *)a1, v6, &v53);
  v19 = v53;
  if ( (*(_BYTE *)(v9 + 208) & 0x40) != 0 )
  {
    v55[0] = *(_DWORD *)(v9 + 200);
    v55[1] = *(_DWORD *)(v53 + 184);
    v55[2] = v17;
    CConditionalExpression::SetDebugTargetInfo(v9, v55);
  }
  v20 = v17 - 1;
  if ( !v20 )
  {
    Value = CConditionalExpression::GetValue((CConditionalExpression *)v9, v57, a4, &v50);
    v14 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, Value, 0xE81u, 0LL);
      goto LABEL_36;
    }
    v40 = (struct IAccelerator *)operator new(0x30uLL);
    v42 = v40;
    if ( v40 )
    {
      *((_DWORD *)v40 + 4) = 0;
      *(_QWORD *)v40 = &CSpringAccelerator::`vftable'{for `IAccelerator'};
      *((_QWORD *)v40 + 1) = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
    }
    else
    {
      v42 = 0LL;
    }
    if ( !v42 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, -2147024882, 0xE87u, 0LL);
      goto LABEL_37;
    }
    (**(void (__fastcall ***)(struct IAccelerator *))v42)(v42);
    v43 = *(_DWORD *)(a1 + 552);
    v44 = *(_DWORD *)(a1 + 548);
    *((_DWORD *)v42 + 6) = *(_DWORD *)(a1 + 536);
    v45 = *(void (__fastcall ***)(_QWORD))v42;
    *((_DWORD *)v42 + 8) = v43;
    *((_DWORD *)v42 + 7) = v44;
    ((void (__fastcall **)(struct IAccelerator *))v45)[4](v42);
    v46 = (CScalarForce *)operator new(0x78uLL);
    if ( v46 )
      v47 = CScalarForce::CScalarForce(v46, v42);
    else
      v47 = 0LL;
    v54 = v47;
    if ( v47 )
      (**(void (__fastcall ***)(CScalarForce *))v47)(v47);
    v48 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
    CMotion::GetCurrentVelocity(v48);
    (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
    CScalarForce::Initialize(v47, (_DWORD)v6 == 2);
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19) + 144) = 1114636288;
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(&v51, (__int64 (__fastcall ****)(_QWORD))&v54);
    if ( v47 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v47 + 8LL))(v47);
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v42 + 8LL))(v42);
LABEL_35:
    v28 = v51;
    v51 = 0LL;
    v14 = 0;
    *a5 = v28;
    goto LABEL_36;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v30 = operator new(0x98uLL);
    v31 = v30;
    if ( v30 )
    {
      v32 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
      CMotion::GetCurrentVelocity(v32);
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
      v30 = (LPVOID)CExpressionForce::CExpressionForce(v31, v33, v34, v9, v6);
    }
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v51, (__int64)v30);
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
    v37 = v51 == 0LL;
    *(_DWORD *)(v35 + 144) = 1101004800;
    if ( v37 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024882, 0xEAAu, 0LL);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  if ( v21 != 1 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147467259, 0xED0u, 0LL);
    goto LABEL_37;
  }
  v52 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
  CConditionalExpression::GetSampledConditionAnimation((CConditionalExpression *)v9, &v52);
  v22 = v52;
  if ( v52 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v52 + 8LL))(v52);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v51);
  v23 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
  CMotion::GetCurrentVelocity(v23);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19);
  if ( v10 != 1 )
  {
    ForceForAxis = CNaturalAnimation::GetForceForAxis(v22, (unsigned int)v6);
    v14 = ForceForAxis;
    if ( ForceForAxis < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, ForceForAxis, 0xEC5u, 0LL);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  v24 = CNaturalAnimation::GetForceForAxis(v22, 0LL);
  v14 = v24;
  if ( v24 >= 0 )
  {
LABEL_32:
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 320LL))(v19) + 144) = 1114636288;
    if ( v22 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v22 + 16LL))(v22);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xEBCu, 0LL);
LABEL_28:
  if ( v22 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v22 + 16LL))(v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
LABEL_36:
  if ( v14 < 0 )
LABEL_37:
    *a5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v51);
  return (unsigned int)v14;
}
