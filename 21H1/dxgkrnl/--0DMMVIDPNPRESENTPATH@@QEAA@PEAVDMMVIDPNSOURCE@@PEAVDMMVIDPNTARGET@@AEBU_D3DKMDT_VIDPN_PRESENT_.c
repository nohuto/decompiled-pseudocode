/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0013458
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013E7E8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0008C0C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000DCD4 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000DD24 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000DE24 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00112F4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00116F0 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0013630 (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C001365C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0013690 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C0110970 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 Scaling; // rdx
  int v14; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v16; // eax
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGK_GAMMA_RAMP *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  DXGK_GAMMA_RAMP *v26; // rsi
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r14
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 Content; // rcx

  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_DWORD *)this + 41) = 255;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v21 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
    v26 = v21;
    if ( v21 )
    {
      *((_WORD *)v21 + 20) = 0;
      *((_QWORD *)v21 + 3) = 0LL;
      *((_QWORD *)v21 + 4) = 0LL;
      *(_QWORD *)v21 = &ReferenceCounted::`vftable';
      *(_QWORD *)v21 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v21 + 2) = 1;
      *((_DWORD *)v21 + 4) = 1;
    }
    else
    {
      v26 = 0LL;
    }
    if ( !v26 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      v27[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v27[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v27[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v27);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    v28 = DXGK_GAMMA_RAMP::Initialize(v26, &a4->GammaRamp);
    v30 = v28;
    if ( v28 < 0 )
    {
      ReferenceCounted::Release(v26, v29);
      v31 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v31[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v31[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v31[5] = v30;
      *((_DWORD *)this + 16) = v30;
      return this;
    }
    *((_QWORD *)this + 23) = v26;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v8 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v11 = v8;
  if ( v8 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v32[3] = a4->CopyProtection.CopyProtectionType;
    v32[4] = this;
    v32[5] = v11;
    WdLogEvent5_WdError(v32);
LABEL_27:
    *((_DWORD *)this + 16) = v11;
    return this;
  }
  *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
  DMMVIDPNPRESENTPATH::SetScalingSupport(
    (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
    &a4->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
  v12 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
  v11 = v12;
  if ( v12 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->Content;
LABEL_26:
    v33[3] = Content;
    v33[4] = *((unsigned int *)a2 + 6);
    v33[5] = *((unsigned int *)a3 + 6);
    v33[6] = v11;
    goto LABEL_27;
  }
  Scaling = (unsigned int)a4->ContentTransformation.Scaling;
  if ( (_DWORD)Scaling != 254 )
  {
    v14 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling);
    v11 = v14;
    if ( v14 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_26;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v16 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v11 = v16;
    if ( v16 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_26;
    }
  }
  v17 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
  v11 = v17;
  if ( v17 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->ImportanceOrdinal;
    goto LABEL_26;
  }
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  *((_DWORD *)this + 20) = 2;
  return this;
}
