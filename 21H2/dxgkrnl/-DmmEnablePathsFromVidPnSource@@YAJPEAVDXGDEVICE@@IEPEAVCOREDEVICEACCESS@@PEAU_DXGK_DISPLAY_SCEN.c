/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0162A00 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3530 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001CE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00131CC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x1C001EE1C (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C4B58 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01F2B3C (-DmmResetModeState@@YAJQEAXK@Z.c)
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
  __int64 v10; // r9
  VIDPN_MGR *v11; // rbx
  int v12; // edx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int CddAllocations; // eax
  __int64 v16; // rdx
  _BYTE v17[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v19[68]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v19, 0, 0x104uLL);
  v9 = *((_QWORD *)a1 + 231);
  v17[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(v9 + 2800) || a3 )
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2792), v6, 0);
  else
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2792), v6);
  if ( DXGADAPTER::UsingDelayCreateCddAllocation((DXGADAPTER *)v9)
    || v10 && (*(_DWORD *)(v10 + 4) & 0x10) == 0 && *(_QWORD *)(v10 + 16) )
  {
    goto LABEL_7;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2792), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    WdLogSingleEntry2(3LL, v6, v9);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v9 + 2792), a1, v6, CddDisplayMode, a4);
  if ( CddAllocations >= 0 )
  {
LABEL_7:
    v11 = *(VIDPN_MGR **)(*(_QWORD *)(v9 + 2792) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, (__int64)v11);
    WdLogSingleEntry2(7LL, v6, v11);
    v19[8] = 1 << v6;
    v12 = VIDPN_MGR::SetTimingsFromVidPn(v11, 0, 5u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v19, v17, 0, 0LL, 0LL);
    if ( v12 < 0 )
    {
      v19[21] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v19, v12);
      WdLogSingleEntry4(2LL, v6, *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v16);
    }
    if ( v19[21] )
    {
      v17[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v19[21]) < 0 )
        WdLogSingleEntry0(1LL);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
  }
  else
  {
    WdLogSingleEntry3(2LL, v6, v9, CddAllocations);
    v17[0] |= 2u;
  }
  DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v9, (struct _DMM_SET_TIMING_RESULT *)v17, a5);
  return 0LL;
}
