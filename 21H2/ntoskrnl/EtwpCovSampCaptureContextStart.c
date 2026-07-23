/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x140942488
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x14094735C (EtwpCoverageSamplerStart.c)
 * Callees:
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ExSaAllocate @ 0x1403916A4 (ExSaAllocate.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x1403FA720 (ZwSetInformationThread.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCovSampLookasideGrow @ 0x1405AF5EC (EtwpCovSampLookasideGrow.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140942AD8 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140945330 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409453C4 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x140946194 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14094622C (EtwpCovSampStrideSamplerInitialize.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rsi
  PVOID *PoolWithTag; // rax
  int SystemThread; // ebx
  __int64 **v5; // r15
  PVOID v6; // rax
  __int64 v7; // rax
  struct _KTHREAD *v8; // rcx
  int v9; // ebx
  ULONG MaximumProcessorCount; // eax
  ULONG v11; // r12d
  __int64 v12; // r12
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  bool v18; // zf
  int v19; // eax
  __int64 *v20; // r14
  unsigned int v21; // ecx
  HANDLE Handle; // [rsp+58h] [rbp-9h] BYREF
  __int64 v24; // [rsp+60h] [rbp-1h]
  ULONG v25; // [rsp+68h] [rbp+7h]
  PVOID Object; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+78h] [rbp+17h]
  _DWORD ThreadInformation[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (PVOID *)qword_140C198C8;
  Handle = 0LL;
  if ( !qword_140C198C8 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3D0uLL, 0x56777445u);
    v1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SystemThread = -1073741670;
      goto LABEL_30;
    }
    memset(PoolWithTag, 0, 0x3D0uLL);
    v1[1] = (PVOID)-1LL;
    KeInitializeEvent((PRKEVENT)v1 + 28, NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 76), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 44);
    KeInitializeEvent((PRKEVENT)(v1 + 92), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 95), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, v1);
    KeInitializeDpc((PRKDPC)(v1 + 103), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, v1);
    KeInitializeEvent((PRKEVENT)v1 + 37, NotificationEvent, 0);
    *((_DWORD *)v1 + 231) = (*a1 >> 11) & 1;
    qword_140C198C8 = (__int64)v1;
  }
  v5 = (__int64 **)(v1 + 72);
  v1[75] = v1 + 74;
  v1[73] = v1 + 72;
  v1[72] = v1 + 72;
  v1[74] = v1 + 74;
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 34,
    EtwpCovSampCaptureAllocateApc,
    (unsigned int)(3 * a1[9]) >> 2,
    a1[9]);
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 44,
    EtwpCovSampCaptureAllocateCaptureBuffer,
    (unsigned int)(3 * a1[8]) >> 2,
    a1[8]);
  if ( a1[19] )
  {
    EtwpCovSampStackHashTableAlloc(v1 + 119);
    EtwpCovSampStackHashTableAlloc(v1 + 120);
    v6 = v1[119];
    if ( !v6 || !v1[120] )
      goto LABEL_20;
    v1[118] = v6;
    v1[121] = (PVOID)(unsigned int)ExGenRandom(0);
  }
  if ( v1[1] != (PVOID)-1LL )
    goto LABEL_12;
  v7 = ExSaAllocate(0x150u, 0);
  if ( v7 == -1 )
  {
LABEL_20:
    SystemThread = -1073741670;
    goto LABEL_21;
  }
  v1[1] = (PVOID)v7;
LABEL_12:
  v8 = (struct _KTHREAD *)*v1;
  if ( *v1 )
    goto LABEL_15;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)EtwpCovSampCaptureWorkerThread,
                   (__int64)v1,
                   0LL,
                   0LL);
  if ( SystemThread < 0 )
  {
LABEL_21:
    if ( v1[1] != (PVOID)-1LL )
      EtwpCovSampCaptureFreeLookasides(v1);
    goto LABEL_30;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
  *v1 = Object;
  ThreadInformation[0] = 1;
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ZwSetInformationThread(Handle, ThreadPowerThrottlingState, ThreadInformation, 0xCu);
  v8 = (struct _KTHREAD *)*v1;
LABEL_15:
  v9 = *a1 & 0x200;
  KeSetBasePriorityThread(v8, (v9 != 0) - 1);
  *((_DWORD *)v1 + 234) = v9 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v11 = MaximumProcessorCount;
  v25 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v24 = 0LL;
    v27 = MaximumProcessorCount;
    v12 = 0LL;
    do
    {
      v13 = ((unsigned int)v1[1] >> 13) & 0x3FFFF;
      _BitScanReverse(&v14, v13);
      v15 = *(_QWORD *)(v12 + ExSaPageArrays);
      v16 = ((unsigned __int64)v1[1] >> 4) & 0x1FF;
      LODWORD(v24) = v14;
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8LL * (v14 - 2)) + 8 * (v13 ^ (unsigned int)(1 << v14)) + 8);
      memset((void *)(v17 + 8 * (v16 + 1)), 0, 0x148uLL);
      *(_QWORD *)(v17 + 8 * v16) = 0LL;
      EtwpCovSampLookasideInitialize(v1, v17 + 8 * (v16 + 2), v1 + 34);
      EtwpCovSampLookasideInitialize(v1, v17 + 8 * (v16 + 10), v1 + 44);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 18), (unsigned int)a1[10], (unsigned int)a1[11]);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 23), (unsigned int)a1[12], (unsigned int)a1[13]);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 28), (unsigned int)a1[14], (unsigned int)a1[15]);
      EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v16 + 33), (unsigned int)a1[16], (unsigned int)a1[17]);
      v18 = v27-- == 1;
      v12 += 8LL;
    }
    while ( !v18 );
    v11 = v25;
    v5 = (__int64 **)(v1 + 72);
  }
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 54,
    EtwpCovSampCaptureAllocateSampleBuffer,
    (3 * v11 * a1[7]) >> 2,
    v11 * a1[7]);
  EtwpCovSampLookasideInitialize(v1, v1 + 64, v1 + 54);
  v19 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 174) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 175) = v19;
  *((_DWORD *)v1 + 230) = 0;
  *((_DWORD *)v1 + 232) = a1[18];
  *((_DWORD *)v1 + 233) = a1[6];
  _InterlockedExchange((volatile __int32 *)v1 + 228, 1);
  v20 = *v5;
  *((_DWORD *)v1 + 229) = 0;
  while ( v20 != (__int64 *)v5 )
  {
    _InterlockedExchange((volatile __int32 *)v20 + 6, 1);
    *((_DWORD *)v20 + 7) = 0;
    while ( 1 )
    {
      v21 = *((_DWORD *)v20 + 9);
      if ( v21 >= *(_DWORD *)(v20[2] + 56) || v21 >= *((_DWORD *)v20 + 10) )
        break;
      SystemThread = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(v20 - 2));
      if ( SystemThread < 0 )
        goto LABEL_21;
    }
    v20 = (__int64 *)*v20;
  }
  SystemThread = 0;
LABEL_30:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)SystemThread;
}
