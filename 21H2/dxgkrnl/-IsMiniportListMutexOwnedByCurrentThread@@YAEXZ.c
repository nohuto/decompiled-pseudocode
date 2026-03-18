/*
 * XREFs of ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0021CB8
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C038CF44 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C038DDAC (DpiMiracastSendSyncUserModeRequest.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C0391F84 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

char IsMiniportListMutexOwnedByCurrentThread(void)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONG StateMutex; // eax
  char v2; // cl

  CurrentThread = KeGetCurrentThread();
  StateMutex = KeReadStateMutex(Mutex);
  v2 = 1;
  if ( StateMutex == 1
    || CurrentThread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                             &qword_1C01304D8,
                                             (signed __int64)CurrentThread,
                                             (signed __int64)CurrentThread) )
  {
    return 0;
  }
  return v2;
}
