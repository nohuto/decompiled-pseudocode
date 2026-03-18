/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C00054C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0005700 (VidSchiProcessDpcDmaPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001F6F4 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002D99C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0038FAC (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003ECC8 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0042CC0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0042D28 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C00435F8 (VidSchiProcessSuspendContextCompletedDpc.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 DxgAdapter; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbp
  union _SLIST_HEADER *v7; // rsi
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // rcx
  int v10; // r15d
  unsigned int v11; // ecx
  struct _SLIST_ENTRY *v12; // r14
  __int64 result; // rax
  __int64 v14; // rcx
  struct _SLIST_ENTRY *Next; // rdi
  int v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  char v18; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF

  v1 = 0LL;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5043;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[78])(&v16, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    DxgAdapter = DpiGetDxgAdapter(a1);
    v4 = DxgAdapter;
    if ( DxgAdapter )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2800) + 632LL);
      if ( v5 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1752), &LockHandle);
        v6 = *(_QWORD *)(v4 + 2800);
        v7 = *(union _SLIST_HEADER **)(v6 + 632);
        v8 = ExpInterlockedFlushSList(v7 + 111);
        if ( v8 )
        {
          do
          {
            p_Next = &v8->Next;
            v8 = v8->Next;
            *p_Next = v1;
            v1 = p_Next;
          }
          while ( v8 );
          v10 = 263304;
          do
          {
            v11 = *((_DWORD *)v1 - 4);
            v12 = (struct _SLIST_ENTRY *)(v1 - 2);
            v1 = (_QWORD *)*v1;
            if ( ((v11 - 1) & 0xFFFFFFF6) != 0 || v11 == 10 )
            {
              switch ( v11 )
              {
                case 0xBu:
                  VidSchiProcessMonitoredFenceSignaledDpc(v12);
                  break;
                case 0xFu:
                  Next = v12[2].Next;
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[376], v12);
                  if ( (byte_1C006E943 & 2) != 0 )
                    VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
                  break;
                case 0x10u:
                  VidSchiProcessGpuEngineTimeoutDpc(v12);
                  break;
                case 0xCu:
                  VidSchiProcessHwQueuePageFaultedDpc(v12);
                  break;
                case 0x11u:
                  VidSchiProcessSuspendContextCompletedDpc(v12);
                  break;
                default:
                  if ( v11 <= 0x12 && _bittest(&v10, v11) )
                  {
                    VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v12[-1]);
                    ExpInterlockedPushEntrySList(
                      (PSLIST_HEADER)(*(&v7[200].Alignment + *((unsigned int *)&v12[5].Next + 3)) + 44592),
                      v12);
                  }
                  else if ( v11 == 14 )
                  {
                    VidSchiProcessPeriodicNotificationCookie(v7, &v12[-1]);
                  }
                  break;
              }
            }
            else
            {
              _InterlockedExchange((volatile __int32 *)&v12[2].Next[6].Next[30].Next + 2, 1);
              if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
                VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v6 + 656), 1u);
              VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v12[-1]);
            }
          }
          while ( v1 );
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[79])(&v16);
  if ( v18 )
  {
    result = (unsigned __int8)byte_1C006E941;
    if ( byte_1C006E941 < 0 )
      return McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit);
  }
  return result;
}
