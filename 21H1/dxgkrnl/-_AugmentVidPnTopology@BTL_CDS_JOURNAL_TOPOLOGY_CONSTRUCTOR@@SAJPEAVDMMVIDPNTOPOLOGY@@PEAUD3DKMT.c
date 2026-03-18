/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02EC4A4
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C013C270 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02E21C8 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r15
  __int64 Container; // rax
  VIDPN_MGR *v6; // rbx
  int FirstAvailableTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // [rsp+80h] [rbp+40h] BYREF
  int v47; // [rsp+88h] [rbp+48h] BYREF
  int v48; // [rsp+90h] [rbp+50h] BYREF
  int v49; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, (__int64)a2);
  v47 = 0;
  v46 = -1;
  v48 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v49 = -2;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, (unsigned int)v3, 1, &v46, &v48, &v49, &v47);
    v10 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v24[3] = v10;
      v33 = *((_QWORD *)v6 + 1);
      if ( !v33 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v32, v31);
        WdLogEvent5_WdAssertion(v34);
        v33 = *((_QWORD *)v6 + 1);
      }
      v35 = *(int *)(*(_QWORD *)(v33 + 16) + 320LL);
      v24[4] = v35;
      v36 = *((_QWORD *)v6 + 1);
      if ( !v36 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35, v31);
        WdLogEvent5_WdAssertion(v37);
        v36 = *((_QWORD *)v6 + 1);
      }
      v24[5] = *(unsigned int *)(*(_QWORD *)(v36 + 16) + 316LL);
      v30 = *((unsigned int *)a2 + 3);
LABEL_24:
      v24[6] = v30;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v10;
    }
    if ( v47 )
    {
      LODWORD(v3) = v46;
    }
    else
    {
      v3 = v46;
      v11 = VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              a1,
              *((_DWORD *)a2 + 3),
              v46,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v10 = v11;
      if ( v11 != -1071774975 )
      {
        if ( v11 < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
          v24[3] = v10;
          v25 = *((_QWORD *)v6 + 1);
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v23, v22);
            WdLogEvent5_WdAssertion(v26);
            v25 = *((_QWORD *)v6 + 1);
          }
          v27 = *(int *)(*(_QWORD *)(v25 + 16) + 320LL);
          v24[4] = v27;
          v28 = *((_QWORD *)v6 + 1);
          if ( !v28 )
          {
            v29 = WdLogNewEntry5_WdAssertion(v27, v22);
            WdLogEvent5_WdAssertion(v29);
            v28 = *((_QWORD *)v6 + 1);
          }
          v24[5] = *(unsigned int *)(*(_QWORD *)(v28 + 16) + 316LL);
          v30 = *((unsigned int *)a2 + 3);
          v24[7] = v3;
          goto LABEL_24;
        }
        *((_DWORD *)a2 + 5) = v48;
        *((_DWORD *)a2 + 6) = v49;
        *((_DWORD *)a2 + 4) = v3;
        return (unsigned int)v10;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
      v17 = *((_QWORD *)v6 + 1);
      if ( !v17 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14);
        WdLogEvent5_WdAssertion(v18);
        v17 = *((_QWORD *)v6 + 1);
      }
      v19 = *(int *)(*(_QWORD *)(v17 + 16) + 320LL);
      v16[3] = v19;
      v20 = *((_QWORD *)v6 + 1);
      if ( !v20 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v19, v14);
        WdLogEvent5_WdAssertion(v21);
        v20 = *((_QWORD *)v6 + 1);
      }
      v16[4] = *(unsigned int *)(*(_QWORD *)(v20 + 16) + 316LL);
      v16[5] = *((unsigned int *)a2 + 3);
      v16[6] = v3;
      WdLogEvent5_WdDmmEvent(v16);
    }
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9);
  v42 = *((_QWORD *)v6 + 1);
  if ( !v42 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40, v39);
    WdLogEvent5_WdAssertion(v43);
    v42 = *((_QWORD *)v6 + 1);
  }
  v41[3] = *(int *)(*(_QWORD *)(v42 + 16) + 320LL);
  v44 = *((_QWORD *)v6 + 1);
  if ( !v44 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL, v39);
    WdLogEvent5_WdAssertion(v45);
    v44 = *((_QWORD *)v6 + 1);
  }
  v41[4] = *(unsigned int *)(*(_QWORD *)(v44 + 16) + 316LL);
  v41[5] = *((unsigned int *)a2 + 3);
  WdLogEvent5_WdDmmEvent(v41);
  return 3223192371LL;
}
