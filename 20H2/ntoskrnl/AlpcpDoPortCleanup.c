/*
 * XREFs of AlpcpDoPortCleanup @ 0x1405E9688
 * Callers:
 *     AlpcpClosePort @ 0x1405EA240 (AlpcpClosePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     AlpcpFlushResourcesPort @ 0x1405E97AC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x1405E98B4 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1405E9C9C (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x1406E3BE4 (AlpcpFreeCompletionList.c)
 */

char __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  void *v3; // rcx
  __int64 v4; // rax
  _QWORD **v5; // r14
  volatile signed __int64 *v7; // rdi
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax

  AlpcpDisconnectPort((PADAPTER_OBJECT)a1);
  v2 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v3 = *(void **)(a1 + 24);
  v4 = 0LL;
  if ( ((unsigned __int8)v3 & 1) == 0 )
    v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v3, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v5 = (_QWORD **)(a1 + 232);
    if ( *v5 != v5 )
    {
      v7 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
      while ( 1 )
      {
        v9 = *v5;
        if ( *v5 == v5 )
          break;
        *(v9 - 1) = 0LL;
        v10 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v9 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v9 - 22), 1u, 1, v8, 2);
      }
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      KeAbPostRelease((ULONG_PTR)v7);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
