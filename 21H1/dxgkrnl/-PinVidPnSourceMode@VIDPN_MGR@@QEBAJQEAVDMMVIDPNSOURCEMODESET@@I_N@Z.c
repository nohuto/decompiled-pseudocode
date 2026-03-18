/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0128620
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00E0CAC (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00E4A24 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C0128220 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C013E4C4 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02DBC34 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C02E7F60 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0018818 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011CED4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0129A6C (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
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
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  DXGK_ENUM_PIVOT v43; // [rsp+68h] [rbp+10h] BYREF

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
    v43.VidPnSourceId = *(_DWORD *)(v13 + 24);
    v43.VidPnTargetId = -1;
    v16 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            3LL,
            a4,
            &v43);
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
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v33[3] = v4;
        v33[4] = a2;
        v33[5] = v20;
        WdLogEvent5_WdError(v33);
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
      v35[3] = v4;
      v36 = *(unsigned int *)(v13 + 24);
      v35[4] = v36;
      v35[5] = Container;
      v37 = *((_QWORD *)this + 1);
      if ( !v37 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36, v34);
        WdLogEvent5_WdAssertion(v38);
        v37 = *((_QWORD *)this + 1);
      }
      v35[6] = *(_QWORD *)(v37 + 16);
      WdLogEvent5_WdDmmEvent(v35);
      if ( v8 )
        v39 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v39 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v39 < 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41, v40);
        WdLogEvent5_WdAssertion(v42);
      }
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
