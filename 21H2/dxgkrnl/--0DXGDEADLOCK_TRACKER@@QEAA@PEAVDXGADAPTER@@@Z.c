/*
 * XREFs of ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0167340
 * Callers:
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00E8E44 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 * Callees:
 *     <none>
 */

DXGDEADLOCK_TRACKER *__fastcall DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(char *DeferredContext, struct DXGADAPTER *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  *(_QWORD *)DeferredContext = 0LL;
  *((_DWORD *)DeferredContext + 2) = 0;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_WORD *)DeferredContext + 16) = 0;
  *((_QWORD *)DeferredContext + 3) = a2;
  DeferredContext[34] = 1;
  v3 = DXGDEADLOCK_TRACKER::DeadlockCounter;
  *((_QWORD *)DeferredContext + 38) = 0LL;
  *((_QWORD *)DeferredContext + 37) = v3;
  *(_QWORD *)DeferredContext = KeQueryUnbiasedInterruptTime();
  KeInitializeTimer((PKTIMER)(DeferredContext + 168));
  KeInitializeDpc((PRKDPC)(DeferredContext + 232), (PKDEFERRED_ROUTINE)DeadlockTimeOutDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 40));
  KeInitializeDpc((PRKDPC)(DeferredContext + 104), (PKDEFERRED_ROUTINE)DeadlockPulseDpc, DeferredContext);
  _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)DeferredContext + 3) + 24LL));
  v4 = *((_QWORD *)DeferredContext + 3);
  *((_QWORD *)DeferredContext + 38) = -1LL;
  v5 = *(int *)(v4 + 4464);
  *((_DWORD *)DeferredContext + 2) = v5;
  if ( KeSetTimer((PKTIMER)(DeferredContext + 168), (LARGE_INTEGER)(-10000 * v5), (PKDPC)(DeferredContext + 232)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v13 + 24) = 11474LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *((_QWORD *)DeferredContext + 3);
  v9 = *(int *)(v8 + 4468);
  *((_DWORD *)DeferredContext + 3) = v9;
  *((_DWORD *)DeferredContext + 4) = *(_DWORD *)(v8 + 4472);
  if ( KeSetTimer((PKTIMER)(DeferredContext + 40), (LARGE_INTEGER)(-10000 * v9), (PKDPC)(DeferredContext + 104)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v14 + 24) = 11481LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return (DXGDEADLOCK_TRACKER *)DeferredContext;
}
