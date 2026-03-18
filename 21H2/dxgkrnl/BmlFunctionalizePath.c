/*
 * XREFs of BmlFunctionalizePath @ 0x1C01BD8FC
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C01BD718 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C01B205C (BmlIsSecondaryHardwareClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C01B2338 (BmlGetNextBestSourceMode.c)
 *     BmlPinNextBestTargetMode @ 0x1C01BDB08 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinSourceMode @ 0x1C03AB82C (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  struct DMMVIDPNSOURCEMODESET *v15; // r14
  __int64 v16; // r12
  __int64 BestTargetMode; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // ebp
  int NextBestSourceMode; // eax
  VIDPN_MGR *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // [rsp+20h] [rbp-58h]
  struct DMMVIDPNSOURCEMODESET *v35; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v36; // [rsp+88h] [rbp+10h]
  unsigned int v37; // [rsp+90h] [rbp+18h] BYREF
  __int64 v38; // [rsp+98h] [rbp+20h]

  v38 = a4;
  v5 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v10 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v11 = (unsigned int)v5;
  v12 = 1LL;
  v36 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v36 )
  {
    WdLogSingleEntry0(1LL);
    v12 = 1LL;
  }
  v13 = *(_QWORD *)(a4 + 88);
  v14 = *(_QWORD *)(v13 + 104);
  if ( !v14 )
  {
    v35 = 0LL;
    goto LABEL_28;
  }
  _InterlockedAdd((volatile signed __int32 *)(v14 + 96), 1u);
  v15 = *(struct DMMVIDPNSOURCEMODESET **)(v13 + 104);
  v35 = v15;
  if ( !v15 )
  {
LABEL_28:
    LODWORD(v20) = -1071774968;
    goto LABEL_42;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v15 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v15 + 48) )
  {
    LODWORD(v20) = -1071774970;
    goto LABEL_42;
  }
  LODWORD(v16) = -1;
  v37 = -1;
  if ( *(_WORD *)(v10 + a1 + 64) )
  {
    if ( !*((_QWORD *)v15 + 18) )
      WdLogSingleEntry0(1LL);
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v10 + a1 + 66) && !BmlIsSecondaryHardwareClonePath(a1, v5, 0LL) )
      {
        LODWORD(v16) = *(_DWORD *)(*((_QWORD *)v15 + 18) + 24LL);
        v37 = v16;
        goto LABEL_19;
      }
      WdLogNewEntry5_WdTrace(v31, v30);
      *(_WORD *)(v10 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_12:
    LODWORD(v20) = BestTargetMode;
LABEL_13:
    v21 = v20;
LABEL_14:
    LODWORD(v20) = v21;
    goto LABEL_15;
  }
  if ( !*(_WORD *)(v10 + a1 + 66) || BmlIsSecondaryHardwareClonePath(a1, v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v12, v9);
    if ( !*((_QWORD *)v15 + 18) )
      WdLogSingleEntry0(1LL);
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v10 + a1 + 64);
    goto LABEL_12;
  }
  if ( *((_QWORD *)v15 + 18) )
    WdLogSingleEntry0(1LL);
LABEL_19:
  LODWORD(v20) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v10 + a1 + 64) >= *(_WORD *)(v10 + a1 + 66) )
      goto LABEL_41;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, v5, (__int64)v15, v16, &v37);
    LODWORD(v20) = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v16 = v37;
    if ( v37 == -1 )
      WdLogSingleEntry0(1LL);
    v24 = v36;
    ++*(_WORD *)(v10 + a1 + 64);
    v20 = (int)VIDPN_MGR::PinVidPnSourceMode(v24, v15, v16, 1);
    v27 = WdLogNewEntry5_WdTrace(v26, v25);
    *(_QWORD *)(v27 + 24) = v16;
    *(_QWORD *)(v27 + 32) = v20;
    if ( (int)v20 >= 0 )
    {
      LODWORD(v20) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v38);
      if ( (int)v20 >= 0 )
        goto LABEL_13;
    }
    *(_DWORD *)(v10 + a1 + 88) = v20;
    ++*(_DWORD *)(v10 + a1 + 72);
    if ( (_DWORD)v20 != -1071774970 )
    {
      v32 = (int)v20;
      v33 = a2;
      v34 = v5;
LABEL_39:
      v11 = v5;
      WdLogSingleEntry4(3LL, v32, a1, v33, v34);
      goto LABEL_42;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v32 = NextBestSourceMode;
    v34 = a2;
    v33 = v5;
    goto LABEL_39;
  }
LABEL_41:
  v11 = v5;
LABEL_42:
  if ( *(_WORD *)(v10 + a1 + 66) && !BmlIsSecondaryHardwareClonePath(a1, v5, 0LL) && *(_WORD *)(v10 + a1 + 64) )
  {
    v21 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v21 >= 0 )
    {
      *(_WORD *)(v10 + a1 + 64) = 0;
      goto LABEL_15;
    }
    WdLogSingleEntry3(3LL, a1, a2, v11);
    goto LABEL_14;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, 0LL);
  return (unsigned int)v20;
}
