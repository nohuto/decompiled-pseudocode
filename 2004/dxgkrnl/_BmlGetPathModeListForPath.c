/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1C02EC4D0
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x1C02EC318 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000A330 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C005B254 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C011F68C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C0135A5C (BmlIsSecondaryClonePath.c)
 *     BmlGetModeCategoryForRegion @ 0x1C0135C24 (BmlGetModeCategoryForRegion.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0135FC8 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlAreRawModesEnabled @ 0x1C0137E08 (BmlAreRawModesEnabled.c)
 *     BmlUnPinSourceMode @ 0x1C02EC070 (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02EC820 (_BmlGetPathModeListForPathTargetModes.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(_BYTE *a1, __int64 a2, __int64 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r15
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rcx
  _QWORD *v19; // r13
  int PathModeListForPathTargetModes; // esi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // r8
  _QWORD *v46; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // [rsp+30h] [rbp-68h] BYREF
  VIDPN_MGR *v50; // [rsp+38h] [rbp-60h]
  int v51[22]; // [rsp+40h] [rbp-58h]
  struct DMMVIDPNSOURCEMODE *v52; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v53; // [rsp+B0h] [rbp+18h]

  v53 = a3;
  NextMode = 0LL;
  v5 = (unsigned __int16)a3;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 104 * v5;
  *(_QWORD *)(v10 + 24) = v5;
  v14 = v5;
  *(_QWORD *)(v10 + 32) = a2;
  v50 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v50 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *(_QWORD *)&a1[v13 + 16];
  *(_WORD *)&a1[v13 + 64] = 0;
  *(_WORD *)&a1[v13 + 68] = 0;
  *(_QWORD *)v51 = DMMVIDPNTOPOLOGY::FindPath(
                     (DMMVIDPNTOPOLOGY *)(a2 + 96),
                     *(_DWORD *)(v16 + 24),
                     *(_DWORD *)(v16 + 28));
  v17 = *(_QWORD *)(*(_QWORD *)v51 + 88LL);
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    v49 = 0LL;
LABEL_10:
    PathModeListForPathTargetModes = -1071774968;
    goto LABEL_33;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD **)(v17 + 104);
  v49 = v19;
  if ( !v19 )
    goto LABEL_10;
  v21 = v19 + 6;
  if ( (_QWORD *)*v21 == v21 )
  {
    PathModeListForPathTargetModes = 0;
  }
  else
  {
    if ( BmlIsSecondaryClonePath((__int64)a1, v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      if ( !v19[18] )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v22);
        WdLogEvent5_WdAssertion(v27);
      }
    }
    *(_QWORD *)&a1[v13 + 92] = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)&a1[v13 + 100] = 0LL;
    v28 = (_QWORD *)*v21;
    v52 = (struct DMMVIDPNSOURCEMODE *)v19[18];
    if ( (_QWORD *)*v21 != v21 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v28 - 1);
    for ( ; NextMode; NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v19, NextMode) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v22, v24, v25);
      v29[3] = *((unsigned int *)NextMode + 6);
      v29[4] = *((unsigned int *)NextMode + 19);
      v29[5] = *((unsigned int *)NextMode + 20);
      v29[6] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode, v30);
      v34 = *((int *)NextMode + 24);
      v29[7] = v34;
      ++*(_DWORD *)&a1[v13 + 92];
      if ( (!v52 || v52 == NextMode)
        && (BmlAreRawModesEnabled((__int64)a1, v14) || (unsigned int)BmlGetModeCategoryForRegion() != 1)
        && BmlDoesSourceModeObeyConstraint((__int64)a1, v53, (unsigned int *)NextMode) )
      {
        ++*(_DWORD *)&a1[v13 + 96];
        v35 = *((unsigned int *)NextMode + 6);
        if ( v52 )
        {
          LODWORD(v36) = 0;
        }
        else
        {
          v36 = (int)VIDPN_MGR::PinVidPnSourceMode(v50, (struct DMMVIDPNSOURCEMODESET *const)v19, v35, 1);
          v41 = WdLogNewEntry5_WdTrace(v38, v37, v39, v40);
          *(_QWORD *)(v41 + 24) = v35;
          *(_QWORD *)(v41 + 32) = v36;
        }
        if ( (int)v36 < 0 )
        {
          PathModeListForPathTargetModes = 0;
        }
        else
        {
          PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes((int)a1, a2, v53, v51[0], a4);
          if ( !v52 )
          {
            v44 = BmlUnPinSourceMode(a1, a2, v53);
            if ( v44 < 0 )
            {
              v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v45);
              v48[3] = a1;
              v48[4] = a2;
              v48[5] = v14;
              WdLogEvent5_WdWarning(v48);
              goto LABEL_34;
            }
          }
          if ( PathModeListForPathTargetModes < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
            v46[3] = a1;
            v46[4] = a2;
            v46[5] = v14;
            WdLogEvent5_WdError(v46);
            break;
          }
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v34, v31, v32, v33);
      }
    }
  }
LABEL_33:
  v44 = PathModeListForPathTargetModes;
LABEL_34:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v49, 0LL);
  return (unsigned int)v44;
}
