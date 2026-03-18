/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C006A0E8
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03A53AC (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000C794 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000C7EC (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0012DD8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C001DA54 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C001F2A4 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C006981C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C006987C (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C006A640 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C018A18C (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 v8; // r9
  __int64 v9; // rax
  ReferenceCounted *v10; // rsi
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 ImportanceOrdinal; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx

  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_DWORD *)this + 41) = 255;
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v9 = operator new[](0x30uLL, 0x4B677844u, 256LL, v8);
    v10 = (ReferenceCounted *)v9;
    if ( !v9 )
    {
      WdLogSingleEntry3(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
        -1073741801LL);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    *(_WORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)v9 = &ReferenceCounted::`vftable';
    *(_QWORD *)v9 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 16) = 1;
    v11 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v9, &a4->GammaRamp);
    v12 = v11;
    if ( v11 < 0 )
    {
      ReferenceCounted::Release(v10);
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
      v15[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v15[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v15[5] = v12;
      *((_DWORD *)this + 16) = v12;
      return this;
    }
    *((_QWORD *)this + 23) = v10;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v16 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  LODWORD(v17) = v16;
  if ( v16 >= 0 )
  {
    *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
    DMMVIDPNPRESENTPATH::SetScalingSupport(
      (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
      &a4->ContentTransformation.ScalingSupport);
    DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
    v18 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
    v17 = v18;
    if ( v18 >= 0 )
    {
      Scaling = a4->ContentTransformation.Scaling;
      if ( Scaling == D3DKMDT_VPPS_UNPINNED
        || (v24 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling), v17 = v24, v24 >= 0) )
      {
        Rotation = a4->ContentTransformation.Rotation;
        if ( Rotation == D3DKMDT_VPPR_UNPINNED
          || (v28 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation), v17 = v28, v28 >= 0) )
        {
          v31 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
          v17 = v31;
          if ( v31 >= 0 )
          {
            DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
            *((_DWORD *)this + 20) = 2;
            return this;
          }
          v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32);
          ImportanceOrdinal = a4->ImportanceOrdinal;
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29);
          ImportanceOrdinal = a4->ContentTransformation.Rotation;
        }
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
        ImportanceOrdinal = a4->ContentTransformation.Scaling;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
      ImportanceOrdinal = a4->Content;
    }
    v21[3] = ImportanceOrdinal;
    v21[4] = *((unsigned int *)a2 + 6);
    v21[5] = *((unsigned int *)a3 + 6);
    v21[6] = v17;
  }
  else
  {
    WdLogSingleEntry3(2LL, a4->CopyProtection.CopyProtectionType, this, v16);
  }
  *((_DWORD *)this + 16) = v17;
  return this;
}
