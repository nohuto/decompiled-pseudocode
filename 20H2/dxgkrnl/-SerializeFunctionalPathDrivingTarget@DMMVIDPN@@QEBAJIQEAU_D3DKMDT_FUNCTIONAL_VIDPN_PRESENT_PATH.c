/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0146564
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C010DEDC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C01465FC (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rbp
  char *v6; // r8
  int PathSourceFromTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax

  v3 = (unsigned int)a2;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  memset(a3, 0, 0x1E8uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                           (DMMVIDPN *)((char *)this + 96),
                           (unsigned int)v3,
                           v6);
  if ( PathSourceFromTarget == -1 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8);
    v22[3] = v3;
    v23 = *((_QWORD *)this + 6);
    v24 = *(_QWORD *)(v23 + 8);
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v25);
      v24 = *(_QWORD *)(v23 + 8);
    }
    v22[4] = *(_QWORD *)(v24 + 16);
    v22[5] = this;
    WdLogEvent5_WdDmmEvent(v22);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v26 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v26);
    }
    v13 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v17 = v13;
    if ( v13 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
      v29[3] = v3;
      v30 = *((_QWORD *)this + 6);
      v31 = *(_QWORD *)(v30 + 8);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v32);
        v31 = *(_QWORD *)(v30 + 8);
      }
      v29[4] = *(_QWORD *)(v31 + 16);
      v29[5] = this;
      v29[6] = v17;
      WdLogEvent5_WdWarning(v29);
      return (unsigned int)v17;
    }
    else
    {
      return 0LL;
    }
  }
}
