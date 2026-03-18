/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C013E6C4
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D614 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C0010910 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C001093C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0128D1C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013E7E8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  struct DMMVIDPNPRESENTPATH *v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  struct DMMVIDPNPRESENTPATH *v27; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v28; // [rsp+68h] [rbp+10h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 16LL) != KeGetCurrentThread() )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v27 = 0LL;
  v28 = 0LL;
  v9 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v28);
  v14 = v9;
  if ( v9 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v24[3] = VidPnSourceId;
    v24[4] = VidPnTargetId;
    v24[5] = v14;
  }
  else
  {
    v15 = v28;
    *((_WORD *)v28 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[44];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v27,
      (__int64 (__fastcall ***)(_QWORD, __int64))v15);
    v16 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v27, 2LL, 1);
    v19 = v16;
    LODWORD(v14) = -1071774957;
    if ( v16 == -1071774957
      || (LODWORD(v14) = -1071774920, v16 == -1071774920)
      || (LODWORD(v14) = -1071774975, v16 == -1071774975) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18);
      v25[3] = VidPnSourceId;
      v25[4] = VidPnTargetId;
      v25[5] = a2;
      WdLogEvent5_WdDmmEvent(v25);
    }
    else if ( v16 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v26[3] = VidPnSourceId;
      v26[4] = VidPnTargetId;
      v26[5] = a2;
      v26[6] = v19;
      WdLogEvent5_WdError(v26);
      LODWORD(v14) = v19;
    }
    else
    {
      v27 = 0LL;
      LODWORD(v14) = 0;
    }
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v27);
  return (unsigned int)v14;
}
