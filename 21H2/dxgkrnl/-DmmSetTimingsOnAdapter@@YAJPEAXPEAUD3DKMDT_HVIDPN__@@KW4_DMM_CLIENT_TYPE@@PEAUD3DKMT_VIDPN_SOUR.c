/*
 * XREFs of ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01BB9EC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E3518 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
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
  struct DXGDEVICE *v12; // rbx
  VIDPN_MGR *v13; // rbp
  struct DMMVIDPN *v14; // rax
  struct DMMVIDPN *v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // ebx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v12 = (struct DXGDEVICE *)a7;
  if ( a7 && (*(_DWORD *)(a7 + 432) != 2 || *(_QWORD *)(a7 + 1848) != a1) )
    WdLogSingleEntry0(1LL);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 2792) + 416LL);
  v13 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 2792) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a7, (__int64)v13);
  v14 = (struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v15 = v14;
  if ( v14 && *((VIDPN_MGR **)v14 + 6) == v13 )
  {
    v16 = VIDPN_MGR::SetTimingsFromVidPn(v13, a3, a4, v14, (struct D3DKMT_VIDPN_SOURCE_MASKS *)a5, a6, 0, v12, a8);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(2LL, v15, v16);
      v18 = v17;
    }
    else
    {
      if ( *(_DWORD *)(a5 + 8) | *(_DWORD *)(a5 + 40) | *(_DWORD *)(a5 + 12) | *(_DWORD *)(a5 + 48) | *(_DWORD *)(a5 + 52) | *(_DWORD *)(a5 + 84)
        && (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v13, v15) < 0 )
      {
        WdLogSingleEntry0(1LL);
      }
      *(_DWORD *)(a5 + 8) |= *(_DWORD *)(a5 + 40);
      v18 = 0;
    }
  }
  else
  {
    v18 = -1073741811;
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a7 + 40));
  return v18;
}
