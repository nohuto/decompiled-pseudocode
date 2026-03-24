/*
 * XREFs of CiTaskIndexDereference @ 0x1C0001B60
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A580 (CiDispatchCreateTaskIndexClient.c)
 *     CiThreadCreate @ 0x1C000AB70 (CiThreadCreate.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B600 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchClose @ 0x1C000B7B0 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000B8E0 (CiThreadCleanup.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002A80 (CiSchedulerRemoveTaskIndex.c)
 *     CiTaskIndexRemove @ 0x1C000BD00 (CiTaskIndexRemove.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000BD40 (CiAcquireTaskIndexListLock.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000BD80 (CiReleaseTaskIndexListLock.c)
 */

void __fastcall CiTaskIndexDereference(volatile signed __int64 *P)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  bool v4; // zf
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v1 = P;
  _m_prefetchw((const void *)(P + 6));
  v2 = *((_QWORD *)P + 6);
  v3 = v2 - 1;
  v4 = v2 == 1;
  if ( v2 - 1 > 0 )
  {
    while ( 1 )
    {
      v8 = v2;
      v2 = _InterlockedCompareExchange64(v1 + 6, v3, v2);
      if ( v8 == v2 )
        break;
      v3 = v2 - 1;
      v4 = v2 == 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( !v4 )
      __fastfail(0xEu);
    CiAcquireTaskIndexListLock();
    v5 = _InterlockedExchangeAdd64(v1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v5 <= 1;
    v7 = v5 - 1;
    if ( v6 )
    {
      if ( v7 )
        __fastfail(0xEu);
      CiTaskIndexRemove(v1);
    }
    else
    {
      v1 = 0LL;
    }
    CiReleaseTaskIndexListLock();
    if ( v1 )
    {
      CiSchedulerRemoveTaskIndex(v1);
      ExFreePoolWithTag((PVOID)v1, 0);
    }
  }
}
