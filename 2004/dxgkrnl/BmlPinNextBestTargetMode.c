/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C013B128
 * Callers:
 *     BmlFunctionalizePath @ 0x1C013AF1C (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0122A00 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C0137AAC (BmlGetNextBestTargetMode.c)
 *     BmlPinPathContentScaling @ 0x1C013B380 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C013B430 (BmlPinPathContentRotation.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C02EBDBC (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  DMMVIDPNSOURCEMODESET *v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int16 v25; // r12
  int NextBestTargetMode; // eax
  __int64 v27; // rax
  unsigned __int16 v28; // bx
  __int64 v29; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+40h] [rbp-68h]
  VIDPN_MGR *v50; // [rsp+48h] [rbp-60h]
  DMMVIDPNSOURCEMODESET *v51; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v52; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v53; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v54; // [rsp+C0h] [rbp+18h]
  __int64 v55; // [rsp+C8h] [rbp+20h] BYREF

  v54 = a3;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = 0;
  v6 = (unsigned __int16)a3;
  v8 = 104LL * (unsigned __int16)a3;
  v53 = (unsigned __int16)a3;
  v9 = a2;
  v50 = v4;
  v11 = (unsigned __int16)a3;
  if ( !v4 )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v35);
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v55 = 0LL;
    goto LABEL_29;
  }
  a2 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v49 = *(_QWORD *)(v12 + 104);
  v55 = v49;
  if ( !v49 )
  {
LABEL_29:
    v36 = WdLogNewEntry5_WdError(v12, a2);
    *(_QWORD *)(v36 + 24) = v6;
    WdLogEvent5_WdError(v36);
    v5 = -1071774968;
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(a4 + 96);
  v15 = *(_QWORD *)(v14 + 104);
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 96), 1u);
    v16 = *(DMMVIDPNSOURCEMODESET **)(v14 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v51 = v16;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, 1LL, a3, a4);
  v17[3] = v16;
  v17[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v21 = *(unsigned __int16 *)(a1 + v8 + 70);
  v17[5] = v21;
  if ( !v16 )
  {
    LODWORD(v24) = -1071774967;
    goto LABEL_43;
  }
  if ( *((DMMVIDPNSOURCEMODESET **)v16 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v24) = -1071774970;
    goto LABEL_43;
  }
  LODWORD(v22) = -1;
  v52 = -1;
  if ( *(_WORD *)(a1 + v8 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v21, v18);
      WdLogEvent5_WdAssertion(v39);
    }
    v21 = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( (_WORD)v21 )
    {
      LODWORD(v22) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v52 = v22;
LABEL_13:
      LODWORD(v24) = -1071774970;
      if ( *(_WORD *)(a1 + v8 + 68) < (unsigned __int16)v21 )
      {
        while ( 1 )
        {
          v48 = v22;
          v25 = v54;
          NextBestTargetMode = BmlGetNextBestTargetMode(a1, v9, v54, v16, v49, v48, &v52);
          v24 = NextBestTargetMode;
          if ( NextBestTargetMode < 0 )
            break;
          v22 = v52;
          if ( v52 == -1 )
          {
            v40 = WdLogNewEntry5_WdAssertion(v21, v18);
            WdLogEvent5_WdAssertion(v40);
          }
          ++*(_WORD *)(a1 + v8 + 68);
          LODWORD(v24) = VIDPN_MGR::PinVidPnTargetMode(v50, v16, v22, 1);
          if ( (int)v24 >= 0 )
          {
            v27 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
            v28 = v54;
            v29 = v54;
            *(_QWORD *)(v27 + 24) = v22;
            if ( (int)BmlPinPathContentScaling(a1, v9, v29) >= 0 && (int)BmlPinPathContentRotation(a1, v9, v28) >= 0 )
              goto LABEL_20;
            LODWORD(v24) = -1071774970;
          }
          *(_DWORD *)(a1 + v8 + 88) = v24;
          ++*(_DWORD *)(a1 + v8 + 76);
          if ( (_DWORD)v24 != -1071774970 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v18, v19);
            v11 = v53;
            v46[3] = (int)v24;
            v46[4] = a1;
            v46[5] = v11;
            v46[6] = v9;
            WdLogEvent5_WdWarning(v46);
            goto LABEL_43;
          }
          if ( *(_WORD *)(a1 + v8 + 68) >= *(_WORD *)(a1 + v8 + 70) )
            goto LABEL_42;
        }
        if ( NextBestTargetMode == -1071774970 )
        {
          v11 = v53;
        }
        else
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v18, v19);
          v11 = v53;
          v47[3] = v24;
          v47[4] = a1;
          v47[5] = v11;
          v47[6] = v9;
          WdLogEvent5_WdWarning(v47);
        }
        goto LABEL_44;
      }
LABEL_42:
      v11 = v53;
LABEL_43:
      v25 = v54;
LABEL_44:
      v41 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
      *(_QWORD *)(v41 + 24) = *(unsigned __int16 *)(a1 + v8 + 68);
      *(_QWORD *)(v41 + 32) = *(unsigned __int16 *)(a1 + v8 + 70);
      if ( *(_WORD *)(a1 + v8 + 70) && *(_WORD *)(a1 + v8 + 68) )
      {
        if ( (int)BmlUnPinPartialPathModalityOnPath(a1, v9, v25) < 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
          v45[3] = a1;
          v45[4] = v11;
          v45[5] = v9;
          WdLogEvent5_WdWarning(v45);
        }
        *(_WORD *)(a1 + v8 + 68) = 0;
      }
      v5 = v24;
      goto LABEL_20;
    }
    WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_WORD *)(a1 + v8 + 68) = 0;
    goto LABEL_38;
  }
  v21 = *(unsigned __int16 *)(a1 + v8 + 70);
  v23 = *((_QWORD *)v16 + 18);
  if ( (_WORD)v21 )
  {
    if ( v23 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v21, v18);
      WdLogEvent5_WdAssertion(v38);
      v21 = *(unsigned __int16 *)(a1 + v8 + 70);
    }
    goto LABEL_13;
  }
  if ( !v23 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v21, v18);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( (int)BmlPinPathContentScaling(a1, v9, (unsigned __int16)v6) < 0
    || (int)BmlPinPathContentRotation(a1, v9, (unsigned __int16)v6) < 0 )
  {
    WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
LABEL_38:
    v5 = -1071774970;
    goto LABEL_20;
  }
  ++*(_WORD *)(a1 + v8 + 68);
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
LABEL_21:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v55, 0LL);
  return v5;
}
