/*
 * XREFs of BmlFunctionalizePath @ 0x1C013E560
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C013E374 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0121C9C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C01390FC (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C01393E0 (BmlGetNextBestSourceMode.c)
 *     BmlPinNextBestTargetMode @ 0x1C013E76C (BmlPinNextBestTargetMode.c)
 *     BmlUnPinSourceMode @ 0x1C02EC3D0 (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DMMVIDPNSOURCEMODESET *v18; // r14
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 BestTargetMode; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  int v28; // ebp
  int NextBestSourceMode; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  VIDPN_MGR *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  struct DMMVIDPNSOURCEMODESET *v61; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v62; // [rsp+88h] [rbp+10h]
  unsigned int v63; // [rsp+90h] [rbp+18h] BYREF
  __int64 v64; // [rsp+98h] [rbp+20h]

  v64 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v14 = (unsigned int)v5;
  v62 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v62 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v43);
  }
  v15 = *(_QWORD *)(a4 + 88);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v61 = 0LL;
    goto LABEL_28;
  }
  v17 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v16 + 96), 1u);
  v18 = *(struct DMMVIDPNSOURCEMODESET **)(v15 + 104);
  v61 = v18;
  if ( !v18 )
  {
LABEL_28:
    LODWORD(v27) = -1071774968;
    goto LABEL_42;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v18 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v18 + 48) )
  {
    LODWORD(v27) = -1071774970;
    goto LABEL_42;
  }
  LODWORD(v19) = -1;
  v63 = -1;
  if ( *(_WORD *)(v13 + a1 + 64) )
  {
    if ( !*((_QWORD *)v18 + 18) )
    {
      v46 = WdLogNewEntry5_WdAssertion(1LL, v9);
      WdLogEvent5_WdAssertion(v46);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v48, v47, v49, v50) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v13 + a1 + 66) && !BmlIsSecondaryClonePath(a1, v5, 0LL) )
      {
        LODWORD(v19) = *(_DWORD *)(*((_QWORD *)v18 + 18) + 24LL);
        v63 = v19;
        goto LABEL_19;
      }
      WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
      *(_WORD *)(v13 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_12:
    LODWORD(v27) = BestTargetMode;
LABEL_13:
    v28 = v27;
LABEL_14:
    LODWORD(v27) = v28;
    goto LABEL_15;
  }
  if ( !*(_WORD *)(v13 + a1 + 66) || BmlIsSecondaryClonePath(a1, v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v17, v9, v11, v12);
    if ( !*((_QWORD *)v18 + 18) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v45);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23, v25, v26) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v13 + a1 + 64);
    goto LABEL_12;
  }
  if ( *((_QWORD *)v18 + 18) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v17, v9);
    WdLogEvent5_WdAssertion(v44);
  }
LABEL_19:
  LODWORD(v27) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v13 + a1 + 64) >= *(_WORD *)(v13 + a1 + 66) )
      goto LABEL_41;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, (unsigned __int16)v5, (__int64)v18, v19, &v63);
    v27 = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v19 = v63;
    if ( v63 == -1 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v55);
    }
    v34 = v62;
    ++*(_WORD *)(v13 + a1 + 64);
    v27 = (int)VIDPN_MGR::PinVidPnSourceMode(v34, v18, v19, 1);
    v39 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = v19;
    *(_QWORD *)(v39 + 32) = v27;
    if ( (int)v27 >= 0 )
    {
      LODWORD(v27) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v64);
      if ( (int)v27 >= 0 )
        goto LABEL_13;
    }
    *(_DWORD *)(v13 + a1 + 88) = v27;
    ++*(_DWORD *)(v13 + a1 + 72);
    if ( (_DWORD)v27 != -1071774970 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
      v56[3] = (int)v27;
      v56[5] = a2;
      v56[6] = v5;
LABEL_39:
      v56[4] = a1;
      v14 = v5;
      WdLogEvent5_WdWarning(v56);
      goto LABEL_42;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
    v56[3] = v27;
    v56[5] = v5;
    v56[6] = a2;
    goto LABEL_39;
  }
LABEL_41:
  v14 = v5;
LABEL_42:
  if ( *(_WORD *)(v13 + a1 + 66) && !BmlIsSecondaryClonePath(a1, v5, 0LL) && *(_WORD *)(v13 + a1 + 64) )
  {
    v28 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v28 >= 0 )
    {
      *(_WORD *)(v13 + a1 + 64) = 0;
      goto LABEL_15;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
    v60[3] = a1;
    v60[4] = a2;
    v60[5] = v14;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_14;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v61, 0LL);
  return (unsigned int)v27;
}
