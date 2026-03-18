/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0121880
 * Callers:
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C0121790 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0133FB0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1C0139F78 (BmlPinNextBestTargetMode.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0146858 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02DF1F4 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02EB880 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00090F8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017E58 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C010DD9C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C010E7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  DXGK_ENUM_PIVOT v44; // [rsp+68h] [rbp+10h] BYREF

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
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
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
    v44.VidPnTargetId = *(_DWORD *)(v13 + 24);
    v44.VidPnSourceId = -1;
    v16 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            5LL,
            a4,
            &v44);
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
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v34[3] = v4;
        v34[4] = a2;
        v34[5] = v20;
        WdLogEvent5_WdError(v34);
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32);
      v36[3] = v4;
      v37 = *(unsigned int *)(v13 + 24);
      v36[4] = v37;
      v36[5] = Container;
      v38 = *((_QWORD *)this + 1);
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v37, v35);
        WdLogEvent5_WdAssertion(v39);
        v38 = *((_QWORD *)this + 1);
      }
      v36[6] = *(_QWORD *)(v38 + 16);
      WdLogEvent5_WdDmmEvent(v36);
      if ( v8 )
        v40 = DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v40 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v40 < 0 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v42, v41);
        WdLogEvent5_WdAssertion(v43);
      }
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
