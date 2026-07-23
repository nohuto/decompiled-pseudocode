/*
 * XREFs of KeInitThread @ 0x140990D94
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     KiInitializeIdleThread @ 0x14099F354 (KiInitializeIdleThread.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KiInitializeContextThread @ 0x140266AAC (KiInitializeContextThread.c)
 *     KeAbInitializeThreadState @ 0x140266DA0 (KeAbInitializeThreadState.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 */

__int64 __fastcall KeInitThread(
        __int64 a1,
        __int64 KernelStack,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 Group; // rcx
  unsigned __int16 v20; // ax
  __int64 v21; // r11
  __int64 v22; // rcx

  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 784) = a1 + 776;
  *(_QWORD *)(a1 + 776) = a1 + 776;
  v13 = (__int64 *)(a1 + 344);
  v14 = 4LL;
  do
  {
    *v13 = a1;
    v13 += 6;
    --v14;
  }
  while ( v14 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 120) & 0xFFFFFFFB | (4 * (*(_DWORD *)(a8 + 632) & 1 | 0x8010));
  *(_DWORD *)(a1 + 84) = 16 * KiShortExecutionCycles;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 184) = a8;
  *(_QWORD *)(a1 + 544) = a8;
  v15 = *(_DWORD *)(a1 + 116) | 0x4000;
  *(_DWORD *)(a1 + 116) = v15;
  if ( !a6 )
    *(_DWORD *)(a1 + 116) = v15 | 0x400;
  KeInitializeApc(
    a1 + 648,
    a1,
    0,
    (__int64)xHalTimerWatchdogStop,
    (__int64)xHalTimerWatchdogStop,
    (__int64)KiSchedulerApc,
    0,
    a1);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 1u);
  KeInitializeTimerEx((PKTIMER)(a1 + 256), NotificationTimer);
  *(_QWORD *)(a1 + 304) = KiWaitNever ^ __ROR8__((a1 + 256) ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v16 = (_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 480) = 16909313;
  v17 = a1 + 264;
  v18 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
    __fastfail(3u);
  *v16 = v18;
  *(_QWORD *)(a1 + 472) = v17;
  *(_QWORD *)(v18 + 8) = v16;
  *(_QWORD *)v17 = v16;
  *(_QWORD *)(a1 + 240) = a7;
  *(_BYTE *)a1 = 6;
  if ( !KernelStack )
  {
    Group = KeGetCurrentThread()->Affinity.Group;
    v20 = a9 ? a9 - 1 : *(_WORD *)(a8 + 2 * Group + 772);
    KernelStack = MmCreateKernelStack(8u, v20, a1);
    if ( !KernelStack )
      return 3221225626LL;
  }
  *(_QWORD *)(a1 + 40) = KernelStack;
  *(_QWORD *)(a1 + 56) = KernelStack;
  *(_QWORD *)(a1 + 48) = KernelStack - (unsigned int)KeKernelStackSize;
  *(_BYTE *)(a1 + 126) = *(_BYTE *)(a1 + 126) & 0x80 | 8;
  if ( KeHeteroSystem )
    *(_BYTE *)(a1 + 125) = KiDefaultHeteroCpuPolicy;
  KeAbInitializeThreadState(a1);
  *(_QWORD *)(a1 + 880) = v21;
  *(_QWORD *)(a1 + 1008) = v21;
  KiInitializeContextThread(v22, a3, a4, a5, a6);
  return 0LL;
}
