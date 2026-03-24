/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000CC70
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C00018C0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00095B0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000CB40 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C0011F98 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0015ED4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002FD8C (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0033238 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B7E0 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000282C (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000ACE0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000C9A8 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D800 (VidSchUnwaitFlipQueue.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0010DD0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0016544 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pqXR1PR1q_EtwWriteTransfer @ 0x1C002D6F8 (McTemplateK0pqXR1PR1q_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(struct HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  unsigned int *v8; // rsi
  _QWORD *v9; // rsi
  unsigned int *v10; // r15
  __int64 *v11; // r12
  __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  char v15; // al
  char v16; // cl
  __int64 v17; // r15
  _QWORD *v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // rax
  _QWORD *v21; // rax
  struct _KEVENT *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r12
  char *v25; // r9
  char *v26; // rcx
  unsigned __int64 v27; // r8
  size_t v28; // r13
  __int64 v29; // r10
  _QWORD *v30; // rax
  void **v31; // rcx
  unsigned int *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // r15
  char *PoolWithTag; // rax
  char *v37; // rax
  __int64 v38; // r15
  _QWORD *v39; // r12
  unsigned __int64 v40; // rcx
  _QWORD *v41; // r13
  unsigned __int64 *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned int v46; // [rsp+40h] [rbp-29h]
  char *v47; // [rsp+48h] [rbp-21h]
  char v48; // [rsp+50h] [rbp-19h] BYREF
  int v49; // [rsp+58h] [rbp-11h]
  PVOID P; // [rsp+68h] [rbp-1h]
  char v51; // [rsp+70h] [rbp+7h] BYREF
  int v52; // [rsp+78h] [rbp+Fh]

  v3 = (_QWORD *)(a2 + 816);
  v5 = *(_QWORD **)(a2 + 816);
  v6 = a2;
  if ( v5 != (_QWORD *)(a2 + 816) )
  {
    while ( 1 )
    {
      v17 = *(v5 - 1);
      v18 = v5 - 36;
      v5 = (_QWORD *)*v5;
      v19 = v18[38];
      if ( *(_BYTE *)(v17 + 28) )
        break;
      v20 = *(unsigned __int64 **)(v17 + 64);
      if ( *(_BYTE *)(v17 + 29) )
      {
        if ( *v20 >= v19 )
          break;
      }
      else if ( *(_DWORD *)v20 - (int)v19 >= 0 )
      {
        break;
      }
LABEL_17:
      if ( v5 == v3 )
        goto LABEL_2;
    }
    v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, a2);
    v33[3] = v17;
    v33[4] = **(_QWORD **)(v17 + 64);
    v33[5] = v18[38];
    v33[6] = *(unsigned __int8 *)(v17 + 28);
    WdLogEvent5_WdEvent(v33);
    v34 = v18[11];
    if ( v34 )
      v35 = *(_QWORD **)(v34 + 104);
    else
      v35 = *(_QWORD **)(*(_QWORD *)(v18[12] + 40LL) + 8LL);
    if ( (v18[34] & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(a1, v18, 0LL);
    VidSchiUnwaitWaitQueuePacket(a1, v18, 0LL, a3);
    VidSchiCheckPendingDeviceCommand(v35);
    goto LABEL_17;
  }
LABEL_2:
  v8 = *(unsigned int **)(v6 + 832);
  while ( v8 != (unsigned int *)(v6 + 832) )
  {
    v10 = v8;
    a2 = 0LL;
    v8 = *(unsigned int **)v8;
    v46 = 0;
    if ( !v10[26] )
      continue;
    do
    {
      v11 = (__int64 *)(*((_QWORD *)v10 + 4) + 16LL * (unsigned int)a2);
      v12 = *v11;
      if ( *v11 )
      {
        v13 = v11[1];
        if ( !*(_BYTE *)(v12 + 28) )
        {
          v14 = *(unsigned __int64 **)(v12 + 64);
          if ( *(_BYTE *)(v12 + 29) )
          {
            if ( *v14 < v13 )
            {
LABEL_11:
              v15 = *((_BYTE *)v10 + 112);
              v16 = 0;
              if ( (v15 & 1) == 0 )
                goto LABEL_12;
              goto LABEL_22;
            }
          }
          else if ( *(_DWORD *)v14 - (int)v13 < 0 )
          {
            goto LABEL_11;
          }
        }
        v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, a2);
        v21[3] = v12;
        v21[4] = **(_QWORD **)(v12 + 64);
        v21[5] = v11[1];
        v21[6] = *(unsigned __int8 *)(v12 + 28);
        WdLogEvent5_WdEvent(v21);
        a2 = v46;
      }
      v15 = *((_BYTE *)v10 + 112);
      v16 = 1;
      if ( (v15 & 1) != 0 )
        goto LABEL_24;
LABEL_22:
      a2 = (unsigned int)(a2 + 1);
      v46 = a2;
    }
    while ( (unsigned int)a2 < v10[26] );
    if ( !v16 )
      continue;
LABEL_24:
    v22 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
    if ( (v15 & 4) != 0 )
      ((void (__fastcall *)(struct _KEVENT *, __int64))DxgCoreInterface[63])(v22, a2);
    else
      KeSetEvent(v22, 0, 0);
    if ( bTracingEnabled )
    {
      v24 = v10[26];
      v25 = 0LL;
      v26 = 0LL;
      v47 = 0LL;
      v49 = 0;
      v27 = (unsigned int)v24;
      P = 0LL;
      v52 = 0;
      if ( (unsigned int)v24 > 1 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v24 >= 8 )
        {
          v28 = 8 * v24;
          PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v24, 0x4B677844u);
          v26 = (char *)P;
          v27 = v24;
          v25 = PoolWithTag;
          v47 = PoolWithTag;
          goto LABEL_29;
        }
      }
      else
      {
        v25 = &v48;
        v47 = &v48;
        v28 = 8 * v24;
LABEL_29:
        v49 = v24;
        if ( v25 )
        {
          if ( (_DWORD)v24 )
          {
            memset(v25, 0, v28);
            v25 = v47;
            v27 = v24;
            v26 = (char *)P;
          }
          if ( v25 )
          {
            if ( (unsigned int)v24 > 1 )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v27 >= 8 )
              {
                v37 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v28, 0x4B677844u);
                v25 = v47;
                v26 = v37;
                P = v37;
                goto LABEL_35;
              }
            }
            else
            {
              v26 = &v51;
              P = &v51;
LABEL_35:
              v52 = v24;
              if ( v26 )
              {
                if ( (_DWORD)v24 )
                {
                  memset(v26, 0, v28);
                  v25 = v47;
                  v26 = (char *)P;
                }
                if ( v26 )
                {
                  if ( (_DWORD)v24 )
                  {
                    v23 = 0LL;
                    v29 = v24;
                    v27 = 0LL;
                    do
                    {
                      v23 += 8LL;
                      v27 += 16LL;
                      *(_QWORD *)&v25[v23 - 8] = *(_QWORD *)(v27 + *((_QWORD *)v10 + 4) - 16);
                      *(_QWORD *)((char *)P + v23 - 8) = *(_QWORD *)(*((_QWORD *)v10 + 4) + v27 - 8);
                      v25 = v47;
                      --v29;
                    }
                    while ( v29 );
                    v26 = (char *)P;
                  }
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    McTemplateK0pqXR1PR1q_EtwWriteTransfer(
                      (_DWORD)v26,
                      v23,
                      v27,
                      *((_QWORD *)v10 + 2),
                      v24,
                      (__int64)v26,
                      (__int64)v25,
                      v10[28] & 1);
                    v25 = v47;
                    v26 = (char *)P;
                  }
                }
              }
            }
          }
        }
      }
      if ( v26 != &v51 && v26 )
      {
        ExFreePoolWithTag(v26, 0);
        v25 = v47;
      }
      P = 0LL;
      v52 = 0;
      if ( v25 != &v48 && v25 )
        ExFreePoolWithTag(v25, 0);
      v49 = 0;
    }
    if ( (v10[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v10 + 2));
    v30 = *(_QWORD **)v10;
    if ( *(unsigned int **)(*(_QWORD *)v10 + 8LL) != v10 || (v31 = (void **)*((_QWORD *)v10 + 1), *v31 != v10) )
LABEL_88:
      __fastfail(3u);
    *v31 = v30;
    v30[1] = v31;
    v32 = (unsigned int *)*((_QWORD *)v10 + 4);
    if ( v32 != v10 + 10 && v32 )
      ExFreePoolWithTag(v32, 0);
    *((_QWORD *)v10 + 4) = 0LL;
    v10[26] = 0;
    ExFreePoolWithTag(v10, 0);
LABEL_12:
    ;
  }
  v9 = *(_QWORD **)(v6 + 848);
  while ( v9 != (_QWORD *)(v6 + 848) )
  {
    v38 = *(v9 - 2);
    v39 = v9 - 3;
    v40 = *(v9 - 1);
    v41 = v9;
    v9 = (_QWORD *)*v9;
    if ( *(_BYTE *)(v38 + 28) )
      goto LABEL_79;
    v42 = *(unsigned __int64 **)(v38 + 64);
    if ( *(_BYTE *)(v38 + 29) )
    {
      if ( *v42 < v40 )
        continue;
    }
    else if ( *(_DWORD *)v42 - (int)v40 < 0 )
    {
      continue;
    }
    if ( *(_BYTE *)(v38 + 28) )
LABEL_79:
      *((_DWORD *)v39 + 11) |= 1u;
    v43 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, a2);
    v43[3] = v38;
    v43[4] = **(_QWORD **)(v38 + 64);
    v43[5] = v39[2];
    v43[6] = *(unsigned __int8 *)(v38 + 28);
    WdLogEvent5_WdEvent(v43);
    VidSchiSubmitPresentHistoryToken(a1, 0LL, v39 + 5, 0LL, v6);
    v44 = *v41;
    if ( *(_QWORD **)(*v41 + 8LL) != v41 )
      goto LABEL_88;
    v45 = (_QWORD *)v41[1];
    if ( (_QWORD *)*v45 != v41 )
      goto LABEL_88;
    *v45 = v44;
    *(_QWORD *)(v44 + 8) = v45;
    ++*(_DWORD *)(v6 + 892);
    if ( ExQueryDepthSList((PSLIST_HEADER)(v6 + 864)) < *(_WORD *)(v6 + 880) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v6 + 864), (PSLIST_ENTRY)v39);
    }
    else
    {
      ++*(_DWORD *)(v6 + 896);
      (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 920))(v39, v6 + 864);
    }
    --*(_DWORD *)(v38 + 40);
    VidSchiReleaseSyncObjectReference((char *)v38);
  }
  if ( *(_DWORD *)(v6 + 796) )
    VidSchUnwaitFlipQueue(a1, v6);
}
