/*
 * XREFs of ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01431F0
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0021224 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisInitializeTimer @ 0x1C0023740 (NdisInitializeTimer.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0027240 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateRWLock @ 0x1C002D3E0 (NdisAllocateRWLock.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0147320 (ndisUnloadPeriodicReceives.c)
 */

__int64 ndisInitializePeriodicReceives(void)
{
  unsigned int ProcessorNumberFromIndex; // edi
  PVOID PoolWithTag; // rax
  unsigned int v2; // ebx
  PVOID v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int i; // esi
  char *v7; // rbx
  PVOID v8; // rax
  __int64 v9; // rbx
  ULONG j; // esi
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rax
  SIZE_T v13; // rax
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-28h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)&Parameters.Header.Revision = 0LL;
  *(unsigned int *)((char *)&Parameters.PoolTag + 1) = 0;
  *(_WORD *)((char *)&Parameters.DataSize + 1) = 0;
  HIBYTE(Parameters.DataSize) = 0;
  ProcessorNumberFromIndex = 0;
  ProcNumber = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  ndisPerCpuPoisonPills = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_15;
  v2 = ndisMaxNumberOfProcessors;
  memset(PoolWithTag, 0, 32LL * ndisMaxNumberOfProcessors);
  v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v2, 0x2020444Eu);
  qword_1C00E4108 = v3;
  if ( !v3 )
    goto LABEL_15;
  v4 = ndisMaxNumberOfProcessors;
  memset(v3, 0, 8LL * ndisMaxNumberOfProcessors);
  qword_1C00E4100 = ExAllocatePoolWithTag(NonPagedPoolNx, v4 << 6, 0x2020444Eu);
  if ( !qword_1C00E4100 )
    goto LABEL_15;
  v5 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    v7 = (char *)qword_1C00E4100 + 64 * (unsigned __int64)i;
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    KeInitializeSpinLock((PKSPIN_LOCK)v7 + 2);
    *((_DWORD *)v7 + 6) = 0;
    KeInitializeSemaphore((PRKSEMAPHORE)v7 + 1, 0, 0x7FFFFFFF);
    v5 = ndisMaxNumberOfProcessors;
  }
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v5, 0x2020444Eu);
  qword_1C00E40F8 = v8;
  if ( !v8 )
    goto LABEL_15;
  v9 = ndisMaxNumberOfProcessors;
  memset(v8, 0, 4LL * ndisMaxNumberOfProcessors);
  qword_1C00E40F0 = ExAllocatePoolWithTag(NonPagedPoolNx, v9 << 7, 0x2020444Eu);
  if ( !qword_1C00E40F0 )
    goto LABEL_15;
  for ( j = 0; j < ndisNumberOfActiveProcessorsAtBoot; ++j )
  {
    v11 = (unsigned __int64)j << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(j, &ProcNumber);
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)qword_1C00E40F0 + v11),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C00E40F0 + v11 + 64), &ProcNumber);
  }
  Lock = NdisAllocateRWLock(&ndisDummyObject);
  if ( !Lock
    || (Parameters.Header = (_NDIS_OBJECT_HEADER)1048960,
        *(_DWORD *)&Parameters.ProtocolId = 256,
        *(_QWORD *)&Parameters.PoolTag = 1953645646LL,
        (PoolHandle = NdisAllocateNetBufferListPool(0LL, &Parameters)) == 0LL) )
  {
LABEL_15:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_14;
  }
  v12 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v13 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &stru_1C00E41C0,
    0LL,
    0LL,
    0x200u,
    ((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  ndisPeriodicReceives = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_14:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
