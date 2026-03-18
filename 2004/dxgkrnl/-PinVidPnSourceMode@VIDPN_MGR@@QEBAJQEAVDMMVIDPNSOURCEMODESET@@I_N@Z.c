/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C011F68C
 * Callers:
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C01327C0 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0135160 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C013AF1C (BmlFunctionalizePath.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0147A08 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02E01B4 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C02EC4D0 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00090F8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017DF8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C010F944 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0122664 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rbp
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 Container; // r12
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  DXGK_ENUM_PIVOT v42; // [rsp+68h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v12 = v9;
  if ( v9 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v26[3] = v4;
    v26[4] = a2;
    v27 = *((_QWORD *)this + 1);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v25, v24);
      WdLogEvent5_WdAssertion(v28);
      v27 = *((_QWORD *)this + 1);
    }
    v26[5] = *(_QWORD *)(v27 + 16);
    v26[6] = v12;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v12;
  }
  else
  {
    v13 = *((_QWORD *)a2 + 14);
    if ( !v13 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v29);
    }
    v14 = *(_QWORD *)(v13 + 40);
    if ( !v14 )
    {
      v30 = WdLogNewEntry5_WdAssertion(0LL, v10);
      WdLogEvent5_WdAssertion(v30);
      v14 = *(_QWORD *)(v13 + 40);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(v14 + 64, v10);
    v42.VidPnSourceId = *(_DWORD *)(v13 + 24);
    v42.VidPnTargetId = -1;
    v16 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            3LL,
            a4,
            &v42);
    v20 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1071774970 )
      {
        v31 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v31 + 24) = v4;
        *(_QWORD *)(v31 + 32) = a2;
        WdLogEvent5_WdWarning(v31);
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v32[3] = v4;
        v32[4] = a2;
        v32[5] = v20;
        WdLogEvent5_WdError(v32);
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v34[3] = v4;
      v35 = *(unsigned int *)(v13 + 24);
      v34[4] = v35;
      v34[5] = Container;
      v36 = *((_QWORD *)this + 1);
      if ( !v36 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35, v33);
        WdLogEvent5_WdAssertion(v37);
        v36 = *((_QWORD *)this + 1);
      }
      v34[6] = *(_QWORD *)(v36 + 16);
      WdLogEvent5_WdDmmEvent(v34);
      if ( v8 )
        v38 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v38 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v38 < 0 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v40, v39);
        WdLogEvent5_WdAssertion(v41);
      }
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
