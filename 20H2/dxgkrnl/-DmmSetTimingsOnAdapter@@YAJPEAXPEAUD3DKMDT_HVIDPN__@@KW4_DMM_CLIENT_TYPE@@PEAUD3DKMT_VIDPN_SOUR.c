/*
 * XREFs of ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013E2E0
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148CB4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0008194 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0163F68 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmSetTimingsOnAdapter(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rbx
  VIDPN_MGR *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DMMVIDPN *v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v28);
  }
  v14 = (struct DXGDEVICE *)a7;
  if ( a7 && (*(_DWORD *)(a7 + 432) != 2 || *(_QWORD *)(a7 + 1848) != a1) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v29);
  }
  ++*(_DWORD *)(*(_QWORD *)(a1 + 2696) + 360LL);
  v15 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 2696) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a7, (__int64)v15);
  v16 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v19 = (struct DMMVIDPN *)v16;
  if ( v16 && *(VIDPN_MGR **)(v16 + 48) == v15 )
  {
    v20 = VIDPN_MGR::SetTimingsFromVidPn(v15, a3, a4, v16, (struct D3DKMT_VIDPN_SOURCE_MASKS *)a5, a6, 0, v14, a8);
    v23 = v20;
    if ( v20 < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v31 + 24) = v19;
      *(_QWORD *)(v31 + 32) = v23;
      WdLogEvent5_WdError(v31);
      v25 = v23;
    }
    else
    {
      v24 = *(_DWORD *)(a5 + 8) | *(_DWORD *)(a5 + 40) | *(_DWORD *)(a5 + 12) | (unsigned int)(*(_DWORD *)(a5 + 48) | *(_DWORD *)(a5 + 80));
      if ( *(_DWORD *)(a5 + 8) | *(_DWORD *)(a5 + 40) | *(_DWORD *)(a5 + 12) | *(_DWORD *)(a5 + 48) | *(_DWORD *)(a5 + 80)
        && (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v15, v19) < 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v27, v24);
        WdLogEvent5_WdAssertion(v32);
      }
      *(_DWORD *)(a5 + 8) |= *(_DWORD *)(a5 + 40);
      v25 = 0;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v18, v17);
    v25 = -1073741811;
    *(_QWORD *)(v30 + 24) = a2;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a7 + 40), v24);
  return v25;
}
