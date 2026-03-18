/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02E21C8
 * Callers:
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C02DE8A0 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02EC4A4 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x1C005AD10 (-GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011DA1C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // r15
  _DWORD *v14; // r14
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 Container; // rbp
  char *v18; // r8
  bool v19; // di
  char *v20; // rcx
  DMMVIDPNTARGETSET *v21; // rbx
  struct DMMVIDPNTARGET *NextTarget; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rax
  DMMVIDPNTARGETSET *v29; // [rsp+78h] [rbp+20h]

  v7 = (unsigned int)a2;
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = a5;
  *a4 = -1;
  if ( a5 )
    *a5 = -2;
  v14 = a6;
  if ( a6 )
    *a6 = -2;
  v15 = a7;
  if ( a7 )
    *a7 = 0;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, a2);
  v19 = (_DWORD)v7 == -1;
  v29 = *(DMMVIDPNTARGETSET **)(Container + 312);
  v20 = (char *)v29 + 24;
  v21 = (DMMVIDPNTARGETSET *)*((_QWORD *)v29 + 3);
  if ( v21 == (DMMVIDPNTARGETSET *)((char *)v29 + 24) )
    NextTarget = 0LL;
  else
    NextTarget = (DMMVIDPNTARGETSET *)((char *)v21 - 8);
  if ( NextTarget )
  {
    while ( 1 )
    {
      if ( v19 )
      {
        v23 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v23 + 112)
          && (a3 != 2 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v23 + 80)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((unsigned int *)NextTarget + 6), v18) == -1 )
        {
LABEL_23:
          v15 = a7;
          v14 = a6;
          v13 = a5;
          break;
        }
      }
      else
      {
        v19 = *((_DWORD *)NextTarget + 6) == (_DWORD)v7;
      }
      NextTarget = DMMVIDPNTARGETSET::GetNextTarget(v29, NextTarget);
      if ( !NextTarget )
        goto LABEL_23;
    }
  }
  if ( v19 )
  {
    if ( NextTarget )
    {
      *a4 = *((_DWORD *)NextTarget + 6);
      if ( v13 )
        *v13 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 80LL);
      if ( v14 )
        *v14 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 84LL);
      if ( v15 )
        *v15 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 88LL);
      return 0LL;
    }
    else
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v20);
      *(_QWORD *)(v26 + 24) = Container;
      WdLogEvent5_WdDmmEvent(v26);
      return 3223192371LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v20, v16);
    *(_QWORD *)(v24 + 24) = Container;
    *(_QWORD *)(v24 + 32) = v7;
    WdLogEvent5_WdError(v24);
    return 3223192325LL;
  }
}
