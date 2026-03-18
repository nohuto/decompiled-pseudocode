/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1C03ABDDC
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x1C03ABC44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0013010 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C006902C (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C01B205C (BmlIsSecondaryHardwareClonePath.c)
 *     BmlGetModeCategoryForRegion @ 0x1C01B2204 (BmlGetModeCategoryForRegion.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C01B28C0 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlAreRawModesEnabled @ 0x1C01B59E8 (BmlAreRawModesEnabled.c)
 *     BmlUnPinSourceMode @ 0x1C03AB82C (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(_BYTE *a1, __int64 a2, unsigned __int16 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r14
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  _QWORD *v14; // r13
  int PathModeListForPathTargetModes; // esi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int16 v23; // bx
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // ebx
  _QWORD *v31; // [rsp+30h] [rbp-68h] BYREF
  VIDPN_MGR *v32; // [rsp+38h] [rbp-60h]
  int v33[22]; // [rsp+40h] [rbp-58h]
  struct DMMVIDPNSOURCEMODE *v34; // [rsp+A8h] [rbp+10h]

  NextMode = 0LL;
  v5 = a3;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  v10 = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v32 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v32 )
    WdLogSingleEntry0(1LL);
  v11 = *(_QWORD *)&a1[v9 + 16];
  *(_WORD *)&a1[v9 + 64] = 0;
  *(_WORD *)&a1[v9 + 68] = 0;
  *(_QWORD *)v33 = DMMVIDPNTOPOLOGY::FindPath(
                     (DMMVIDPNTOPOLOGY *)(a2 + 96),
                     *(_DWORD *)(v11 + 24),
                     *(_DWORD *)(v11 + 28));
  v12 = *(_QWORD *)(*(_QWORD *)v33 + 88LL);
  v13 = *(_QWORD *)(v12 + 104);
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
    v14 = *(_QWORD **)(v12 + 104);
    v31 = v14;
    if ( !v14 )
      goto LABEL_10;
    v16 = v14 + 6;
    if ( (_QWORD *)*v16 == v16 )
    {
      PathModeListForPathTargetModes = 0;
      goto LABEL_36;
    }
    if ( BmlIsSecondaryHardwareClonePath((__int64)a1, v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v18, v17);
      if ( !v14[18] )
        WdLogSingleEntry0(1LL);
    }
    *(_QWORD *)&a1[v9 + 92] = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)&a1[v9 + 100] = 0LL;
    v19 = (_QWORD *)*v16;
    v34 = (struct DMMVIDPNSOURCEMODE *)v14[18];
    if ( (_QWORD *)*v16 != v16 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v19 - 1);
    if ( !NextMode )
      goto LABEL_36;
    while ( 1 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v17);
      v20[3] = *((unsigned int *)NextMode + 6);
      v20[4] = *((unsigned int *)NextMode + 19);
      v20[5] = *((unsigned int *)NextMode + 20);
      v20[6] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode);
      v22 = *((int *)NextMode + 24);
      v20[7] = v22;
      ++*(_DWORD *)&a1[v9 + 92];
      if ( (!v34 || v34 == NextMode)
        && (BmlAreRawModesEnabled((__int64)a1, v10) || (unsigned int)BmlGetModeCategoryForRegion() != 1)
        && (v23 = a3, BmlDoesSourceModeObeyConstraint((__int64)a1, a3, NextMode)) )
      {
        ++*(_DWORD *)&a1[v9 + 96];
        v24 = *((unsigned int *)NextMode + 6);
        if ( !v34 )
        {
          v25 = (int)VIDPN_MGR::PinVidPnSourceMode(v32, (struct DMMVIDPNSOURCEMODESET *const)v14, v24, 1);
          v28 = WdLogNewEntry5_WdTrace(v27, v26);
          *(_QWORD *)(v28 + 24) = v24;
          *(_QWORD *)(v28 + 32) = v25;
          if ( (int)v25 < 0 )
          {
            PathModeListForPathTargetModes = 0;
            goto LABEL_32;
          }
          v23 = a3;
        }
        PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes((int)a1, a2, v23, v33[0], a4);
        if ( !v34 )
        {
          v29 = BmlUnPinSourceMode(a1, a2, v23);
          if ( v29 < 0 )
          {
            WdLogSingleEntry3(3LL, a1, a2, v10);
            goto LABEL_37;
          }
        }
        if ( PathModeListForPathTargetModes < 0 )
        {
          WdLogSingleEntry3(2LL, a1, a2, v10);
          goto LABEL_36;
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v22, v21);
      }
LABEL_32:
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v14, NextMode);
      if ( !NextMode )
        goto LABEL_36;
    }
  }
  v31 = 0LL;
LABEL_10:
  PathModeListForPathTargetModes = -1071774968;
LABEL_36:
  v29 = PathModeListForPathTargetModes;
LABEL_37:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
  return (unsigned int)v29;
}
