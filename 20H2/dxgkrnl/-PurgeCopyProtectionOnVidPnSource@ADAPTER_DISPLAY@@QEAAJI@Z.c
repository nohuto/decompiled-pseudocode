/*
 * XREFs of ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C013F35C
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C014874C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C013ED38 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rax
  DXGADAPTER **i; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 5498LL;
    WdLogEvent5_WdAssertion(v15);
  }
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v16 + 24) = 5501LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 42) + 16LL) != CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v6);
    *(_QWORD *)(v10 + 24) = 5502LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  for ( i = (DXGADAPTER **)this[8]; i != this + 8 && i; i = (DXGADAPTER **)*i )
  {
    if ( *((_DWORD *)i + 13) == a2 )
      *((_DWORD *)i + 14) = 0;
  }
  v13 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v12);
  return v13;
}
