/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03AC5EC
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C03A5664 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // rsi
  __int64 Container; // rax
  VIDPN_MGR *v6; // rdi
  int FirstAvailableTarget; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // [rsp+80h] [rbp+40h] BYREF
  int v21; // [rsp+88h] [rbp+48h] BYREF
  int v22; // [rsp+90h] [rbp+50h] BYREF
  int v23; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v21 = 0;
  v20 = -1;
  v22 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v23 = -2;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                             a1,
                             v3,
                             1,
                             &v20,
                             (DMMVIDPNTARGETSET *)&v22,
                             &v23,
                             &v21);
    v8 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v16 = *((_QWORD *)v6 + 1);
      v17 = *((unsigned int *)a2 + 3);
      if ( !v16 )
      {
        WdLogSingleEntry0(1LL);
        v16 = *((_QWORD *)v6 + 1);
      }
      WdLogSingleEntry4(
        2LL,
        v8,
        *(int *)(*(_QWORD *)(v16 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v16 + 16) + 404LL),
        v17);
      return (unsigned int)v8;
    }
    if ( v21 )
    {
      LODWORD(v3) = v20;
    }
    else
    {
      v3 = v20;
      v9 = VIDPN_MGR::AddPathToVidPnTopology(
             v6,
             a1,
             *((_DWORD *)a2 + 3),
             v20,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
             0xFFFFu,
             0,
             D3DKMDT_MCC_ENFORCE);
      v10 = v9;
      if ( v9 != -1071774975 )
      {
        if ( v9 >= 0 )
        {
          *((_DWORD *)a2 + 5) = v22;
          *((_DWORD *)a2 + 6) = v23;
          *((_DWORD *)a2 + 4) = v3;
        }
        else
        {
          v13 = *((_QWORD *)v6 + 1);
          v14 = *((unsigned int *)a2 + 3);
          if ( !v13 )
          {
            WdLogSingleEntry0(1LL);
            v13 = *((_QWORD *)v6 + 1);
          }
          WdLogSingleEntry5(
            2LL,
            v10,
            *(int *)(*(_QWORD *)(v13 + 16) + 408LL),
            *(unsigned int *)(*(_QWORD *)(v13 + 16) + 404LL),
            v14,
            v3);
        }
        return (unsigned int)v10;
      }
      v11 = *((_QWORD *)v6 + 1);
      v12 = *((unsigned int *)a2 + 3);
      if ( !v11 )
      {
        WdLogSingleEntry0(1LL);
        v11 = *((_QWORD *)v6 + 1);
      }
      WdLogSingleEntry4(
        7LL,
        *(int *)(*(_QWORD *)(v11 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v11 + 16) + 404LL),
        v12,
        v3);
    }
  }
  v18 = *((_QWORD *)v6 + 1);
  v19 = *((unsigned int *)a2 + 3);
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    v18 = *((_QWORD *)v6 + 1);
  }
  WdLogSingleEntry3(7LL, *(int *)(*(_QWORD *)(v18 + 16) + 408LL), *(unsigned int *)(*(_QWORD *)(v18 + 16) + 404LL), v19);
  return 3223192371LL;
}
