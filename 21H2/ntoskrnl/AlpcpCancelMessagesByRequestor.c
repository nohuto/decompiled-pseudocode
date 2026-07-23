/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x1406D21B0
 * Callers:
 *     AlpcpDisconnectPort @ 0x1406D1E5C (AlpcpDisconnectPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1406D26F0 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpTransferQuotaMessage @ 0x1406D2CBC (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1406D309C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406D89C0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4, __int64 a5)
{
  int v5; // r10d
  __int64 v6; // rsi
  BOOL v10; // eax
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  unsigned int v13; // r12d
  volatile signed __int64 *v14; // rdi
  __int64 v16; // r9
  int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rsi
  __int64 v24; // rax
  ULONG_PTR *i; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h]
  unsigned int v28; // [rsp+88h] [rbp+20h]

  v5 = *(_DWORD *)(a2 + 416) & 6;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
  {
    v10 = v5 != 4;
    goto LABEL_3;
  }
  if ( v5 == 2 )
  {
    v10 = 0;
LABEL_3:
    if ( !v10 )
      goto LABEL_5;
  }
  if ( a4 == 3 )
  {
    v28 = 1;
LABEL_16:
    v11 = 176LL;
    goto LABEL_7;
  }
LABEL_5:
  v28 = 0;
  if ( a4 <= 2 )
  {
    v11 = 136LL;
    goto LABEL_7;
  }
  if ( a4 == 3 )
    goto LABEL_16;
  v11 = 200LL;
LABEL_7:
  ExAcquirePushLockExclusiveEx(v11 + a2, 0LL);
  v12 = *a3;
  v13 = 0;
  while ( (ULONG_PTR *)v12 != a3 )
  {
    BugCheckParameter2 = v12;
    if ( *(_QWORD *)(v12 + 24) == v6 || (*(_DWORD *)(v12 + 40) & 0x8000) != 0 )
    {
      AlpcpReferenceBlob(v12);
      if ( !(unsigned __int8)AlpcpTryLockForCachedReferenceBlob(v12) )
      {
        if ( a4 <= 2 )
        {
          v23 = (volatile signed __int64 *)(a2 + 136);
        }
        else if ( a4 == 3 )
        {
          v23 = (volatile signed __int64 *)(a2 + 176);
        }
        else
        {
          v23 = (volatile signed __int64 *)(a2 + 200);
        }
        if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v23);
        KeAbPostRelease((ULONG_PTR)v23);
        v13 = 1;
        AlpcpLockForCachedReferenceBlob(v12);
        if ( a4 <= 2 )
        {
          v24 = 136LL;
        }
        else
        {
          v24 = 176LL;
          if ( a4 != 3 )
            v24 = 200LL;
        }
        ExAcquirePushLockExclusiveEx(v24 + a2, 0LL);
        v6 = a1;
        if ( *(_QWORD *)(v12 + 24) == a1 )
        {
          for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
          {
            if ( i == (ULONG_PTR *)v12 )
            {
              v17 = 1;
              goto LABEL_30;
            }
          }
        }
        --*(_WORD *)(v12 - 30);
        AlpcpUnlockMessage(v12);
        v12 = *a3;
        continue;
      }
      if ( *(_QWORD *)(v12 + 24) == v6 )
      {
        v17 = 0;
LABEL_30:
        if ( *(_QWORD *)(v12 + 64) )
          goto LABEL_35;
        v18 = *(_DWORD *)(v12 + 40);
        if ( (v18 & 0x80u) != 0 )
          goto LABEL_35;
        v19 = *(_QWORD *)(v12 + 32);
        v20 = v18 | 0x80;
        *(_BYTE *)(v12 + 244) = 0;
        *(_WORD *)(v12 + 244) |= 0xCu;
        *(_DWORD *)(v12 + 40) = v20;
        *(_DWORD *)(v12 + 240) = 2621440;
        if ( v19 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v19 + 1320), 0LL) == v12 )
          {
            KeReleaseSemaphoreEx(*(_QWORD *)(v12 + 32) + 1160LL, 1, 1, v16, 2);
            *(_QWORD *)(v12 + 32) = 0LL;
            *(_WORD *)(v12 - 30) -= 3;
            goto LABEL_35;
          }
        }
        else if ( (v20 & 0x200) == 0 )
        {
          *(_QWORD *)(v12 + 88) = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(v12 + 80) = a5;
          **(_QWORD **)(a5 + 8) = v12 + 80;
          *(_QWORD *)(a5 + 8) = v12 + 80;
LABEL_35:
          AlpcpReleaseMessageAttributesOnCancel(v12, v28);
          *(_DWORD *)(v12 + 40) |= 0x200u;
          *(_WORD *)(v12 + 244) &= ~0x2000u;
          AlpcpClearOwnerPortMessage(v12);
          AlpcpTransferQuotaMessage(v12);
          v21 = *(_QWORD *)(v12 + 208);
          if ( v21 )
          {
            PsReleaseProcessWakeCounter(v21);
            *(_QWORD *)(v12 + 208) = 0LL;
          }
          v22 = *(_QWORD *)(v12 + 216);
          if ( v22 )
          {
            PsReleaseProcessWakeCounter(v22);
            *(_QWORD *)(v12 + 216) = 0LL;
          }
          if ( v17 )
            v12 = *a3;
          else
            v12 = *(_QWORD *)v12;
          AlpcpUnlockMessage(BugCheckParameter2);
          v6 = a1;
          continue;
        }
        --*(_WORD *)(v12 - 30);
        goto LABEL_35;
      }
      --*(_WORD *)(v12 - 30);
      AlpcpUnlockMessage(v12);
    }
    v12 = *(_QWORD *)v12;
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v14 = (volatile signed __int64 *)(a2 + 176);
    else
      v14 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v14 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  return v13;
}
