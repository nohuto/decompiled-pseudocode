/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1406D4D10
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1406CE8C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1406CEA30 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1406D2D1C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchNewMessage @ 0x1406D49B0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x14022AED0 (AlpcpQueueIoCompletionPort.c)
 *     ExNotifyCallback @ 0x14022E9A0 (ExNotifyCallback.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1405E4E4C (AlpcpDestroyBlob.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1405EAC60 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertMessageDirectQueue @ 0x1405FA3A8 (AlpcpInsertMessageDirectQueue.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     PsChargeProcessWakeCounter @ 0x1406BCA00 (PsChargeProcessWakeCounter.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D31BC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpInsertCompletionListEntry @ 0x1406D320C (AlpcpInsertCompletionListEntry.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1406D33C4 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406D57E0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2D34 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpFreeBitmap @ 0x1408C379C (AlpcpFreeBitmap.c)
 *     AlpcpLogReceiveMessage @ 0x1408C3EF0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408C3F60 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C4134 (AlpcpLogWaitForReply.c)
 */

void __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // rsi
  int v4; // ecx
  int v5; // r13d
  __int64 v6; // rbx
  int v7; // r12d
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  BOOL v11; // r14d
  __int64 v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // r13
  int v15; // eax
  char v16; // cl
  int v17; // r14d
  signed __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // r10d
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  unsigned int v27; // r9d
  unsigned int CompletionBuffer; // eax
  __int64 v29; // r8
  void *v30; // rdx
  _QWORD *v31; // r14
  unsigned int v32; // edx
  int v33; // ecx
  bool v34; // zf
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // r9
  int v38; // r8d
  int inserted; // eax
  void *v40; // rsi
  __int16 v41; // r8
  unsigned int v42; // edx
  int v43; // ecx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  __int16 v47; // dx
  __int16 v48; // ax
  __int16 v49; // dx
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int v51; // [rsp+30h] [rbp-78h]
  unsigned int v52; // [rsp+34h] [rbp-74h]
  unsigned int v53; // [rsp+38h] [rbp-70h]
  int v54; // [rsp+3Ch] [rbp-6Ch]
  int v55; // [rsp+40h] [rbp-68h]
  __int64 v56; // [rsp+48h] [rbp-60h]
  __int64 v57; // [rsp+50h] [rbp-58h]
  char v58; // [rsp+B0h] [rbp+8h]
  char v59; // [rsp+B8h] [rbp+10h]
  unsigned int v60; // [rsp+C0h] [rbp+18h]
  unsigned int v61; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v59 = 0;
  v5 = v4 & 4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v4 & 0x20000;
  v56 = v6;
  v8 = v4 & 0x800000;
  v55 = v5;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v9 & 0x400000) != 0 )
    v10 = 2;
  else
    v10 = (v9 & 0x200000) != 0;
  v11 = v7 || v8;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v12 = 0LL;
    if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
      v12 = *(_QWORD *)(v1 + 24);
    if ( v12 )
    {
      if ( v11 || v10 || (AlpcpWakePolicyDefault & 1) == 0 )
        *(_QWORD *)(v3 + 208) = PsChargeProcessWakeCounter(v12);
      if ( KeHeteroSystem
        && v11
        && (!LOBYTE(KeGetCurrentThread()->ThreadFlags2)
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x380) == 0x180
         || (KeGetCurrentThread()->ThreadFlags3 & 0x300) == 0x300) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v12);
      }
    }
    v6 = v56;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((_QWORD *)v1, v3);
    ++*(_WORD *)(v3 - 30);
    AlpcpInsertMessageDirectQueue(v1, v3);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    *(_QWORD *)(v3 + 160) = 0LL;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 - 16));
    KeAbPostRelease(v6 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    HalPutDmaAdapter((PADAPTER_OBJECT)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v7 && !v5 )
    {
      v44 = *(_QWORD *)(a1 + 40);
      if ( v44 >= 4 )
      {
        KeSetEvent((PRKEVENT)(v44 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
        v45 = *(_QWORD *)(a1 + 40);
        if ( (v45 & 2) != 0 )
          HalPutDmaAdapter((PADAPTER_OBJECT)(v45 & 0xFFFFFFFFFFFFFFFCuLL));
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v13 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v13 == v13 )
      goto LABEL_15;
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    if ( (_QWORD *)*v13 == v13 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 224);
      KeAbPostRelease(v1 + 224);
LABEL_15:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v58 = 1;
        v54 = 0;
      }
      else
      {
        v58 = 0;
        v54 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v14 = *(_QWORD *)(v1 + 360);
      if ( v14 && (*(_DWORD *)(v1 + 416) & 0x10000) != 0 )
      {
        v20 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v3 + 144) )
          v20 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
        v21 = v20 | 0x10000000;
        if ( !*(_QWORD *)(v3 + 152) )
          v21 = v20;
        if ( *(_QWORD *)(v3 + 168) )
          v21 |= 0x2000000u;
        v22 = *(_DWORD *)(v14 + 148);
        if ( (~v22 & v21) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v22 & 0x20000000) != 0) )
        {
          v23 = *(unsigned __int16 *)(v3 + 242);
          v24 = *(_DWORD *)(v1 + 416) & 0x800;
          v51 = (unsigned __int16)v23;
          if ( v22 )
          {
            v25 = 8;
            if ( v24 )
              v25 = 4;
            v26 = (unsigned int)(v25 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
            v27 = v26 ? v25 - v26 : 0;
            v60 = v27;
            v23 += v27 + *(_DWORD *)(v14 + 152);
            v51 = v23;
          }
          else
          {
            v60 = 0;
          }
          v61 = 0;
          if ( v24 )
          {
            v23 -= 16;
            v61 = 0x80000000;
            v51 = v23;
          }
          CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v23);
          v53 = CompletionBuffer;
          if ( CompletionBuffer != -1 )
          {
            v29 = *(_QWORD *)(v14 + 120) + CompletionBuffer;
            v57 = v29;
            if ( v61 )
            {
              *(_WORD *)v29 = *(_WORD *)(v3 + 240);
              v46 = *(unsigned __int16 *)(v3 + 240) + 24;
              *(_WORD *)(v29 + 2) = v46;
              v47 = *(_WORD *)(v3 + 246);
              v52 = v46;
              v48 = 0;
              if ( v47 )
                v48 = v47 - 16;
              *(_WORD *)(v29 + 6) = v48;
              v49 = *(_WORD *)(v3 + 244) | 0x1000;
              *(_WORD *)(v29 + 4) = v49;
              *(_DWORD *)(v29 + 8) = *(_DWORD *)(v3 + 248);
              *(_DWORD *)(v29 + 12) = *(_DWORD *)(v3 + 256);
              *(_DWORD *)(v29 + 16) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(v29 + 20) = *(_DWORD *)(v3 + 272);
              *(_DWORD *)(v29 + 20) = *(_DWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v29 + 4) = v49 & 0xC00F;
              v30 = (void *)(v29 + 24);
            }
            else
            {
              *(_OWORD *)v29 = *(_OWORD *)(v3 + 240);
              *(_OWORD *)(v29 + 16) = *(_OWORD *)(v3 + 256);
              *(_QWORD *)(v29 + 32) = *(_QWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v29 + 4) &= 0xC00Fu;
              v30 = (void *)(v29 + 40);
              v52 = *(unsigned __int16 *)(v3 + 242);
            }
            if ( *(_QWORD *)(v3 + 176) )
              AlpcpGetDataFromUserVaSafe(v3, v30);
            else
              AlpcpReadMessageData(v3, v30);
            v38 = *(_DWORD *)(v14 + 148);
            if ( v38 )
            {
              BugCheckParameter4 = (_DWORD *)(v57 + v52 + v60);
              *BugCheckParameter4 = v38;
              BugCheckParameter4[1] = 0;
              AlpcpExposeAttributes(v1, v61, v3, *(_DWORD *)(v14 + 148), (__int64)BugCheckParameter4);
            }
            inserted = AlpcpInsertCompletionListEntry(v1, v53);
            if ( inserted )
            {
              v59 = 1;
              *(_DWORD *)(*(_QWORD *)(v14 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(*(_QWORD *)(v14 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
              if ( v58
                && (inserted & 2) == 0
                && HIWORD(*(_QWORD *)(*(_QWORD *)(v14 + 80) + 64LL))
                 + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v14 + 144) )
              {
                v58 = 0;
              }
              if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
              {
                v41 = *(_WORD *)(v3 + 244);
                v42 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v42 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v43 = v42 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v43 = v42;
                if ( v43 )
                {
                  *(_WORD *)(v3 + 244) = v41 | 0x2000;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  *(_WORD *)(v3 + 244) = v41 & 0xDFFF;
                }
              }
              else
              {
                ++*(_WORD *)(v3 - 30);
                *(_WORD *)(v3 + 244) |= 0x2000u;
                AlpcpInsertMessagePendingQueue(v1, v3);
              }
LABEL_25:
              if ( AlpcpLogEnabled )
                AlpcpLogSendMessage(v3);
              if ( v59 && AlpcpLogEnabled )
                AlpcpLogReceiveMessage(v3);
              if ( v7 && AlpcpLogEnabled )
                AlpcpLogWaitForReply(v3);
              *(_DWORD *)(v3 + 40) &= ~0x8000u;
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v3);
              v16 = *(_BYTE *)(v3 - 32);
              if ( (v16 & 1) != 0
                && (v17 = 0x10000 - *(__int16 *)(v3 - 30),
                    *(_BYTE *)(v3 - 32) = v16 & 0xFE,
                    *(_WORD *)(v3 - 30) = 0,
                    v17 > 0)
                && (v18 = -v17 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v17), v18 <= 0) )
              {
                if ( v18 )
                  KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v18);
                AlpcpDestroyBlob(v3, 1);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v3 - 16);
                KeAbPostRelease(v3 - 16);
              }
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v56 - 16));
              KeAbPostRelease(v56 - 16);
              if ( v54 )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                KeAbPostRelease(v1 + 352);
                if ( v7 || v55 )
                {
                  *(_BYTE *)(a1 + 58) = 0;
                  return;
                }
                KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1, v19, 0);
              }
              else
              {
                if ( v58 )
                {
                  if ( v7 || v55 )
                  {
                    *(_BYTE *)(a1 + 58) = 1;
                    *(_BYTE *)(a1 + 59) = v59;
                  }
                  else
                  {
                    AlpcpQueueIoCompletionPort(v1, v59, 1, 0);
                    HalPutDmaAdapter((PADAPTER_OBJECT)v1);
                    *(_QWORD *)(a1 + 32) = 0LL;
                  }
                  return;
                }
                v40 = *(void **)(v1 + 368);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                KeAbPostRelease(v1 + 352);
                if ( v40 )
                  ExNotifyCallback(v40, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
              }
              HalPutDmaAdapter((PADAPTER_OBJECT)v1);
              *(_QWORD *)(a1 + 32) = 0LL;
              return;
            }
            AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v53 >> 6, (unsigned int)(v51 + 63) >> 6);
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        AlpcpExposeViewAttributeInSenderContext((_QWORD *)v1, v3);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v15 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v15 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      *(_QWORD *)(v1 + 152) = v3;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 136);
      KeAbPostRelease(v1 + 136);
      goto LABEL_25;
    }
    v31 = (_QWORD *)*v13;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((_QWORD *)v1, v3);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_129;
    v32 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v32 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v33 = v32 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v33 = v32;
    if ( (v33 & *(_DWORD *)(v31 - 1)) != 0 )
    {
LABEL_129:
      *(_WORD *)(v3 + 244) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 244) &= ~0x2000u;
    }
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x2000u;
    v34 = AlpcpLogEnabled == 0;
    *(v31 - 1) = v3;
    if ( !v34 )
      AlpcpLogSendMessage(v3);
    v35 = *v31;
    if ( *(_QWORD **)(*v31 + 8LL) != v31 || (v36 = (_QWORD *)v31[1], (_QWORD *)*v36 != v31) )
      __fastfail(3u);
    *v36 = v35;
    *(_QWORD *)(v35 + 8) = v36;
    *v31 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v56 - 16));
    KeAbPostRelease(v56 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 224);
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    HalPutDmaAdapter((PADAPTER_OBJECT)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v7 || v5 )
      *(_QWORD *)(a1 + 24) = v31 - 167;
    else
      KeReleaseSemaphoreEx((__int64)(v31 - 22), 1, 1, v37, 2);
  }
}
