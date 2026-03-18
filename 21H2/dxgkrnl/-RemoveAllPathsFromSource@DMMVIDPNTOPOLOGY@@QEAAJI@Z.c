/*
 * XREFs of ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5824
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03A3090 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(DMMVIDPNTOPOLOGY **this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  char i; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)this, a2) )
  {
    v19 = -1;
    for ( i = 0; ; i = 1 )
    {
      v9 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v2, 0LL, &v19);
      LODWORD(v12) = v9;
      if ( v9 == -1071774919 )
        break;
      if ( v9 < 0 )
      {
        WdLogSingleEntry3(2LL, v2, this, v9);
        return (unsigned int)v12;
      }
      v13 = v19;
      if ( v19 == -1 )
        WdLogSingleEntry0(1LL);
      v14 = DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)this, v2, v13, 0LL);
      v12 = v14;
      if ( v14 < 0 )
      {
        if ( v14 != -1073741790 )
          WdLogSingleEntry0(1LL);
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
        v17[3] = v2;
        v17[4] = v13;
        v17[5] = v12;
        return (unsigned int)v12;
      }
    }
    v18 = WdLogNewEntry5_WdTrace(v11, v10);
    *(_QWORD *)(v18 + 24) = v2;
    *(_QWORD *)(v18 + 32) = this;
    return i == 0 ? 0xC01E0339 : 0;
  }
  else
  {
    v6 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v6 + 24) = v2;
    *(_QWORD *)(v6 + 32) = this;
    return 3223192377LL;
  }
}
