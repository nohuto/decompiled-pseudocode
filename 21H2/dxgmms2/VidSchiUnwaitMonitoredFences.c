/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000B960
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B800 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C00146C8 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C0016C00 (VidSchSubmitWaitFromCpu.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0018B1C (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001F6F4 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0038B38 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000EA80 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pqXR1PR1q_EtwWriteTransfer @ 0x1C0036B2C (McTemplateK0pqXR1PR1q_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  unsigned int v11; // r12d
  unsigned int *v12; // r15
  __int64 *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  char v17; // al
  char v18; // cl
  __int64 v19; // rdx
  _QWORD *v20; // r13
  unsigned __int64 v21; // rcx
  _QWORD *v22; // r12
  unsigned __int64 *v23; // rax
  struct _KEVENT *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // r12
  char *v28; // rcx
  unsigned __int64 v29; // r13
  _QWORD *v30; // rax
  void **v31; // rcx
  unsigned int *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  _QWORD *v43; // r12
  unsigned __int64 v44; // rcx
  _QWORD *v45; // r13
  unsigned __int64 *v46; // rax
  unsigned __int8 v47; // al
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  char *Pool2; // [rsp+40h] [rbp-40h]
  char v52[8]; // [rsp+48h] [rbp-38h] BYREF
  int v53; // [rsp+50h] [rbp-30h]
  _QWORD *v54; // [rsp+58h] [rbp-28h]
  PVOID P; // [rsp+60h] [rbp-20h]
  char v56[8]; // [rsp+68h] [rbp-18h] BYREF
  int v57; // [rsp+70h] [rbp-10h]

  v3 = (_QWORD *)(a2 + 824);
  v5 = *(_QWORD **)(a2 + 824);
  if ( v5 != (_QWORD *)(a2 + 824) )
  {
    while ( 1 )
    {
      v19 = *(v5 - 1);
      v20 = v5 - 36;
      v21 = v5[2];
      v22 = v5;
      v5 = (_QWORD *)*v5;
      if ( *(_BYTE *)(v19 + 28) )
        break;
      v23 = *(unsigned __int64 **)(v19 + 64);
      if ( *(_BYTE *)(v19 + 29) )
      {
        if ( *v23 >= v21 )
          break;
      }
      else if ( *(_DWORD *)v23 - (int)v21 >= 0 )
      {
        break;
      }
LABEL_18:
      if ( v5 == v3 )
        goto LABEL_2;
    }
    WdLogSingleEntry4(4LL, v19, **(_QWORD **)(v19 + 64), v20[38], *(unsigned __int8 *)(v19 + 28));
    v33 = v20[11];
    if ( v33 )
      v54 = *(_QWORD **)(v33 + 104);
    else
      v54 = *(_QWORD **)(*(_QWORD *)(v20[12] + 40LL) + 8LL);
    if ( (v20[34] & 4) != 0 )
    {
      if ( v33 )
        v34 = *(_QWORD *)(v33 + 104);
      else
        v34 = *(_QWORD *)(*(_QWORD *)(v20[12] + 40LL) + 8LL);
      v35 = *v22;
      v36 = *(_QWORD *)(v34 + 32);
      v37 = v20[35];
      if ( *(_QWORD **)(*v22 + 8LL) != v22
        || (v38 = (_QWORD *)v22[1], (_QWORD *)*v38 != v22)
        || (*v38 = v35, *(_QWORD *)(v35 + 8) = v38, v39 = *(_QWORD **)(v37 + 104), *v39 != v37 + 96) )
      {
LABEL_64:
        __fastfail(3u);
      }
      *v22 = v37 + 96;
      v22[1] = v39;
      *v39 = v22;
      *(_QWORD *)(v37 + 104) = v22;
      *((_DWORD *)v20 + 68) &= ~4u;
      --*(_DWORD *)(v37 + 40);
      v40 = v20[11];
      if ( v40 )
      {
        --*(_DWORD *)(v40 + 796);
      }
      else
      {
        v41 = v20[12];
        if ( v41 )
          --*(_DWORD *)(v41 + 156);
      }
      --*(_DWORD *)(v34 + 1588);
      --*(_DWORD *)(v36 + 816);
    }
    VidSchiUnwaitWaitQueuePacket(a1, v20, 0LL, a3);
    VidSchiCheckPendingDeviceCommand(v54);
    goto LABEL_18;
  }
LABEL_2:
  v8 = *(_QWORD **)(a2 + 840);
  while ( v8 != (_QWORD *)(a2 + 840) )
  {
    v10 = v8;
    v11 = 0;
    v12 = (unsigned int *)v8;
    v8 = (_QWORD *)*v8;
    if ( !*((_DWORD *)v10 + 26) )
      continue;
    do
    {
      v13 = (__int64 *)(*((_QWORD *)v12 + 4) + 16LL * v11);
      v14 = *v13;
      if ( *v13 )
      {
        v15 = v13[1];
        if ( !*(_BYTE *)(v14 + 28) )
        {
          v16 = *(unsigned __int64 **)(v14 + 64);
          if ( *(_BYTE *)(v14 + 29) )
          {
            if ( *v16 < v15 )
            {
LABEL_12:
              v17 = *((_BYTE *)v12 + 112);
              v18 = 0;
              if ( (v17 & 1) == 0 )
                goto LABEL_13;
              goto LABEL_23;
            }
          }
          else if ( *(_DWORD *)v16 - (int)v15 < 0 )
          {
            goto LABEL_12;
          }
        }
        WdLogSingleEntry4(4LL, v14, **(_QWORD **)(v14 + 64), v13[1], *(unsigned __int8 *)(v14 + 28));
      }
      v17 = *((_BYTE *)v12 + 112);
      v18 = 1;
      if ( (v17 & 1) != 0 )
        goto LABEL_25;
LABEL_23:
      ++v11;
    }
    while ( v11 < v12[26] );
    if ( !v18 )
      continue;
LABEL_25:
    v24 = (struct _KEVENT *)v10[2];
    if ( (v17 & 4) != 0 )
      ((void (__fastcall *)(struct _KEVENT *, _QWORD))DxgCoreInterface[68])(v24, 0LL);
    else
      KeSetEvent(v24, 0, 0);
    if ( bTracingEnabled )
    {
      v27 = v12[26];
      v28 = 0LL;
      Pool2 = 0LL;
      v53 = 0;
      P = 0LL;
      v57 = 0;
      if ( (unsigned int)v27 <= 1 )
      {
        Pool2 = v52;
        if ( (_DWORD)v27 )
        {
          memset(v52, 0, 8 * v27);
          goto LABEL_31;
        }
        goto LABEL_32;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v27 >= 8 )
      {
        Pool2 = (char *)ExAllocatePool2(64LL, 8 * v27, 1265072196LL);
LABEL_31:
        v28 = (char *)P;
LABEL_32:
        v29 = v27;
        v53 = v27;
        if ( Pool2 )
        {
          if ( (unsigned int)v27 > 1 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / v27 >= 8 )
            {
              v28 = (char *)ExAllocatePool2(64LL, 8 * v27, 1265072196LL);
              P = v28;
              goto LABEL_36;
            }
          }
          else
          {
            v28 = v56;
            P = v56;
            if ( (_DWORD)v27 )
            {
              memset(v56, 0, 8 * v27);
              v28 = (char *)P;
            }
LABEL_36:
            v57 = v27;
            if ( v28 )
            {
              if ( (_DWORD)v27 )
              {
                v25 = 0LL;
                v26 = 0LL;
                do
                {
                  v25 += 8LL;
                  v26 += 16LL;
                  *(_QWORD *)&Pool2[v25 - 8] = *(_QWORD *)(v26 + *((_QWORD *)v12 + 4) - 16);
                  *(_QWORD *)((char *)P + v25 - 8) = *(_QWORD *)(v26 + *((_QWORD *)v12 + 4) - 8);
                  --v29;
                }
                while ( v29 );
                v28 = (char *)P;
              }
              if ( (byte_1C006E941 & 1) != 0 )
              {
                McTemplateK0pqXR1PR1q_EtwWriteTransfer(
                  (_DWORD)v28,
                  v25,
                  v26,
                  *((_QWORD *)v12 + 2),
                  v27,
                  (__int64)v28,
                  (__int64)Pool2,
                  v12[28] & 1);
                v28 = (char *)P;
              }
            }
          }
        }
      }
      if ( v28 != v56 && v28 )
        ExFreePoolWithTag(v28, 0);
      P = 0LL;
      v57 = 0;
      if ( Pool2 != v52 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v53 = 0;
    }
    if ( (v12[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v12 + 2));
    v30 = *(_QWORD **)v12;
    if ( *(unsigned int **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_64;
    v31 = (void **)*((_QWORD *)v12 + 1);
    if ( *v31 != v12 )
      goto LABEL_64;
    *v31 = v30;
    v30[1] = v31;
    v32 = (unsigned int *)*((_QWORD *)v12 + 4);
    if ( v32 != v12 + 10 && v32 )
      ExFreePoolWithTag(v32, 0);
    *((_QWORD *)v12 + 4) = 0LL;
    v12[26] = 0;
    ExFreePoolWithTag(v12, 0);
LABEL_13:
    ;
  }
  v9 = *(_QWORD **)(a2 + 856);
  while ( v9 != (_QWORD *)(a2 + 856) )
  {
    v42 = *(v9 - 2);
    v43 = v9 - 3;
    v44 = *(v9 - 1);
    v45 = v9;
    v9 = (_QWORD *)*v9;
    if ( !*(_BYTE *)(v42 + 28) )
    {
      v46 = *(unsigned __int64 **)(v42 + 64);
      if ( *(_BYTE *)(v42 + 29) )
      {
        if ( *v46 < v44 )
          continue;
      }
      else if ( *(_DWORD *)v46 - (int)v44 < 0 )
      {
        continue;
      }
    }
    v47 = *(_BYTE *)(v42 + 28);
    if ( v47 )
    {
      *((_DWORD *)v43 + 11) |= 1u;
      v47 = *(_BYTE *)(v42 + 28);
    }
    WdLogSingleEntry4(4LL, v42, **(_QWORD **)(v42 + 64), v43[2], v47);
    VidSchiSubmitPresentHistoryToken(a1, 0, (_DWORD)v43 + 40, 0, a2);
    v48 = *v45;
    if ( *(_QWORD **)(*v45 + 8LL) != v45 )
      goto LABEL_64;
    v49 = (_QWORD *)v45[1];
    if ( (_QWORD *)*v49 != v45 )
      goto LABEL_64;
    *v49 = v48;
    *(_QWORD *)(v48 + 8) = v49;
    ++*(_DWORD *)(a2 + 908);
    if ( ExQueryDepthSList((PSLIST_HEADER)(a2 + 880)) < *(_WORD *)(a2 + 896) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 880), (PSLIST_ENTRY)v43);
    }
    else
    {
      ++*(_DWORD *)(a2 + 912);
      (*(void (__fastcall **)(_QWORD *, __int64))(a2 + 936))(v43, a2 + 880);
    }
    --*(_DWORD *)(v42 + 44);
    VidSchiReleaseSyncObjectReference((char *)v42, v50);
  }
  if ( *(_DWORD *)(a2 + 804) )
    VidSchUnwaitFlipQueue(a1, a2);
}
