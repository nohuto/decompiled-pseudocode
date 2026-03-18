/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00DF4E0
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00DED6C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00AABA4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00DDA2C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C00DEC18 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00DF3FC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ??0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z @ 0x1C00E18E4 (--0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1C00E192C (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00EA9AC (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

char __fastcall VIDMM_WORKER_THREAD::SuspendDevices(
        union _LARGE_INTEGER *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        struct VIDMM_DEVICE **a7)
{
  union _LARGE_INTEGER *v8; // rsi
  char v9; // di
  __int64 v10; // r9
  char v11; // bl
  int v12; // r15d
  unsigned int v13; // r10d
  int v14; // r12d
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  char v17; // cl
  int v18; // edx
  unsigned int v19; // eax
  LONGLONG QuadPart; // r8
  __int64 v21; // rdx
  __int64 v22; // rsi
  VIDMM_GLOBAL *v23; // rcx
  struct _LIST_ENTRY *v24; // rsi
  struct _LIST_ENTRY *v25; // rdx
  VIDMM_GLOBAL **v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  VIDMM_DEVICE *DeviceToSuspend; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  VIDMM_DEVICE *v33; // rsi
  VIDMM_PROCESS_ADAPTER_INFO *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v42; // [rsp+38h] [rbp-51h]
  int v43; // [rsp+3Ch] [rbp-4Dh]
  struct _LIST_ENTRY *v44[2]; // [rsp+40h] [rbp-49h] BYREF
  char v45[8]; // [rsp+50h] [rbp-39h] BYREF
  DXGPUSHLOCK *v46; // [rsp+58h] [rbp-31h]
  int v47; // [rsp+60h] [rbp-29h]
  _BYTE v48[96]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v50; // [rsp+E0h] [rbp+57h]

  v8 = a1;
  v9 = 1;
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v48,
    a1 + 42,
    (unsigned int *)&a1[46].HighPart,
    1);
  v10 = a4;
  v11 = 0;
  v12 = 0;
  v13 = *(_DWORD *)(a2 + 68) & 0x3F;
  v42 = v13;
  if ( *(int *)(a4 + 4) < 0 )
    goto LABEL_31;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 60);
    v15 = 0;
    v50 = 0;
    if ( v14 )
      break;
LABEL_27:
    if ( ++v12 > *(_DWORD *)(v10 + 4) )
      goto LABEL_31;
  }
  v16 = *(_DWORD *)(a2 + 64) == 0 ? 6 : 0;
  while ( v16 > 5 )
  {
    v19 = v15;
    v18 = v15++;
    v50 = v15;
    if ( _bittest(&v14, v19) )
      goto LABEL_8;
LABEL_26:
    if ( !v14 )
      goto LABEL_27;
  }
  v17 = 6 * v16++;
  if ( ((*(_DWORD *)(a2 + 64) >> v17) & 0x1F) == 0 )
  {
LABEL_25:
    v15 = v50;
    goto LABEL_26;
  }
  v18 = ((*(_DWORD *)(a2 + 64) >> v17) & 0x1F) - 1;
LABEL_8:
  QuadPart = v8->QuadPart;
  v14 &= ~(1 << v18);
  v21 = (unsigned int)(*(_DWORD *)(1584LL * v13 + *(_QWORD *)(v8->QuadPart + 40224) + 20) + v18);
  v43 = v21;
  if ( (**(_DWORD **)(a2 + 528) & 0x20000) != 0 )
  {
    v12 = *(_DWORD *)(v10 + 4);
    v22 = *(_QWORD *)(*(_QWORD *)(QuadPart + 3712) + 8 * v21);
    v44[1] = (struct _LIST_ENTRY *)v44;
    v44[0] = (struct _LIST_ENTRY *)v44;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45, (struct _KTHREAD **)(QuadPart + 44480), 0);
    DXGPUSHLOCK::AcquireExclusive(v46);
    v47 = 2;
    if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v22, v44, a2, a6) )
    {
      if ( *(_DWORD *)(v22 + 412) )
      {
        v24 = v44[0];
        if ( (struct _LIST_ENTRY **)v44[0] != v44 )
        {
          do
          {
            v25 = v24;
            v26 = (VIDMM_GLOBAL **)&v24[-12];
            v24 = v24->Flink;
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v23, v25);
            VIDMM_DEVICE::PartiallySuspend(v26);
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v26, v27, v28, v29);
          }
          while ( v24 != (struct _LIST_ENTRY *)v44 );
          v11 = 1;
        }
LABEL_14:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
        goto LABEL_31;
      }
    }
    else
    {
      while ( (struct _LIST_ENTRY **)v44[0] != v44 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v23, v44[0]);
      if ( *(_DWORD *)(v22 + 412) )
        goto LABEL_14;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
    LODWORD(v21) = v43;
    QuadPart = a1->QuadPart;
  }
  DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(
                      *(_QWORD *)(*(_QWORD *)(QuadPart + 3712) + 8LL * (unsigned int)v21),
                      a3,
                      v12,
                      a5,
                      a7);
  v33 = DeviceToSuspend;
  if ( !DeviceToSuspend )
  {
LABEL_24:
    v8 = a1;
    v10 = a4;
    v13 = v42;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)DeviceToSuspend + 15) & 7) != 1 )
  {
    if ( v12 == 2 )
    {
      VIDMM_DEVICE::FullySuspend((VIDMM_GLOBAL **)DeviceToSuspend);
      VIDMM_DEVICE::FaultAllAllocations(v33, v35, v36, v37);
      goto LABEL_32;
    }
    v34 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
    if ( v34 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v34, 0LL, v31, v32) )
      goto LABEL_32;
    goto LABEL_24;
  }
  VIDMM_DEVICE::FullySuspend((VIDMM_GLOBAL **)DeviceToSuspend);
  VIDMM_DEVICE::FaultAllAllocations(v33, v38, v39, v40);
  v11 = 1;
LABEL_31:
  v9 = v11;
LABEL_32:
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v48);
  return v9;
}
