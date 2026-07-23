/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x1405F30D0
 * Callers:
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1406D33C4 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpLogReceiveMessage @ 0x1408C3EF0 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, int a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // r14
  ULONG_PTR v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // r15d
  volatile signed __int64 *v12; // rsi
  int v13; // eax
  volatile signed __int64 *v14; // rbp
  volatile signed __int64 *v15; // r12
  __int64 v16; // r8
  int v17; // edx
  volatile signed __int64 *v18; // rcx
  ULONG_PTR v19; // rbx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-38h] BYREF

  BugCheckParameter2[0] = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v7 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (_DWORD)a4, (__int64)BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v8 = BugCheckParameter2[0];
    if ( v7 != *(_QWORD *)(BugCheckParameter2[0] + 16) )
    {
      v9 = -1073740030;
LABEL_12:
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      return v9;
    }
    v10 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v10 & 0x10000) == 0 || (v11 = 1, v7 != *(_QWORD *)(BugCheckParameter2[0] + 64)) )
      v11 = 0;
    if ( (v10 & 7) != 4 && !v11 )
    {
      v9 = -1073741811;
      goto LABEL_12;
    }
    v12 = (volatile signed __int64 *)(v7 + 352);
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v13 = *(_DWORD *)(v7 + 416);
    if ( (v13 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      return 3221227264LL;
    }
    if ( (v13 & 0x10) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      return 3221225537LL;
    }
    v14 = (volatile signed __int64 *)(v7 + 136);
    if ( v11 )
    {
      ExAcquirePushLockExclusiveEx(v7 + 136, 0LL);
      *(_DWORD *)(v8 + 40) &= ~0x10000u;
      v15 = (volatile signed __int64 *)(v7 + 200);
      **(_QWORD **)(v8 + 88) = *(_QWORD *)(v8 + 80);
      *(_QWORD *)(*(_QWORD *)(v8 + 80) + 8LL) = *(_QWORD *)(v8 + 88);
      --*(_DWORD *)(v7 + 464);
    }
    else
    {
      v15 = (volatile signed __int64 *)(v7 + 200);
      ExAcquirePushLockExclusiveEx(v7 + 200, 0LL);
      --*(_DWORD *)(v7 + 460);
      *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v8 + 16) = 0LL;
      **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v8 + 8);
    }
    if ( !v11 )
    {
      v16 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
      LODWORD(v16) = v16 | 0x40000000;
      if ( !*(_QWORD *)(v8 + 144) )
        v16 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
      v17 = v16 | 0x10000000;
      if ( !*(_QWORD *)(v8 + 152) )
        v17 = v16;
      if ( (v17 & a5) != 0 )
      {
        *(_WORD *)(v8 + 244) |= 0x2000u;
        AlpcpInsertMessagePendingQueue(v7, v8, v16, 0LL);
        goto LABEL_31;
      }
      *(_WORD *)(v8 + 244) &= ~0x2000u;
    }
    --*(_WORD *)(v8 - 30);
    if ( v11 )
    {
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_34;
      v18 = (volatile signed __int64 *)(v7 + 136);
      goto LABEL_33;
    }
LABEL_31:
    v14 = v15;
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
    {
LABEL_34:
      KeAbPostRelease((ULONG_PTR)v14);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      v19 = BugCheckParameter2[0];
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(BugCheckParameter2[0]);
      *a4 = v19;
      return 0LL;
    }
    v18 = v15;
LABEL_33:
    ExfTryToWakePushLock(v18);
    goto LABEL_34;
  }
  return result;
}
