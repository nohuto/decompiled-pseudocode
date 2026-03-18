/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013D338
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133440 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C013CFD0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00116C4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0013058 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE9BC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00DEF38 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0133664 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01340CC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013EFA0 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0164B3C (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  VIDPN_MGR *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int CddAllocations; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _BYTE v36[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v38[64]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v38, 0, sizeof(v38));
  v9 = *((_QWORD *)a1 + 231);
  v36[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( *(_QWORD *)(v9 + 2680) && !a3 )
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2672), v6);
  else
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2672), (unsigned int)v6, 0);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9)
    || v12 && (*(_DWORD *)(v12 + 4) & 0x10) == 0 && *(_QWORD *)(v12 + 16) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2672), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v30 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v30 + 24) = v6;
    *(_QWORD *)(v30 + 32) = v9;
    WdLogEvent5_WdWarning(v30);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v9 + 2672), a1, v6, CddDisplayMode, a4);
  v27 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v13 = *(VIDPN_MGR **)(*(_QWORD *)(v9 + 2672) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, (__int64)v13);
    v15 = WdLogNewEntry5_WdDmmEvent(v14);
    *(_QWORD *)(v15 + 24) = v6;
    *(_QWORD *)(v15 + 32) = v13;
    WdLogEvent5_WdDmmEvent(v15);
    v38[8] = 1 << v6;
    v16 = VIDPN_MGR::SetTimingsFromVidPn(v13, 0LL, 5u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v38, v36, 0, 0LL, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v38[20] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v38, v16);
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v33[3] = v6;
      v33[4] = *(int *)(v9 + 320);
      v33[5] = *(unsigned int *)(v9 + 316);
      v33[6] = v17;
      WdLogEvent5_WdError(v33);
    }
    v18 = v38[20];
    if ( v38[20] )
    {
      v36[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v38[20]) < 0 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v34, v18);
        WdLogEvent5_WdAssertion(v35);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40), v18);
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v29[3] = v6;
    v29[4] = v9;
    v29[5] = v27;
    WdLogEvent5_WdError(v29);
    v36[0] |= 2u;
  }
  DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v9, (struct _DMM_SET_TIMING_RESULT *)v36, a5);
  return 0LL;
}
