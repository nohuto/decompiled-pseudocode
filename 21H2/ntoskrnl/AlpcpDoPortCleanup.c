/*
 * XREFs of AlpcpDoPortCleanup @ 0x14074DB0C
 * Callers:
 *     AlpcpClosePort @ 0x14074DA90 (AlpcpClosePort.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     AlpcpFlushResourcesPort @ 0x14074DC30 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14074DD38 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14074E130 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x1407F7C68 (AlpcpFreeCompletionList.c)
 */

__int64 __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  void *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 **v5; // r14
  volatile signed __int64 *v7; // rdi
  _DWORD *v8; // r9
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 **v11; // rax

  AlpcpDisconnectPort((PVOID)a1);
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
    ExfTryToWakePushLock(a1 + 352);
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
    v5 = (volatile signed __int32 **)(a1 + 232);
    if ( *v5 != (volatile signed __int32 *)v5 )
    {
      v7 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
      while ( 1 )
      {
        v9 = *v5;
        if ( *v5 == (volatile signed __int32 *)v5 )
          break;
        *((_QWORD *)v9 - 1) = 0LL;
        v10 = *(_QWORD *)v9;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9
          || (v11 = (volatile signed __int32 **)*((_QWORD *)v9 + 1), *v11 != v9) )
        {
          __fastfail(3u);
        }
        *v11 = (volatile signed __int32 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        *(_QWORD *)v9 = 0LL;
        KeReleaseSemaphoreEx(v9 - 44, 1LL, 1LL, v8, 2);
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
