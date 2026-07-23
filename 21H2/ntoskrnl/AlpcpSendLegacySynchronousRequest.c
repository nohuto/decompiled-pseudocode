/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405CF054 (AlpcpAvailableBufferSize.c)
 *     AlpcpInsertMessageMainQueue @ 0x140619D74 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1406CF9E4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpAllocateMessage @ 0x1406D0144 (AlpcpAllocateMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1406D33C4 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpValidateMessage @ 0x1406D3688 (AlpcpValidateMessage.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406D57A0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408C2C00 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1408C3F60 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C4134 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // r12
  int v7; // ecx
  __int64 result; // rax
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  int v16; // r14d
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  __int64 v19; // rcx
  signed __int64 *v20; // r14
  __int64 v21; // r13
  _QWORD *v22; // rax
  signed __int64 *v23; // r14
  ULONG_PTR v24; // rax
  struct _KTHREAD *v25; // rcx
  ULONG_PTR v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  int v35; // [rsp+20h] [rbp-98h]
  ULONG_PTR v36; // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v37; // [rsp+30h] [rbp-88h]
  ULONG_PTR v38; // [rsp+38h] [rbp-80h]
  _QWORD *v39; // [rsp+40h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h]
  __int128 v41; // [rsp+50h] [rbp-68h] BYREF
  __int128 v42; // [rsp+60h] [rbp-58h]
  __int64 v43; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  char v45; // [rsp+D8h] [rbp+20h]

  v45 = a4;
  v5 = a2;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v36 = 0LL;
  if ( (_BYTE)a4 )
  {
    AlpcpProbeAndCaptureMessageHeader(a3, &v41, 0LL);
  }
  else
  {
    v41 = *a3;
    v42 = a3[1];
    v43 = *((_QWORD *)a3 + 4);
  }
  if ( DWORD2(v42) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  v7 = *(_DWORD *)(a1 + 416);
  if ( (v7 & 0x2000) == 0 || (v7 & 6) != 4 || (v7 & 0x38) != 0 || WORD3(v41) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v41) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  LOBYTE(a2) = 1;
  result = AlpcpValidateMessage(&v41, a2);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v36 = (ULONG_PTR)v9;
    if ( v9 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[66] & 0x7FFFFFFF;
      memset(v9, 0, 0x118uLL);
      v9[66] = v10;
      do
        v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v11 );
      v12 = v36;
      *(_DWORD *)(v36 + 272) = v11;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v12);
    }
    else
    {
      result = AlpcpAllocateMessage(&v36, 0LL, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = v36;
    *(_OWORD *)(v36 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    *(_DWORD *)(v13 + 240) = v41;
    *(_WORD *)(v13 + 244) = 8193;
    if ( v45 )
    {
      v14 = AlpcpAvailableBufferSize(v13);
      if ( v15 > v14 )
      {
        v16 = AlpcpCaptureMessageData(v13, v15, (char *)a3 + 40);
        v35 = v16;
      }
      else
      {
        memmove((void *)(v13 + 280), (char *)a3 + 40, v15);
        v16 = 0;
        v35 = 0;
      }
    }
    else
    {
      v17 = AlpcpAvailableBufferSize(v13);
      if ( v18 <= v17 )
      {
        memmove((void *)(v13 + 280), (char *)a3 + 40, v18);
        v35 = 0;
        goto LABEL_26;
      }
      v16 = AlpcpCaptureMessageData(v19, v18, (char *)a3 + 40);
      v35 = v16;
    }
    if ( v16 < 0 )
    {
LABEL_57:
      if ( v13 )
        AlpcpUnlockMessage(v13);
      return (unsigned int)v16;
    }
LABEL_26:
    v39 = *(_QWORD **)(a1 + 16);
    v20 = v39 - 2;
    BugCheckParameter2 = (ULONG_PTR)(v39 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v39 - 2), 0LL);
    v21 = *(_QWORD *)(a1 + 424);
    v22 = *(_QWORD **)(a1 + 432);
    v37 = v22;
    if ( v21 && v22 )
    {
      v23 = v22 + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v22 + 44), 0LL);
      if ( (v37[52] & 0x20) != 0 )
        goto LABEL_29;
      *(_QWORD *)(v13 + 120) = v37[7];
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v23 = (signed __int64 *)(v21 + 352);
      ExAcquirePushLockSharedEx(v21 + 352, 0LL);
      if ( (*(_DWORD *)(v21 + 416) & 0x20) != 0 )
      {
LABEL_29:
        v35 = -1073741769;
      }
      else
      {
        v24 = v36;
        v38 = v36 - 48;
        *(_WORD *)(v38 + 18) += 3;
        v25 = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v24);
        v26 = v36;
        *(_QWORD *)(v36 + 32) = v25;
        AlpcpSetOwnerPortMessage(v26, a1);
        v27 = v39;
        *(_QWORD *)(v26 + 184) = v39;
        *(_QWORD *)(v26 + 192) = *v27;
        *(_QWORD *)(v5 + 8) = v26;
        if ( AlpcpLogEnabled )
        {
          AlpcpLogSendMessage(v26);
          if ( AlpcpLogEnabled )
            AlpcpLogWaitForReply(v26);
        }
        v28 = 0LL;
        v37 = 0LL;
        if ( *(_QWORD *)(v21 + 232) != v21 + 232 )
        {
          ExAcquirePushLockExclusiveEx(v21 + 224, 0LL);
          v31 = *(_QWORD **)(v21 + 232);
          v39 = v31;
          if ( v31 != (_QWORD *)(v21 + 232) )
          {
            v37 = v31 - 167;
            AlpcpInsertMessagePendingQueue(v21, v26, v29, v30);
            ++*(_WORD *)(v38 + 18);
            *(_DWORD *)(v26 + 40) |= 0x2000u;
            v37[166] = v26;
            v32 = v39;
            v33 = *v39;
            v34 = (_QWORD *)v39[1];
            if ( *(_QWORD **)(*v39 + 8LL) != v39 || (_QWORD *)*v34 != v39 )
              __fastfail(3u);
            *v34 = v33;
            *(_QWORD *)(v33 + 8) = v34;
            *v32 = 0LL;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v21 + 224);
          KeAbPostRelease(v21 + 224);
          v26 = v36;
          v28 = v37;
        }
        *(_QWORD *)(v5 + 32) = 0LL;
        *(_QWORD *)(v5 + 24) = 0LL;
        *(_QWORD *)(v5 + 40) = 0LL;
        if ( v28 )
        {
          *(_QWORD *)(v5 + 24) = v28;
        }
        else
        {
          AlpcpInsertMessageMainQueue(v21, v26);
          if ( (*(_DWORD *)(v21 + 416) & 0x200) != 0 )
          {
            ObfReferenceObject((PVOID)v21);
            *(_QWORD *)(v5 + 32) = v21;
            *(_BYTE *)(v5 + 58) = 0;
          }
        }
        AlpcpUnlockMessage(v26);
      }
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v20 = (signed __int64 *)BugCheckParameter2;
    }
    else
    {
      v35 = -1073741769;
    }
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    v13 = v36;
    v16 = v35;
    if ( v35 >= 0 )
      return (unsigned int)v16;
    goto LABEL_57;
  }
  return result;
}
