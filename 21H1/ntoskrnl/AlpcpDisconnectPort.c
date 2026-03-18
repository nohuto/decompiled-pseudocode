/*
 * XREFs of AlpcpDisconnectPort @ 0x140647404
 * Callers:
 *     NtAlpcDisconnectPort @ 0x140645B50 (NtAlpcDisconnectPort.c)
 *     AlpcpDoPortCleanup @ 0x140646DFC (AlpcpDoPortCleanup.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x1402EEA30 (ObReferenceObjectSafe.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064942C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpWalkConnectionList @ 0x1406E499C (AlpcpWalkConnectionList.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1406E7FDC (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406E9E0C (AlpcpSignalPortAndUnlock.c)
 */

__int64 __fastcall AlpcpDisconnectPort(__int64 DmaAdapter, char a2)
{
  __int64 *v2; // r12
  volatile signed __int64 *v5; // rdi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rdi
  ULONG_PTR v16; // rdi
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h]

  v2 = *(__int64 **)(DmaAdapter + 16);
  v17 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 - 2), 0LL);
  v5 = (volatile signed __int64 *)(DmaAdapter + 352);
  ExAcquirePushLockExclusiveEx(DmaAdapter + 352, 0LL);
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(DmaAdapter + 416) |= 0x80u;
  v6 = *(_DWORD *)(DmaAdapter + 416);
  if ( (v6 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(DmaAdapter + 352);
    KeAbPostRelease(DmaAdapter + 352);
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    return 3221225527LL;
  }
  else
  {
    *(_DWORD *)(DmaAdapter + 416) = v6 | 0x20;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(DmaAdapter + 352);
    KeAbPostRelease(DmaAdapter + 352);
    v7 = *(_DWORD *)(DmaAdapter + 416);
    if ( (v7 & 6) == 2 )
    {
      AlpcpWalkConnectionList(DmaAdapter);
      v7 = *(_DWORD *)(DmaAdapter + 416);
    }
    v8 = ((v7 >> 1) & 3) - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = *v2;
        v10 = DmaAdapter;
      }
      else
      {
        v9 = v2[2];
        v10 = *v2;
      }
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
    }
    v18 = v10;
    if ( v9 )
      v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
    if ( v10 )
    {
      v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      v18 = v10;
    }
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    if ( v9 )
    {
      *((_QWORD *)&v17 + 1) = &v17;
      *(_QWORD *)&v17 = &v17;
      do
      {
        v11 = AlpcpCancelMessagesByRequestor(DmaAdapter, v9, (int)v9 + 144, 1, (__int64)&v17);
        v12 = AlpcpCancelMessagesByRequestor(DmaAdapter, v9, (int)v9 + 160, 2, (__int64)&v17) | v11;
        v13 = AlpcpCancelMessagesByRequestor(DmaAdapter, v9, (int)v9 + 184, 3, (__int64)&v17) | v12;
      }
      while ( v13 | (unsigned int)AlpcpCancelMessagesByRequestor(DmaAdapter, v9, (int)v9 + 208, 4, (__int64)&v17) );
      HalPutDmaAdapter((PADAPTER_OBJECT)v9);
      v10 = v18;
      while ( 1 )
      {
        v14 = v17;
        if ( (__int128 *)v17 == &v17 )
          break;
        *(_QWORD *)&v17 = *(_QWORD *)v17;
        v16 = v14 - 80;
        *(_QWORD *)(v17 + 8) = &v17;
        AlpcpLockForCachedReferenceBlob(v16);
        if ( v18 )
        {
          ExAcquirePushLockSharedEx(v18 + 352, 0LL);
          if ( (*(_DWORD *)(v18 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v16 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v18 + 352));
            KeAbPostRelease(v18 + 352);
          }
          else
          {
            *(_DWORD *)(v16 + 72) = _InterlockedIncrement((volatile signed __int32 *)(DmaAdapter + 400));
            *(_QWORD *)(v16 + 128) = *(_QWORD *)(DmaAdapter + 56);
            *(_QWORD *)(v16 + 56) = DmaAdapter;
            *(_QWORD *)(v16 + 64) = v18;
            AlpcpInsertMessageCanceledQueue(v18, v16);
            AlpcpSignalPortAndUnlock(v18);
          }
        }
        else
        {
          --*(_WORD *)(v16 - 30);
        }
        AlpcpUnlockMessage(v16);
      }
    }
    if ( v10 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return 0LL;
  }
}
