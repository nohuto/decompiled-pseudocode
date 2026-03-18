/*
 * XREFs of ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C014129C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108470 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0140928 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C016F83C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0254610 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks(MANAGEDPRIMARIESTRACKER *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !*(_QWORD *)this )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 20LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (*((_DWORD *)this + 4) & 3) != 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 22LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)this + 16LL))
    || DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 25LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 1336));
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 176LL))(
    *(_QWORD *)(*(_QWORD *)this + 16LL),
    *((_DWORD *)this + 4) >> 2);
  *((_DWORD *)this + 4) |= 1u;
}
