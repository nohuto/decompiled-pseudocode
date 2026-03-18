/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C118
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01493BC (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C014B4E0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B784 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000D3D8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FC34 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0147FDC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C0148D18 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01495E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014B454 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C017458C (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct _DXGK_ALLOCATIONINFO *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  int *pPrivateDriverData; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  VIDPN_MGR *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int CddAllocations; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v39[64]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v39, 0, sizeof(v39));
  pPrivateDriverData = (int *)a1[21].pPrivateDriverData;
  v37[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)pPrivateDriverData) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_QWORD *)pPrivateDriverData + 338) && !a3 )
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)pPrivateDriverData + 337), v6);
  else
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)pPrivateDriverData + 337), (unsigned int)v6, 0);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)pPrivateDriverData)
    || v12 && (*(_DWORD *)(v12 + 4) & 0x10) == 0 && *(_QWORD *)(v12 + 16) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)pPrivateDriverData + 337), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v31 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v31 + 24) = v6;
    *(_QWORD *)(v31 + 32) = pPrivateDriverData;
    WdLogEvent5_WdWarning(v31);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                     *((ADAPTER_DISPLAY **)pPrivateDriverData + 337),
                     a1,
                     v6,
                     CddDisplayMode,
                     a4);
  v28 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v13 = *(VIDPN_MGR **)(*((_QWORD *)pPrivateDriverData + 337) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v38, (__int64)v13);
    v16 = WdLogNewEntry5_WdDmmEvent(v15, v14);
    *(_QWORD *)(v16 + 24) = v6;
    *(_QWORD *)(v16 + 32) = v13;
    WdLogEvent5_WdDmmEvent(v16);
    v39[8] = 1 << v6;
    v17 = VIDPN_MGR::SetTimingsFromVidPn(v13, 0LL, 5u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v39, v37, 0, 0LL, 0LL);
    v18 = v17;
    if ( v17 < 0 )
    {
      v39[20] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v39, v17);
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
      v34[3] = v6;
      v34[4] = pPrivateDriverData[80];
      v34[5] = (unsigned int)pPrivateDriverData[79];
      v34[6] = v18;
      WdLogEvent5_WdError(v34);
    }
    v19 = v39[20];
    if ( v39[20] )
    {
      v37[0] |= 2u;
      if ( (int)DmmResetModeState(pPrivateDriverData, v39[20]) < 0 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35, v19);
        WdLogEvent5_WdAssertion(v36);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40), v19);
  }
  else
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v30[3] = v6;
    v30[4] = pPrivateDriverData;
    v30[5] = v28;
    WdLogEvent5_WdError(v30);
    v37[0] |= 2u;
  }
  DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)pPrivateDriverData, (struct _DMM_SET_TIMING_RESULT *)v37, a5);
  return 0LL;
}
