/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C01BDB08
 * Callers:
 *     BmlFunctionalizePath @ 0x1C01BD8FC (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 *     BmlPinPathContentScaling @ 0x1C01BDD7C (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C01BDE20 (BmlPinPathContentRotation.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C03AB628 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  VIDPN_MGR *v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  DMMVIDPNSOURCEMODESET *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // ebx
  int NextBestTargetMode; // eax
  unsigned int v22; // ebx
  VIDPN_MGR *v23; // rcx
  __int64 v24; // rbx
  struct _D3DDDI_RATIONAL *v25; // rcx
  unsigned __int16 v26; // bx
  __int64 v27; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rax
  struct _D3DDDI_RATIONAL v34; // [rsp+50h] [rbp-19h] BYREF
  _QWORD *v35; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-9h]
  VIDPN_MGR *v37; // [rsp+68h] [rbp-1h]
  DMMVIDPNSOURCEMODESET *v38; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp+67h] BYREF
  UINT v40; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int16 v41; // [rsp+E0h] [rbp+77h]
  __int64 v42; // [rsp+E8h] [rbp+7Fh]

  v41 = a3;
  v5 = a3;
  v6 = 120LL * a3;
  v7 = *(VIDPN_MGR **)(a2 + 48);
  v8 = 0;
  v9 = a3;
  v37 = v7;
  v42 = a3;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v9 = v5;
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v35 = 0LL;
    goto LABEL_29;
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v36 = *(_QWORD **)(v12 + 104);
  v35 = v36;
  if ( !v36 )
  {
LABEL_29:
    WdLogSingleEntry1(2LL, v9);
    v8 = -1071774968;
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
  v38 = v16;
  v18 = WdLogNewEntry5_WdTrace(v12, v9);
  *(_QWORD *)(v18 + 24) = v16;
  *(_QWORD *)(v18 + 32) = *(unsigned __int16 *)(v6 + a1 + 68);
  *(_QWORD *)(v18 + 40) = *(unsigned __int16 *)(v6 + a1 + 70);
  if ( !v16 )
  {
    v20 = -1071774967;
    v31 = v5;
LABEL_49:
    v33 = WdLogNewEntry5_WdTrace(v18, v17);
    *(_QWORD *)(v33 + 24) = *(unsigned __int16 *)(v6 + a1 + 68);
    *(_QWORD *)(v33 + 32) = *(unsigned __int16 *)(v6 + a1 + 70);
    if ( *(_WORD *)(v6 + a1 + 70) && *(_WORD *)(v6 + a1 + 68) )
    {
      if ( (int)BmlUnPinPartialPathModalityOnPath(a1, a2, (unsigned __int16)v5) < 0 )
        WdLogSingleEntry3(3LL, a1, v31, a2);
      *(_WORD *)(v6 + a1 + 68) = 0;
    }
    v8 = v20;
    goto LABEL_20;
  }
  if ( *((DMMVIDPNSOURCEMODESET **)v16 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)v16 + 48) )
  {
    v20 = -1071774970;
LABEL_47:
    v31 = v42;
LABEL_48:
    LOWORD(v5) = v41;
    goto LABEL_49;
  }
  v19 = -1;
  v39 = -1;
  if ( *(_WORD *)(v6 + a1 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
      WdLogSingleEntry0(1LL);
    v18 = *(unsigned __int16 *)(v6 + a1 + 70);
    if ( (_WORD)v18 )
    {
      v19 = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v39 = v19;
      goto LABEL_13;
    }
    WdLogNewEntry5_WdTrace(v18, v17);
    *(_WORD *)(v6 + a1 + 68) = 0;
    goto LABEL_38;
  }
  v18 = *(unsigned __int16 *)(v6 + a1 + 70);
  if ( (_WORD)v18 )
  {
    if ( *((_QWORD *)v16 + 18) )
    {
      WdLogSingleEntry0(1LL);
      v18 = *(unsigned __int16 *)(v6 + a1 + 70);
      v19 = v39;
    }
LABEL_13:
    v20 = -1071774970;
    if ( *(_WORD *)(v6 + a1 + 68) < (unsigned __int16)v18 )
    {
      while ( 1 )
      {
        v34 = 0LL;
        v40 = 1;
        NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, v41, v16, v36, v19, &v39, &v34, (int *)&v40);
        v20 = NextBestTargetMode;
        if ( NextBestTargetMode < 0 )
          break;
        v22 = v39;
        if ( v39 == -1 )
          WdLogSingleEntry0(1LL);
        v23 = v37;
        ++*(_WORD *)(v6 + a1 + 68);
        v20 = VIDPN_MGR::PinVidPnTargetMode(v23, v16, v22, 1);
        if ( v20 >= 0 )
        {
          v24 = v39;
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = v24;
          v25 = (struct _D3DDDI_RATIONAL *)*((_QWORD *)v16 + 18);
          v26 = v41;
          v27 = v41;
          v25[19] = v34;
          v25[20].Numerator = v40;
          if ( (int)BmlPinPathContentScaling(a1, a2, v27) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v26) >= 0 )
            goto LABEL_20;
          v20 = -1071774970;
        }
        *(_DWORD *)(v6 + a1 + 88) = v20;
        ++*(_DWORD *)(v6 + a1 + 76);
        if ( v20 != -1071774970 )
        {
          v32 = v20;
LABEL_45:
          v31 = v42;
          WdLogSingleEntry4(3LL, v32, a1, v42, a2);
          goto LABEL_48;
        }
        if ( *(_WORD *)(v6 + a1 + 68) >= *(_WORD *)(v6 + a1 + 70) )
          goto LABEL_47;
        v19 = v39;
      }
      if ( NextBestTargetMode != -1071774970 )
      {
        v32 = NextBestTargetMode;
        goto LABEL_45;
      }
    }
    goto LABEL_47;
  }
  if ( !*((_QWORD *)v16 + 18) )
    WdLogSingleEntry0(1LL);
  if ( (int)BmlPinPathContentScaling(a1, a2, (unsigned __int16)v5) < 0
    || (int)BmlPinPathContentRotation(a1, a2, (unsigned __int16)v5) < 0 )
  {
    WdLogNewEntry5_WdTrace(v30, v29);
LABEL_38:
    v8 = -1071774970;
    goto LABEL_20;
  }
  ++*(_WORD *)(v6 + a1 + 68);
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v38, 0LL);
LABEL_21:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v35, 0LL);
  return v8;
}
