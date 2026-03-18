/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x14060DDF0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x140647AC4 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x140334A14 (AlpcpQueueIoCompletionPort.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x14060B170 (AlpcpExposeAttributes.c)
 *     AlpcpReadMessageData @ 0x14060CE80 (AlpcpReadMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14060E870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14064B848 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpDestroyBlob @ 0x1406B875C (AlpcpDestroyBlob.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1406BC230 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x1406C4D18 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpInsertMessageDirectQueue @ 0x1406C93E8 (AlpcpInsertMessageDirectQueue.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CAB5C (AlpcpGetDataFromUserVaSafe.c)
 *     PsChargeProcessWakeCounter @ 0x1406E8CD0 (PsChargeProcessWakeCounter.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BE314 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpFreeBitmap @ 0x1408BECEC (AlpcpFreeBitmap.c)
 *     AlpcpLogReceiveMessage @ 0x1408BF440 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408BF4B0 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408BF684 (AlpcpLogWaitForReply.c)
 */

void __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // rsi
  int v4; // ecx
  int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // r12d
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  BOOL v12; // r14d
  void *v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // cl
  int v21; // r14d
  signed __int64 v22; // rcx
  _DWORD *v23; // r9
  unsigned int v24; // edx
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // r10d
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  unsigned int v31; // r9d
  unsigned int CompletionBuffer; // eax
  __int64 v33; // r8
  char *v34; // rdx
  _QWORD *v35; // r14
  unsigned int v36; // edx
  int v37; // ecx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _DWORD *v40; // r9
  int v41; // r8d
  int inserted; // eax
  void *v43; // rsi
  int v44; // ecx
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // dx
  __int16 v50; // dx
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-88h]
  unsigned int v52; // [rsp+30h] [rbp-78h]
  unsigned int v53; // [rsp+34h] [rbp-74h]
  int v54; // [rsp+38h] [rbp-70h]
  int v55; // [rsp+3Ch] [rbp-6Ch]
  __int64 v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  char v58; // [rsp+B0h] [rbp+8h]
  char v59; // [rsp+B8h] [rbp+10h]
  unsigned int v60; // [rsp+C0h] [rbp+18h]
  int v61; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v59 = 0;
  v5 = v4 & 4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1LL;
  v8 = v4 & 0x20000;
  v56 = v6;
  v9 = v4 & 0x800000;
  v55 = v5;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 256LL);
  if ( (v10 & 0x400000) != 0 )
    v11 = 2;
  else
    v11 = (v10 & 0x200000) != 0;
  v12 = v8 || v9;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v13 = 0LL;
    if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
      v13 = *(void **)(v1 + 24);
    if ( v13 )
    {
      if ( v12 || v11 || (AlpcpWakePolicyDefault & 1) == 0 )
        *(_QWORD *)(v3 + 208) = PsChargeProcessWakeCounter(v13);
      if ( KeHeteroSystem
        && v12
        && (!LOBYTE(KeGetCurrentThread()->ThreadFlags2)
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x380) == 0x180
         || (KeGetCurrentThread()->ThreadFlags3 & 0x300) == 0x300) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v13);
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
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
    ++*(_WORD *)(v3 - 30);
    AlpcpInsertMessageDirectQueue(v1, v3, v10, v7);
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
    if ( !v8 && !v5 )
    {
      v45 = *(_QWORD *)(a1 + 40);
      if ( v45 >= 4 )
      {
        KeSetEvent((PRKEVENT)(v45 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
        v46 = *(_QWORD *)(a1 + 40);
        if ( (v46 & 2) != 0 )
          HalPutDmaAdapter((PADAPTER_OBJECT)(v46 & 0xFFFFFFFFFFFFFFFCuLL));
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v14 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v14 == v14 )
      goto LABEL_15;
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    if ( (_QWORD *)*v14 == v14 )
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
      v15 = *(_QWORD *)(v1 + 360);
      if ( v15 && (*(_DWORD *)(v1 + 416) & 0x10000) != 0 )
      {
        v24 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v3 + 144) )
          v24 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
        v25 = v24 | 0x10000000;
        if ( !*(_QWORD *)(v3 + 152) )
          v25 = v24;
        if ( *(_QWORD *)(v3 + 168) )
          v25 |= 0x2000000u;
        v26 = *(_DWORD *)(v15 + 148);
        if ( (~v26 & v25) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v26 & 0x20000000) != 0) )
        {
          v27 = *(unsigned __int16 *)(v3 + 242);
          v28 = *(_DWORD *)(v1 + 416) & 0x800;
          v52 = (unsigned __int16)v27;
          if ( v26 )
          {
            v29 = 8;
            if ( v28 )
              v29 = 4;
            v30 = (unsigned int)(v29 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
            v31 = v30 ? v29 - v30 : 0;
            v60 = v31;
            v27 += v31 + *(_DWORD *)(v15 + 152);
            v52 = v27;
          }
          else
          {
            v60 = 0;
          }
          v61 = 0;
          if ( v28 )
          {
            v27 -= 16;
            v61 = 0x80000000;
            v52 = v27;
          }
          CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v27);
          v53 = CompletionBuffer;
          if ( CompletionBuffer != -1 )
          {
            v33 = *(_QWORD *)(v15 + 120) + CompletionBuffer;
            v57 = v33;
            if ( v61 )
            {
              v47 = *(_WORD *)(v3 + 240);
              v48 = 0;
              *(_WORD *)v33 = v47;
              *(_WORD *)(v33 + 2) = v47 + 24;
              v49 = *(_WORD *)(v3 + 246);
              if ( v49 )
                v48 = v49 - 16;
              *(_WORD *)(v33 + 6) = v48;
              v50 = *(_WORD *)(v3 + 244) | 0x1000;
              *(_WORD *)(v33 + 4) = v50;
              *(_DWORD *)(v33 + 8) = *(_DWORD *)(v3 + 248);
              *(_DWORD *)(v33 + 12) = *(_DWORD *)(v3 + 256);
              *(_DWORD *)(v33 + 16) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(v33 + 20) = *(_DWORD *)(v3 + 272);
              *(_DWORD *)(v33 + 20) = *(_DWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v33 + 4) = v50 & 0xC00F;
              v34 = (char *)(v33 + 24);
            }
            else
            {
              *(_OWORD *)v33 = *(_OWORD *)(v3 + 240);
              *(_OWORD *)(v33 + 16) = *(_OWORD *)(v3 + 256);
              *(_QWORD *)(v33 + 32) = *(_QWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v33 + 4) &= 0xC00Fu;
              v34 = (char *)(v33 + 40);
            }
            if ( *(_QWORD *)(v3 + 176) )
              AlpcpGetDataFromUserVaSafe(v3, v34);
            else
              AlpcpReadMessageData(v3, v34);
            v41 = *(_DWORD *)(v15 + 148);
            if ( v41 )
            {
              BugCheckParameter4 = (_DWORD *)(v57 + *(unsigned __int16 *)(v57 + 2) + v60);
              *BugCheckParameter4 = v41;
              BugCheckParameter4[1] = 0;
              AlpcpExposeAttributes(v1, v61, v3, *(_DWORD *)(v15 + 148), (__int64)BugCheckParameter4);
            }
            inserted = AlpcpInsertCompletionListEntry(v1, v53);
            if ( inserted )
            {
              v59 = 1;
              *(_DWORD *)(*(_QWORD *)(v15 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(*(_QWORD *)(v15 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
              if ( v58
                && (inserted & 2) == 0
                && HIWORD(*(_QWORD *)(*(_QWORD *)(v15 + 80) + 64LL))
                 + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v15 + 144) )
              {
                v58 = 0;
              }
              if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
              {
                v18 = *(unsigned __int16 *)(v3 + 244);
                v17 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                LODWORD(v17) = v17 | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v17 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v44 = v17 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v44 = v17;
                if ( v44 )
                {
                  *(_WORD *)(v3 + 244) = v18 | 0x2000;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  LOWORD(v18) = v18 & 0xDFFF;
                  *(_WORD *)(v3 + 244) = v18;
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
              if ( v8 && AlpcpLogEnabled )
                AlpcpLogWaitForReply(v3);
              *(_DWORD *)(v3 + 40) &= ~0x8000u;
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v3, v17, v18, v19);
              v20 = *(_BYTE *)(v3 - 32);
              if ( (v20 & 1) != 0
                && (v21 = 0x10000 - *(__int16 *)(v3 - 30),
                    *(_BYTE *)(v3 - 32) = v20 & 0xFE,
                    *(_WORD *)(v3 - 30) = 0,
                    v21 > 0)
                && (v22 = -v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v21), v22 <= 0) )
              {
                if ( v22 )
                  KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v22);
                AlpcpDestroyBlob(v3, 1LL, v18, v19);
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
                if ( v8 || v55 )
                {
                  *(_BYTE *)(a1 + 58) = 0;
                  return;
                }
                KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1LL, 1LL, v23, 0);
              }
              else
              {
                if ( v58 )
                {
                  if ( v8 || v55 )
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
                v43 = *(void **)(v1 + 368);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                KeAbPostRelease(v1 + 352);
                if ( v43 )
                  ExNotifyCallback(v43, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
              }
              HalPutDmaAdapter((PADAPTER_OBJECT)v1);
              *(_QWORD *)(a1 + 32) = 0LL;
              return;
            }
            AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v53 >> 6, (v52 + 63) >> 6);
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v16 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v16 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
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
    v35 = (_QWORD *)*v14;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_129;
    v36 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v36 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v37 = v36 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v37 = v36;
    if ( (v37 & *(_DWORD *)(v35 - 1)) != 0 )
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
    *(v35 - 1) = v3;
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x2000u;
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v3);
    v38 = *v35;
    if ( *(_QWORD **)(*v35 + 8LL) != v35 || (v39 = (_QWORD *)v35[1], (_QWORD *)*v39 != v35) )
      __fastfail(3u);
    *v39 = v38;
    *(_QWORD *)(v38 + 8) = v39;
    *v35 = 0LL;
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
    if ( v8 || v5 )
      *(_QWORD *)(a1 + 24) = v35 - 167;
    else
      KeReleaseSemaphoreEx((__int64)(v35 - 22), 1LL, 1LL, v40, 2);
  }
}
