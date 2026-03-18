/*
 * XREFs of ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0299FA8
 * Callers:
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F44AC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 * Callees:
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C016D178 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDevice(CSERIALIZEDWORKQUEUE ***this, char *a2)
{
  char *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax

  if ( a2 && *((_DWORD *)a2 + 10) == 1299018836 )
  {
    v4 = a2 + 888;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    a2[912] = 1;
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    v5 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
           this + 47,
           (void (*)(void *))DXGSESSIONMGR::DestroyTtmDeviceWorker,
           a2);
    v8 = v5;
    if ( v5 >= 0 )
      return;
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v9[3] = *((unsigned int *)a2 + 20);
    v9[4] = *((_QWORD *)a2 + 8);
    v9[5] = v8;
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v9[3] = a2;
  }
  WdLogEvent5_WdError(v9);
}
