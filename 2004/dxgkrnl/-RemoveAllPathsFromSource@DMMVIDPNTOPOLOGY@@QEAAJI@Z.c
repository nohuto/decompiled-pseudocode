/*
 * XREFs of ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0147884
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DCC74 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0146E7C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C02E3EC0 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000B258 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0122764 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01385EC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(char **this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char i; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)this, a2) )
  {
    v28 = -1;
    for ( i = 0; ; i = 1 )
    {
      v9 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v2, 0LL, &v28);
      v14 = v9;
      if ( v9 == -1071774919 )
      {
        v21 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
        *(_QWORD *)(v21 + 24) = v2;
        *(_QWORD *)(v21 + 32) = this;
        return i == 0 ? 0xC01E0339 : 0;
      }
      if ( v9 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
        v27[3] = v2;
        v27[4] = this;
        v27[5] = v14;
        WdLogEvent5_WdError(v27);
        return (unsigned int)v14;
      }
      v15 = v28;
      if ( v28 == -1 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v11, v10);
        WdLogEvent5_WdAssertion(v24);
      }
      v16 = DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)this, (unsigned int)v2, v15, 0LL);
      v14 = v16;
      if ( v16 < 0 )
        break;
    }
    if ( v16 != -1073741790 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    v26[3] = v2;
    v26[4] = v15;
    v26[5] = v14;
    return (unsigned int)v14;
  }
  else
  {
    v23 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v23 + 24) = v2;
    *(_QWORD *)(v23 + 32) = this;
    return 3223192377LL;
  }
}
