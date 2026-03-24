/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1C02ECB80
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1C02EC830 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000A5C8 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C000A680 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0125010 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C013B368 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlPinPathContentScaling @ 0x1C013E9C4 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C013EA74 (BmlPinPathContentRotation.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02EA440 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C02EC11C (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int v5; // edi
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // r12
  DMMVIDPNSOURCEMODE *v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v27; // rbx
  _QWORD *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // eax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r12d
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v48; // [rsp+20h] [rbp-81h]
  struct DMMVIDPNSOURCEMODE *v49; // [rsp+28h] [rbp-79h]
  DMMVIDPNSOURCEMODE *v50; // [rsp+30h] [rbp-71h]
  __int64 v51; // [rsp+38h] [rbp-69h] BYREF
  VIDPN_MGR *v52; // [rsp+40h] [rbp-61h]
  _QWORD *v53; // [rsp+48h] [rbp-59h] BYREF
  _OWORD v54[3]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v55; // [rsp+80h] [rbp-21h]
  __int128 v56; // [rsp+88h] [rbp-19h]
  __int128 v57; // [rsp+98h] [rbp-9h]
  bool v58; // [rsp+A8h] [rbp+7h]
  __int16 v59; // [rsp+A9h] [rbp+8h]
  char v60; // [rsp+ABh] [rbp+Ah]
  int v61; // [rsp+ACh] [rbp+Bh]
  unsigned __int16 v63; // [rsp+110h] [rbp+6Fh]
  unsigned int v64; // [rsp+118h] [rbp+77h]

  v63 = a3;
  v5 = 0;
  v6 = (unsigned __int16)a3;
  v8 = 104LL * (unsigned __int16)a3;
  v52 = *(VIDPN_MGR **)(a2 + 48);
  v48 = v8;
  if ( !v52 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a4 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v51 = 0LL;
LABEL_6:
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    v5 = -1071774968;
    goto LABEL_41;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD *)(v11 + 104);
  v51 = v13;
  if ( !v13 )
    goto LABEL_6;
  v15 = *(_QWORD *)(a4 + 96);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD **)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v53 = v17;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v18[3] = v17;
  v18[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v21 = *(unsigned __int16 *)(v8 + a1 + 70);
  v18[5] = v21;
  if ( !v17 )
  {
    v5 = -1071774967;
    goto LABEL_40;
  }
  v22 = v17 + 6;
  if ( (_QWORD *)*v22 != v22 )
  {
    v23 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    v50 = v23;
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, 0LL);
      *(_QWORD *)(v24 + 24) = v13;
      *(_QWORD *)(v24 + 32) = v6;
      WdLogEvent5_WdAssertion(v24);
      v5 = -1071774968;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v21, v23, v19, v20);
      v50 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    }
    v25 = (_QWORD *)*v22;
    v49 = (struct DMMVIDPNSOURCEMODE *)v17[18];
    NextMode = 0LL;
    if ( (_QWORD *)*v22 != v22 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v25 - 1);
    if ( NextMode )
    {
      v27 = v48;
      do
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v23, v19, v20);
        v28[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
        v28[4] = *((unsigned int *)NextMode + 21);
        v28[5] = *((unsigned int *)NextMode + 22);
        v31 = *((unsigned int *)NextMode + 23);
        v28[6] = v31;
        v28[7] = *((unsigned int *)NextMode + 24);
        ++*(_DWORD *)(v27 + a1 + 100);
        if ( (!v49 || v49 == NextMode) && BmlDoesTargetModeObeyConstraint(a1, v63, (__int64)NextMode) )
        {
          ++*(_DWORD *)(v27 + a1 + 104);
          v32 = *((_DWORD *)NextMode + 6);
          v64 = v32;
          if ( v49 )
          {
            v5 = 0;
          }
          else
          {
            v5 = VIDPN_MGR::PinVidPnTargetMode(v52, (struct DMMVIDPNTARGETMODESET *const)v17, v32, 1);
            v32 = v64;
          }
          if ( v5 < 0 )
          {
            v5 = 0;
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v28, v29, v30) + 24) = v32;
            if ( (int)BmlPinPathContentScaling(a1, a2, v63) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v63) >= 0 )
            {
              v59 = 0;
              v60 = 0;
              GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v50);
              v34 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
              v35 = *(_OWORD *)&GraphicsInfo->Stride;
              LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
              v56 = v34;
              v61 = (int)GraphicsInfo;
              v36 = *(_OWORD *)((char *)NextMode + 72);
              LODWORD(GraphicsInfo) = *((_DWORD *)v50 + 18);
              v57 = v35;
              v37 = *(_OWORD *)((char *)NextMode + 88);
              v54[0] = v36;
              v38 = *(_OWORD *)((char *)NextMode + 104);
              v54[1] = v37;
              v58 = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
              *(_QWORD *)&v37 = *((_QWORD *)NextMode + 15);
              v54[2] = v38;
              v55 = v37;
              v5 = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v54);
              if ( v5 < 0 )
              {
                v45 = WdLogNewEntry5_WdError(v40, v39);
                WdLogEvent5_WdError(v45);
                break;
              }
            }
            v27 = v48;
          }
          v44 = BmlUnPinPartialPathModalityOnPath(a1, a2, v63);
          if ( v44 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
            v46[5] = a2;
            v46[3] = a1;
            v46[4] = v6;
            WdLogEvent5_WdWarning(v46);
            v5 = v44;
            break;
          }
          if ( v49 )
            break;
        }
        else
        {
          WdLogNewEntry5_WdTrace(v31, v28, v29, v30);
        }
        NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v17, NextMode);
      }
      while ( NextMode );
    }
  }
LABEL_40:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v53, 0LL);
LABEL_41:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v51, 0LL);
  return (unsigned int)v5;
}
