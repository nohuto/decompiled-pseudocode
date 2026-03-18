/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C00058D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00083C0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C001304C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013430 (VidSchiProcessDpcSystemRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0022EE0 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0030224 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00361D0 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C003AC60 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003ACC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B580 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C003B62C (VidSchiProcessSuspendContextCompletedDpc.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1)
{
  __int64 DxgAdapter; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbp
  union _SLIST_HEADER *v6; // rsi
  PSLIST_ENTRY v7; // rax
  _QWORD *v8; // rbx
  _QWORD *p_Next; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ecx
  struct _SLIST_ENTRY *v13; // r14
  signed __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r13
  KSPIN_LOCK *v18; // r12
  __int64 v19; // rcx
  int v20; // ecx
  struct _SLIST_ENTRY **v21; // rax
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  void (__fastcall *v25)(KSPIN_LOCK); // rax
  void (__fastcall *v26)(KSPIN_LOCK); // rax
  struct _SLIST_ENTRY *Next; // rdi
  int v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h]
  char v30; // [rsp+30h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF
  _QWORD *v34; // [rsp+B8h] [rbp+10h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v30 = 1;
    v28 = 5043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[73])(&v28, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v3 = DxgAdapter;
    v4 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2704) + 624LL) : 0LL;
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1736), &LockHandle);
      v5 = *(_QWORD *)(v3 + 2704);
      v6 = *(union _SLIST_HEADER **)(v5 + 624);
      v7 = ExpInterlockedFlushSList(v6 + 110);
      v8 = 0LL;
      if ( v7 )
      {
        do
        {
          p_Next = &v7->Next;
          v34 = v8;
          v7 = v7->Next;
          v10 = v8;
          *p_Next = v8;
          v8 = p_Next;
        }
        while ( v7 );
        v11 = 1160LL;
        while ( 1 )
        {
          v12 = *((_DWORD *)v8 - 4);
          v13 = (struct _SLIST_ENTRY *)(v8 - 2);
          v8 = v10;
          if ( ((v12 - 1) & 0xFFFFFFF6) == 0 && v12 != 10 )
          {
            v14 = (signed __int64)&v13[-1];
            _InterlockedExchange((volatile __int32 *)&v13[2].Next[6].Next[30], 1);
            if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
              VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v5 + 648), 1u);
            v15 = *(_QWORD *)(v14 + 48);
            v16 = *(_QWORD *)(v15 + 96);
            v17 = *(unsigned int *)(v16 + 1408);
            v18 = *(KSPIN_LOCK **)(*(_QWORD *)(v15 + 104) + 32LL);
            v19 = v16 + 8 * v17;
            if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 1416), 0LL, v14) )
            {
              v24 = WdLogNewEntry5_WdAssertion(v19, 0LL, v11);
              *(_QWORD *)(v24 + 24) = v18;
              *(_QWORD *)(v24 + 32) = v14;
              WdLogEvent5_WdAssertion(v24);
            }
            _InterlockedExchange((volatile __int32 *)(v16 + 1408), ((_BYTE)v17 + 1) & 0xF);
            *(_DWORD *)(v16 + 496) = ((unsigned __int8)*(_DWORD *)(v16 + 496) + 1) & 0xF;
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v18 + 214, &v31);
            v20 = *(_DWORD *)(v14 + 92);
            if ( (v20 & 0x400) != 0 )
            {
              v20 &= ~0x400u;
              *(_DWORD *)(v14 + 92) = v20;
              if ( *(_DWORD *)(v16 + 11224) != -1 )
              {
                v25 = (void (__fastcall *)(KSPIN_LOCK))v18[374];
                if ( v25 )
                {
                  v25(v18[378]);
                  v20 = *(_DWORD *)(v14 + 92);
                }
              }
            }
            if ( (v20 & 0x800) != 0 )
            {
              if ( *(_DWORD *)(v18[*(unsigned int *)(*(_QWORD *)(v14 + 56) + 388LL) + 388] + 33288) != -1 )
              {
                v26 = (void (__fastcall *)(KSPIN_LOCK))v18[372];
                if ( v26 )
                {
                  v26(v18[378]);
                  v20 = *(_DWORD *)(v14 + 92);
                }
              }
              *(_DWORD *)(v14 + 92) = v20 & 0xFFFFF7FF;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
            if ( *(_DWORD *)(v14 + 88) == 3 )
            {
              VidSchiProcessDpcSystemRequest(&v13[-1]);
            }
            else if ( *(_DWORD *)(v14 + 72) == 10 || *(_DWORD *)(v14 + 72) == 18 )
            {
              VidSchiProcessDpcCompletedPacket((struct _VIDSCH_DMA_PACKET *)&v13[-1]);
            }
            else if ( *(_DWORD *)(v14 + 72) == 11 )
            {
              VidSchiProcessDpcPreemptedPacket(&v13[-1]);
            }
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v16 + 24) + 1720LL), &v32);
            v21 = *(struct _SLIST_ENTRY ***)(v16 + 11240);
            if ( *v21 != (struct _SLIST_ENTRY *)(v16 + 11232) )
              __fastfail(3u);
            v13->Next = (struct _SLIST_ENTRY *)(v16 + 11232);
            *((_QWORD *)&v13->Next + 1) = v21;
            *v21 = v13;
            *(_QWORD *)(v16 + 11240) = v13;
            KeReleaseInStackQueuedSpinLock(&v32);
            goto LABEL_23;
          }
          if ( v12 == 11 )
            break;
          switch ( v12 )
          {
            case 0xFu:
              Next = v13[2].Next;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[375], v13);
              if ( bTracingEnabled )
                VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
              goto LABEL_23;
            case 0x10u:
              VidSchiProcessGpuEngineTimeoutDpc(v13);
              goto LABEL_23;
            case 0xCu:
              VidSchiProcessHwQueuePageFaultedDpc(v13);
              goto LABEL_23;
            case 0x11u:
              VidSchiProcessSuspendContextCompletedDpc(v13);
              goto LABEL_23;
          }
          if ( v12 <= 0xA && _bittest((const int *)&v11, v12) )
          {
            VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v13[-1]);
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)(*(&v6[194].Alignment + *((unsigned int *)&v13[4].Next + 2)) + 33648),
              v13);
LABEL_23:
            v10 = v34;
            v11 = 1160LL;
            goto LABEL_24;
          }
          if ( v12 == 14 )
          {
            VidSchiProcessPeriodicNotificationCookie(v6, &v13[-1], 1160LL);
            goto LABEL_23;
          }
LABEL_24:
          if ( !v8 )
            goto LABEL_25;
          v10 = (_QWORD *)*v10;
          v34 = v10;
        }
        VidSchiProcessMonitoredFenceSignaledDpc(v13);
        goto LABEL_23;
      }
LABEL_25:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[74])(&v28);
  if ( v30 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit);
  }
  return result;
}
