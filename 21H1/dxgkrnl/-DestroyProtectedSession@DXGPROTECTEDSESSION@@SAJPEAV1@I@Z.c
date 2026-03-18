/*
 * XREFs of ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0283C30
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C0272BE0 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02840C0 (-SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C0284230 (DxgkCreateProtectedSession.c)
 *     DxgkDestroyProtectedSession @ 0x1C0284C10 (DxgkDestroyProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1C0284ED0 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0283A9C (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::DestroyProtectedSession(struct DXGPROTECTEDSESSION *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  DXGPROCESS *Current; // rax
  __int64 v11; // rax

  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 1091LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 1092LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2 )
  {
    Current = DXGPROCESS::GetCurrent(v8, v7);
    DXGPROCESS::FreeHandleSafe(Current, a2);
  }
  if ( !*((_DWORD *)a1 + 18) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v11 + 24) = 1153LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
    ADAPTER_DISPLAY::DestroyProtectedSession(*((DXGADAPTER ***)a1 + 2), a1);
  return 0LL;
}
