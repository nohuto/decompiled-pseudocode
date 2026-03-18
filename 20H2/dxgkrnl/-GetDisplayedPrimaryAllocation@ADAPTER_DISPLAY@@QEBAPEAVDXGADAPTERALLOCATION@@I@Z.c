/*
 * XREFs of ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C0147B68
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0148988 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014AF68 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C022D14C (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0014870 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0148430 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

struct DXGADAPTERALLOCATION *__fastcall ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
        DXGADAPTER **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGADAPTERALLOCATION *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v11 + 24) = 1665LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v12 + 24) = 1666LL;
    WdLogEvent5_WdAssertion(v12);
  }
  result = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v3, 0);
  if ( !result )
  {
    v9 = *((_QWORD *)this[14] + 496 * v3 + 86);
    if ( !v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(3968 * v3, v7, v8);
      v10[3] = v3;
      v10[4] = this[2];
LABEL_8:
      WdLogEvent5_WdWarning(v10);
      return 0LL;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v9 + 16) + 16LL)) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v15 + 24) = 1691LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)v9, (unsigned int)v3);
    if ( !DisplayedPrimary )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v10[3] = v9;
      v10[4] = v3;
      v10[5] = this[2];
      goto LABEL_8;
    }
    return (struct DXGADAPTERALLOCATION *)*((_QWORD *)DisplayedPrimary + 6);
  }
  return result;
}
