/*
 * XREFs of ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0213F74
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01488B0 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00020C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0139AF0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014BBA4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0169D68 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211B58 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = a3;
  v8 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 3127LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 3128LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 231) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 3129LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v16 + 24) = 3130LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = WdLogNewEntry5_WdEvent(v15, v14);
  *(_QWORD *)(v17 + 24) = a2;
  *(_QWORD *)(v17 + 32) = v4;
  WdLogEvent5_WdEvent(v17);
  if ( *((_QWORD *)a2 + 231) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) && DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v4) )
  {
    ADAPTER_DISPLAY::DisablePrimaryOnDevice(this, a2, v4, 0);
    v8 = 1;
  }
  ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v4);
  ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v4);
  return v8;
}
