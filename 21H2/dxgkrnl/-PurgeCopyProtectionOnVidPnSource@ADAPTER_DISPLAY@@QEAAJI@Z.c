/*
 * XREFs of ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01E4EE8
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0162FC0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC490 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rdi
  DXGADAPTER **i; // rax
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5729LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5729LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 5732LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 5732LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)Current + 50) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5733LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsCopyProtectionMutexOwner()",
      5733LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  for ( i = (DXGADAPTER **)this[10]; i != this + 10 && i; i = (DXGADAPTER **)*i )
  {
    if ( *((_DWORD *)i + 13) == a2 )
      *((_DWORD *)i + 14) = 0;
  }
  v10 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v10;
}
