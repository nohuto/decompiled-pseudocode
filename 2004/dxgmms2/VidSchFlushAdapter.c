/*
 * XREFs of VidSchFlushAdapter @ 0x1C00D2940
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00D12B8 (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1C00D3F50 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6C0 (VidSchIsTDRPending.c)
 *     VidSchIsWorkerThread @ 0x1C00113B0 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00113CC (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0011408 (VidSchiClearFlipDevice.c)
 *     VidSchiGetSchedulerStatus @ 0x1C00144EC (VidSchiGetSchedulerStatus.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x1C00320CC (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x1C00321DC (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0032800 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0033098 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00331C8 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C003C908 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C970 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x1C008067C (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x1C0084960 (VidSchResumeAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C008F4F8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00D0E18 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiHandleControlEvent @ 0x1C00D12B8 (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00D2140 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiBlockDriverCallback @ 0x1C00D58B4 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // esi
  int v6; // r12d
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDSCH_GLOBAL *i; // r14
  __int64 v11; // rcx
  _QWORD v12[20]; // [rsp+38h] [rbp-59h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 20) && CurrentThread != *((struct _KTHREAD **)a1 + 21) )
        *((_BYTE *)a1 + 2940) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( v4 )
      {
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          if ( *((_DWORD *)a1 + 729) == 3 )
          {
            VidSchiBlockDriverCallback(a1);
            *((_DWORD *)a1 + 9) = 23;
            RtlClearAllBitsEx((char *)a1 + 576);
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue((__int64)a1);
        }
        if ( v4 == 15 || *((_DWORD *)a1 + 729) == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(a1);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 36);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 288);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice(0LL, (__int64)i - 104);
        }
        VidSchResumeAdapter((__int64)a1, 0);
        VidSchiUnwaitAllContexts((__int64)a1);
        VidSchiClearFlipDevice((struct _KEVENT *)a1, 0LL, 9u);
        VidSchiCleanupQueuedCommand((__int64)a1);
        if ( (unsigned int)(*((_DWORD *)a1 + 77) - 2) > 1 )
          VidSchiHandleControlEvent(a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 889LL) )
    {
      v6 = VidSchiRequestSchedulerStatus((__int64)a1, 3, 1);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v6 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v11, (__int64)a1, v4);
      if ( v6 >= 0 && (v4 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || v4 == 15 )
          VidSchiUnwaitAllContexts((__int64)a1);
        if ( *((_DWORD *)a1 + 179) )
        {
          memset(v12, 0, sizeof(v12));
          LODWORD(v12[4]) |= 0x10u;
          LODWORD(v12[2]) = 1;
          v12[5] = (char *)a1 + 716;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x1Au);
        }
        if ( *((_DWORD *)a1 + 182) )
        {
          memset(v12, 0, sizeof(v12));
          LODWORD(v12[4]) |= 0x10u;
          LODWORD(v12[2]) = 3;
          v12[5] = (char *)a1 + 728;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x19u);
        }
        if ( v4 != 5 )
        {
          VidSchiClearFlipDevice((struct _KEVENT *)a1, 0LL, 9u);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 217, (_DWORD *)a1 + 182);
        }
      }
    }
    LOBYTE(v3) = v4 == 15;
    _InterlockedOr((volatile signed __int32 *)a1 + 1625, v3);
    return (unsigned int)v6;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
