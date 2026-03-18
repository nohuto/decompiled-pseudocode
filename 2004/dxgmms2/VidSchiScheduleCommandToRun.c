/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C000A620
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008D290 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000A5D0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiSelectContext @ 0x1C000A960 (VidSchiSelectContext.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B930 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00136F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002320C (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002FDDC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C003018C (VidSchiProcessFlipPendingContextList.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035B0C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007EE70 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007F210 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0086AFC (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r15
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // r8d
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // r8d
  _QWORD *v24; // rdx
  __int64 v25; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD v31[2]; // [rsp+48h] [rbp-19h] BYREF
  char v32; // [rsp+58h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+78h] [rbp+17h] BYREF
  char v35; // [rsp+C8h] [rbp+67h] BYREF

  v2 = 0LL;
  *a2 = 0;
  v35 = 0;
  while ( (unsigned int)(*(_DWORD *)(a1 + 2916) - 2) <= 1 || (unsigned int)VidSchiCheckHwProgress(a1, &v35) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1744), &LockHandle);
    v7 = *(_QWORD **)(a1 + 1776);
    if ( v7 != (_QWORD *)(a1 + 1776) )
    {
      do
      {
        v27 = (_QWORD *)*v7;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, v7 - 25, v6, v7) )
        {
          v29 = *v28;
          if ( *(_QWORD **)(*v28 + 8LL) != v28 || (v30 = (_QWORD *)v28[1], (_QWORD *)*v30 != v28) )
LABEL_53:
            __fastfail(3u);
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v28 - 24), (struct VIDMM_ALLOC *)(v28 - 25));
        }
        v7 = v27;
      }
      while ( v27 != (_QWORD *)(a1 + 1776) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 1280) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)(a1 + 1232)) > 0 )
      goto LABEL_36;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &v34);
    v32 = 0;
    v31[1] = v31;
    v31[0] = v31;
    if ( *(_DWORD *)(a1 + 3096) )
      VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v31);
    if ( *(_BYTE *)(a1 + 51) )
      VidSchiProcessFlipPendingContextList(v31, a1);
    while ( 1 )
    {
      v8 = VidSchiSelectContext(a1, 1LL);
      v9 = v8;
      if ( !v8 )
      {
        v11 = 0;
        goto LABEL_25;
      }
      v10 = VidSchiSwitchContextWithCheck(v8);
      v11 = v10;
      if ( v10 == 1 )
        break;
      if ( v10 != 3 )
        goto LABEL_25;
    }
    v12 = *(_QWORD *)(v9 + 96);
    v2 = *(_QWORD *)(v9 + 648);
    v13 = *(_QWORD *)(v12 + 24);
    if ( v2 )
    {
      --*(_DWORD *)(v9 + 780);
      --*(_DWORD *)(v12 + 2872);
      --*(_DWORD *)(v13 + 712);
      v14 = *(_QWORD *)(v2 + 32);
      if ( v14 == v9 + 664 )
      {
        *(_DWORD *)(v9 + 644) &= 0xFFFFFFF0;
        *(_QWORD *)(v9 + 648) = 0LL;
        VidSchiUpdateContextStatus(v9, 1uLL, 17613LL);
      }
      else
      {
        v15 = v14 == 32;
        v16 = v14 - 32;
        *(_QWORD *)(v9 + 648) = v16;
        if ( v15 )
        {
          *(_DWORD *)(v9 + 644) &= 0xFFFFFFF8;
          v23 = *(_DWORD *)(v9 + 644) & 0xFFFFFFF7;
        }
        else
        {
          v17 = (*(_DWORD *)(v16 + 48) - 4 <= v10) | *(_DWORD *)(v9 + 644) & 0xFFFFFFFE;
          v18 = 0;
          *(_DWORD *)(v9 + 644) = v17;
          if ( *(_DWORD *)(v16 + 48) == 3 )
            v18 = 2;
          v19 = v17 & 0xFFFFFFFD | v18;
          v20 = 0;
          *(_DWORD *)(v9 + 644) = v19;
          if ( *(_DWORD *)(v16 + 48) == 7 )
            v20 = 4;
          v21 = v19 & 0xFFFFFFFB | v20;
          v22 = 0;
          *(_DWORD *)(v9 + 644) = v21;
          if ( *(_DWORD *)(v16 + 48) == 6 )
            v22 = 8;
          v23 = v22 | v21 & 0xFFFFFFF7;
        }
        *(_DWORD *)(v9 + 644) = v23;
      }
      VidSchiProfilePerformanceTick(5, v13, 0, 0, 0LL, v2, 0LL, 0LL);
    }
    *(_DWORD *)(v9 + 184) |= 0x400u;
    while ( 1 )
    {
LABEL_25:
      v24 = (_QWORD *)v31[0];
      if ( *(_QWORD **)(v31[0] + 8LL) != v31 )
        goto LABEL_53;
      v25 = *(_QWORD *)v31[0];
      if ( *(_QWORD *)(*(_QWORD *)v31[0] + 8LL) != v31[0] )
        goto LABEL_53;
      v31[0] = *(_QWORD *)v31[0];
      *(_QWORD *)(v25 + 8) = v31;
      if ( v24 == v31 )
        break;
      *v24 = 0LL;
      v24[1] = 0LL;
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v31, (struct VIDSCH_HW_QUEUE *)(v24 - 22));
    }
    v32 = 1;
    KeReleaseInStackQueuedSpinLock(&v34);
    if ( !v32 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v31);
    switch ( v11 )
    {
      case 1u:
        goto LABEL_31;
      case 4u:
        *(_QWORD *)(*(_QWORD *)(v9 + 96) + 232LL) = 0LL;
        VidSchiSubmitPreemptionCommand(*(_QWORD *)(v9 + 96));
        break;
      case 0u:
      case 2u:
LABEL_36:
        if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
          goto LABEL_31;
        break;
    }
  }
LABEL_31:
  if ( *(_DWORD *)(a1 + 2916) )
    *a2 = 1;
  return v2;
}
