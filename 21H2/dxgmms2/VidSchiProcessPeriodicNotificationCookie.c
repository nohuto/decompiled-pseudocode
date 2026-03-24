/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C0030484
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006AC0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002EE08 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000AFA0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011F60 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00129FC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1C002DBFC (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     McTemplateK0qqix_EtwWriteTransfer @ 0x1C002EB50 (McTemplateK0qqix_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002F098 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0033238 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  union _SLIST_HEADER *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONGLONG Alignment; // rbx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // r14
  __int64 Region; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rsi
  unsigned __int64 *v25; // [rsp+28h] [rbp-29h]
  __int64 v26; // [rsp+30h] [rbp-21h]
  _QWORD v27[2]; // [rsp+58h] [rbp+7h] BYREF
  char v28; // [rsp+68h] [rbp+17h]
  _QWORD v29[4]; // [rsp+70h] [rbp+1Fh] BYREF
  __int16 v30; // [rsp+90h] [rbp+3Fh]
  int v31; // [rsp+B8h] [rbp+67h] BYREF
  unsigned __int64 v32; // [rsp+C0h] [rbp+6Fh] BYREF

  v4 = *(unsigned int *)(a2 + 48);
  v6 = *(unsigned int *)(a2 + 52);
  v7 = *(union _SLIST_HEADER **)(a1 + 8 * v4 + 3104);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    McTemplateK0qqix_EtwWriteTransfer(a1, v4, a3, v4, v6, v7[2075].Alignment, v7[2074].Region);
  ExpInterlockedPushEntrySList(v7 + 4154, (PSLIST_ENTRY)(a2 + 16));
  v30 = 0;
  v29[0] = a1 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v29);
  v28 = 0;
  v27[1] = v27;
  v27[0] = v27;
  Alignment = v7[4153].Alignment;
  if ( !Alignment
    || (v9 = (unsigned __int8)v6, (v12 = *(_QWORD **)(Alignment + 8LL * (unsigned __int8)v6)) == 0LL)
    || *((_DWORD *)v12 + 6) != (_DWORD)v6 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10);
    v19[3] = v6;
    goto LABEL_18;
  }
  v13 = v7[2075].Alignment;
  Region = v7[2074].Region;
  v31 = 0;
  v15 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)v12, v13, Region, &v31);
  v32 = v15;
  if ( v12[7] == v15 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16, v18);
    v19[3] = v32;
LABEL_18:
    WdLogEvent5_WdAssertion(v19);
    goto LABEL_19;
  }
  if ( v12[7] > v15 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventPerformanceWarning, v18, 25);
    v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16, v18);
    v19[3] = v32;
    v19[4] = v12[7];
    goto LABEL_18;
  }
  v20 = VidSchiSignalSyncObjectsFromCpu(
          (struct HwQueueStagingList *)v27,
          1u,
          (struct _VIDSCH_SYNC_OBJECT **)v12,
          0,
          &v32,
          0LL);
  v24 = v20;
  if ( v20 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v21, v23);
    v19[3] = *((unsigned int *)v12 + 2);
    v19[4] = v6;
    v19[5] = v24;
    goto LABEL_18;
  }
  v12[7] = v32;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    LODWORD(v26) = v6;
    LODWORD(v25) = *((_DWORD *)v12 + 2);
    McTemplateK0pqqiix_EtwWriteTransfer(v22, v21, v23, *v12, v25, v26, v13, 0LL, v32);
  }
LABEL_19:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v27);
  AcquireSpinLock::Release((AcquireSpinLock *)v29);
}
