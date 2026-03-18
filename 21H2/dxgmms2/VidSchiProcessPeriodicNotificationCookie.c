/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C0038FAC
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00054C0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0038574 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1C00370A4 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     McTemplateK0qqix_EtwWriteTransfer @ 0x1C0038028 (McTemplateK0qqix_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C0038820 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  union _SLIST_HEADER *v7; // rbx
  ULONGLONG Alignment; // rsi
  struct _VIDSCH_SYNC_OBJECT **v9; // rsi
  unsigned __int64 Region; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned __int64 *v21; // [rsp+20h] [rbp-39h]
  struct VIDSCH_HW_QUEUE **v22; // [rsp+28h] [rbp-31h]
  _QWORD v23[2]; // [rsp+50h] [rbp-9h] BYREF
  char v24; // [rsp+60h] [rbp+7h]
  _QWORD v25[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v26; // [rsp+88h] [rbp+2Fh]
  int v27; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+6Fh] BYREF

  v5 = *(unsigned int *)(a2 + 48);
  v6 = *(unsigned int *)(a2 + 52);
  v7 = *(union _SLIST_HEADER **)(a1 + 8 * v5 + 3200);
  if ( (byte_1C006E941 & 2) != 0 )
    McTemplateK0qqix_EtwWriteTransfer(a1, v5, a3, v5, v6, v7[2757].Region, v7[2756].Region);
  ExpInterlockedPushEntrySList(v7 + 4913, (PSLIST_ENTRY)(a2 + 16));
  v26 = 0;
  v25[0] = a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v25);
  v24 = 0;
  v23[1] = v23;
  v23[0] = v23;
  Alignment = v7[4912].Alignment;
  if ( Alignment
    && (v9 = *(struct _VIDSCH_SYNC_OBJECT ***)(Alignment + 8LL * (unsigned __int8)v6)) != 0LL
    && *((_DWORD *)v9 + 6) == (_DWORD)v6 )
  {
    Region = v7[2757].Region;
    v11 = v7[2756].Region;
    v27 = 0;
    v12 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)v9, Region, v11, &v27);
    v28 = v12;
    v14 = v12;
    v15 = (unsigned __int64)v9[7];
    if ( v15 == v12 )
    {
      WdLogSingleEntry1(1LL, v12);
      DxgCoreInterface[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"New periodic monitored fence value has the same value as the last signaled value %d",
        v28,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else if ( v15 <= v12 )
    {
      v16 = VidSchiSignalSyncObjectsFromCpu((struct HwQueueStagingList *)v23, 1u, v9, 0, &v28, 0LL);
      if ( v16 < 0 )
      {
        v20 = v16;
        WdLogSingleEntry3(1LL, *((unsigned int *)v9 + 2), v6, v16);
        DxgCoreInterface[85](
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to signal periodic monitored fence with VidPnSourceID:%d NotificationID:%u, returning 0x%I64x",
          *((unsigned int *)v9 + 2),
          v6,
          v20,
          0LL,
          0LL);
      }
      else
      {
        v9[7] = (struct _VIDSCH_SYNC_OBJECT *)v28;
        if ( (byte_1C006E941 & 2) != 0 )
        {
          LODWORD(v22) = v6;
          LODWORD(v21) = *((_DWORD *)v9 + 2);
          McTemplateK0pqqiix_EtwWriteTransfer(v18, v17, v19, *v9, v21, v22, Region, 0LL, v28);
        }
      }
    }
    else
    {
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      {
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventPerformanceWarning, v15, 25);
        v15 = (unsigned __int64)v9[7];
        v14 = v28;
      }
      WdLogSingleEntry2(1LL, v14, v15);
      ((void (__fastcall **)(_QWORD, __int64, __int64, const wchar_t *, __int64, struct _VIDSCH_SYNC_OBJECT *, _QWORD, _QWORD, _QWORD))DxgCoreInterface)[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"New periodic monitored fence value %d is less than the last signaled value %d",
        v28,
        v9[7],
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, v6);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Storage for periodic monitored fence notification %d is invalid",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v23);
  AcquireSpinLock::Release((AcquireSpinLock *)v25);
}
