/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C0009B20
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00AE010 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001CE8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiSelectContext @ 0x1C0009E90 (VidSchiSelectContext.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000AEB0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0016E38 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C001E6B6 (VidSchiProcessFlipPendingContextList.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001E78A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002D814 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0038B38 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0097530 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C009A910 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  struct _VIDSCH_GLOBAL *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // r8d
  _QWORD *v23; // rdx
  __int64 v24; // rax
  struct _VIDSCH_GLOBAL *v26; // rsi
  _QWORD *v27; // r9
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD v30[2]; // [rsp+48h] [rbp-29h] BYREF
  char v31; // [rsp+58h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+78h] [rbp+7h] BYREF
  __int128 v34; // [rsp+90h] [rbp+1Fh]
  __int64 v35; // [rsp+A0h] [rbp+2Fh]

  *a2 = 0;
  v4 = 0LL;
  memset(&v33, 0, sizeof(v33));
  while ( (unsigned int)(*((_DWORD *)a1 + 753) - 2) <= 1 || (unsigned int)VidSchiCheckHwProgress(a1) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 220, &LockHandle);
    v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 224);
    if ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1792) )
    {
      do
      {
        v26 = *(struct _VIDSCH_GLOBAL **)v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, (__int64)v6 - 200) )
        {
          v28 = *v27;
          if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v29 = (_QWORD *)v27[1], (_QWORD *)*v29 != v27) )
LABEL_51:
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v27 - 24), (struct VIDMM_ALLOC *)(v27 - 25));
        }
        v6 = v26;
      }
      while ( v26 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1792) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)a1 + 162) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)a1 + 52) > 0 )
      goto LABEL_36;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &v33);
    v31 = 0;
    v30[1] = v30;
    v30[0] = v30;
    if ( *((_DWORD *)a1 + 798) )
      VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v30);
    if ( *((_BYTE *)a1 + 51) )
      VidSchiProcessFlipPendingContextList(v30, a1);
    while ( 1 )
    {
      v7 = VidSchiSelectContext(a1, 1LL);
      v8 = v7;
      if ( !v7 )
      {
        v10 = 0;
        VidSchiLogAggregatedTelemetry(a1);
        goto LABEL_25;
      }
      v9 = VidSchiSwitchContextWithCheck(v7);
      v10 = v9;
      if ( v9 == 1 )
        break;
      if ( v9 != 3 )
        goto LABEL_25;
    }
    v11 = *(_QWORD *)(v8 + 96);
    v35 = 0LL;
    v4 = *(_QWORD *)(v8 + 648);
    v34 = 0LL;
    v12 = *(_QWORD *)(v11 + 24);
    if ( v4 )
    {
      --*(_DWORD *)(v8 + 780);
      --*(_DWORD *)(v11 + 2888);
      --*(_DWORD *)(v12 + 720);
      v13 = *(_QWORD *)(v4 + 32);
      if ( v13 == v8 + 664 )
      {
        *(_DWORD *)(v8 + 644) &= 0xFFFFFFF0;
        *(_QWORD *)(v8 + 648) = 0LL;
        VidSchiUpdateContextStatus(v8, 1LL, 18394LL);
      }
      else
      {
        v14 = v13 == 32;
        v15 = v13 - 32;
        *(_QWORD *)(v8 + 648) = v15;
        if ( v14 )
        {
          *(_DWORD *)(v8 + 644) &= 0xFFFFFFF8;
          v22 = *(_DWORD *)(v8 + 644) & 0xFFFFFFF7;
        }
        else
        {
          v16 = (*(_DWORD *)(v15 + 48) - 4 <= v9) | *(_DWORD *)(v8 + 644) & 0xFFFFFFFE;
          v17 = 0;
          *(_DWORD *)(v8 + 644) = v16;
          if ( *(_DWORD *)(v15 + 48) == 3 )
            v17 = 2;
          v18 = v16 & 0xFFFFFFFD | v17;
          v19 = 0;
          *(_DWORD *)(v8 + 644) = v18;
          if ( *(_DWORD *)(v15 + 48) == 7 )
            v19 = 4;
          v20 = v18 & 0xFFFFFFFB | v19;
          v21 = 0;
          *(_DWORD *)(v8 + 644) = v20;
          if ( *(_DWORD *)(v15 + 48) == 6 )
            v21 = 8;
          v22 = v21 | v20 & 0xFFFFFFF7;
        }
        *(_DWORD *)(v8 + 644) = v22;
      }
      VidSchiProfilePerformanceTick(5, v12, 0, 0, 0LL, v4, 0LL, 0LL);
    }
    *(_DWORD *)(v8 + 184) |= 0x400u;
    while ( 1 )
    {
LABEL_25:
      v23 = (_QWORD *)v30[0];
      if ( *(_QWORD **)(v30[0] + 8LL) != v30 )
        goto LABEL_51;
      v24 = *(_QWORD *)v30[0];
      if ( *(_QWORD *)(*(_QWORD *)v30[0] + 8LL) != v30[0] )
        goto LABEL_51;
      v30[0] = *(_QWORD *)v30[0];
      *(_QWORD *)(v24 + 8) = v30;
      if ( v23 == v30 )
        break;
      *v23 = 0LL;
      v23[1] = 0LL;
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v30, (struct VIDSCH_HW_QUEUE *)(v23 - 22));
    }
    v31 = 1;
    KeReleaseInStackQueuedSpinLock(&v33);
    if ( !v31 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v30);
    if ( v10 == 1 )
      break;
    if ( v10 == 4 )
    {
      *(_QWORD *)(*(_QWORD *)(v8 + 96) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*(_QWORD *)(v8 + 96));
    }
    else if ( (v10 & 0xFFFFFFFD) == 0 )
    {
LABEL_36:
      if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
        break;
    }
  }
  if ( *((_DWORD *)a1 + 753) )
    *a2 = 1;
  return v4;
}
