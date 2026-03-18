/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0140264
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0135030 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014007C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0141110 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0270B20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     DxgkDispMgrSourceOperation @ 0x1C02AD4B0 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

unsigned __int8 __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, __int64 a2)
{
  char v3; // bl
  ADAPTER_DISPLAY *v4; // rcx
  unsigned int v5; // esi
  __int64 v7; // rax

  v3 = 0;
  v4 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 334);
  v5 = a2;
  if ( v4
    || (v7 = WdLogNewEntry5_WdAssertion(0LL, a2),
        *(_QWORD *)(v7 + 24) = 9656LL,
        WdLogEvent5_WdAssertion(v7),
        (v4 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 334)) != 0LL) )
  {
    if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v4, v5) )
      return 1;
  }
  return v3;
}
