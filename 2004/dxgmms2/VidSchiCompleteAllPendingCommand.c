/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x1C003C970
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003D114 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchIsTDRPending @ 0x1C000B6C0 (VidSchIsTDRPending.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0038578 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CB38 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiCompletePendingFlip @ 0x1C003CE00 (VidSchiCompletePendingFlip.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00D1FA4 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // r14d
  __int64 *v4; // r15
  __int64 v5; // r15
  LARGE_INTEGER *v6; // rbx
  bool IsTDRPending; // al
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  char v11; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v14; // [rsp+70h] [rbp-10h]

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
  {
    v4 = *(__int64 **)(a1 + 624);
    if ( i < *(_DWORD *)(a1 + 696) )
      v4 += i;
    v5 = *v4;
    if ( (*(_DWORD *)(v5 + 12) & 2) != 0 )
    {
      VidSchiRundownHardwareScheduledContexts((struct _VIDSCH_NODE *)v5);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
      v6 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
      memset(v6, 0, 0x70uLL);
      *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v6->LowPart = 7;
      v6[1] = KeQueryPerformanceCounter(0LL);
      v6[2] = *(LARGE_INTEGER *)(v5 + 152);
      LOBYTE(v6[3].LowPart) = *(_BYTE *)(a1 + 2940) & 1;
      IsTDRPending = VidSchIsTDRPending(a1);
      BYTE2(v6[3].u.LowPart) = 0;
      BYTE1(v6[3].LowPart) = IsTDRPending;
      VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), 0LL);
      v8 = *(_QWORD *)(v5 + 168);
      *(_QWORD *)(v5 + 64) = v8;
      *(_QWORD *)(v5 + 72) = v8;
      if ( *(_DWORD *)(v5 + 2892) )
        VidSchiWaitForCompletePreemption(v5);
    }
  }
  v14 = 0;
  v13[0] = a1 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v13);
  v11 = 0;
  v10[1] = v10;
  v10[0] = v10;
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip(v10, a1, v1++, 9LL);
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v10);
  AcquireSpinLock::Release((AcquireSpinLock *)v13);
  return 0LL;
}
