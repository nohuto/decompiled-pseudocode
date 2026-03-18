/*
 * XREFs of CiThreadCreate @ 0x1C000AED0
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C000AD60 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiDecrementTotalThreadCount @ 0x1C000205C (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0002070 (CiTaskIndexDereference.c)
 *     CiTryIncrementTotalThreadCount @ 0x1C0002860 (CiTryIncrementTotalThreadCount.c)
 *     CiSchedulerPoke @ 0x1C0002890 (CiSchedulerPoke.c)
 *     CiSchedulerAddThread @ 0x1C00028E0 (CiSchedulerAddThread.c)
 *     CiThreadInsertInTree @ 0x1C0002B10 (CiThreadInsertInTree.c)
 *     memset @ 0x1C00036C0 (memset.c)
 *     CiLogThreadJoin @ 0x1C00043F0 (CiLogThreadJoin.c)
 *     WPP_SF_ @ 0x1C00046A8 (WPP_SF_.c)
 *     WPP_SF_dI @ 0x1C0004B00 (WPP_SF_dI.c)
 *     CiThreadDereference @ 0x1C000A5D0 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000A680 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000A830 (CiProcessDereference.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000B140 (CiThreadIncrementScheduledCount.c)
 *     CiProcessAddThread @ 0x1C000B1C0 (CiProcessAddThread.c)
 *     CiThreadUpdatePriorities @ 0x1C000B210 (CiThreadUpdatePriorities.c)
 *     CiProcessLocate @ 0x1C000B2C0 (CiProcessLocate.c)
 *     CiProcessCreate @ 0x1C000B800 (CiProcessCreate.c)
 */

__int64 __fastcall CiThreadCreate(struct _KTHREAD *Object, _QWORD *P, __int64 *a3)
{
  __int64 v3; // rsi
  PEPROCESS ThreadProcess; // rax
  __int64 v8; // rdi
  int v9; // ebx
  void *Pool2; // rax
  __int64 v11; // rbx
  NTSTATUS InformationThread; // r15d
  char v13; // al
  __int64 v14; // rcx
  volatile signed __int32 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  _OWORD ThreadInformation[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  v3 = P[17];
  v23 = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v20 = 0LL;
  v21 = 0;
  ThreadProcess = PsGetThreadProcess(Object);
  v24 = CiProcessLocate(ThreadProcess);
  v8 = v24;
  if ( !v24 )
  {
    v9 = CiProcessCreate(&v24);
    if ( v9 < 0 )
    {
LABEL_22:
      CiTaskIndexDereference(P);
      return (unsigned int)v9;
    }
    v8 = v24;
  }
  v9 = CiTryIncrementTotalThreadCount(&CiTotalThreads, CiMaxThreadsTotal);
  if ( v9 < 0 )
  {
LABEL_21:
    CiProcessDereference((char *)v8);
    goto LABEL_22;
  }
  v9 = CiTryIncrementTotalThreadCount((volatile signed __int32 *)(v8 + 92), CiMaxThreadsPerProcess);
  if ( v9 < 0 )
  {
    v16 = &CiTotalThreads;
LABEL_20:
    CiDecrementTotalThreadCount(v16);
    goto LABEL_21;
  }
  Pool2 = (void *)ExAllocatePool2(65LL, 152LL, 1215521613LL);
  v11 = (__int64)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741801;
    CiDecrementTotalThreadCount(&CiTotalThreads);
    v16 = (volatile signed __int32 *)(v8 + 92);
    goto LABEL_20;
  }
  memset(Pool2, 0, 0x98uLL);
  *(_QWORD *)(v11 + 32) = 1LL;
  *(_QWORD *)(v11 + 72) = P;
  *(_QWORD *)(v11 + 64) = P[17];
  *(_QWORD *)(v11 + 128) = v8;
  InformationThread = ZwQueryInformationThread(
                        (HANDLE)0xFFFFFFFFFFFFFFFELL,
                        ThreadBasicInformation,
                        ThreadInformation,
                        0x30u,
                        0LL);
  if ( InformationThread < 0 )
    goto LABEL_30;
  *(_DWORD *)(v11 + 108) = v21;
  *(_DWORD *)(v11 + 144) = v22;
  *(_QWORD *)(v11 + 136) = v20;
  v13 = *(_BYTE *)(v3 + 1);
  if ( !v13 )
    v13 = 1;
  *(_BYTE *)(v11 + 106) = v13;
  *(_BYTE *)(v11 + 105) = 8;
  *(_BYTE *)(v11 + 104) = *(_BYTE *)v3;
  v23 = *(_QWORD *)(v3 + 32);
  if ( v23 != v20 )
  {
    v23 = *(_QWORD *)(v3 + 32);
    InformationThread = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &v23, 8u);
    if ( InformationThread < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_dI((__int64)WPP_GLOBAL_Control->AttachedDevice, v17, v18, InformationThread, v23);
      if ( InformationThread != -1073741811 || (~qword_1C0007270 & v23) != 0 )
        goto LABEL_30;
    }
  }
  *(_QWORD *)(v11 + 96) = Object;
  if ( !CiThreadInsertInTree(v11) )
  {
    *(_QWORD *)(v11 + 96) = 0LL;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_29026e0d014631895ac1404d49971dec_Traceguids);
    InformationThread = -1073740542;
LABEL_30:
    CiThreadCleanup(v11);
    CiThreadDereference((volatile signed __int64 *)v11);
    return (unsigned int)InformationThread;
  }
  CiThreadUpdatePriorities(v11, v3, 0LL);
  if ( byte_1C00073C0 )
    CiLogThreadJoin(v14);
  ObfReferenceObject(Object);
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  CiProcessAddThread(v11);
  if ( (*(_BYTE *)(v3 + 3) & 1) != 0 )
    CiSchedulerAddThread((__int64)P, v11);
  if ( (*(_BYTE *)(v11 + 148) & 1) == 0 )
    CiThreadIncrementScheduledCount(v11);
  *(_QWORD *)(v8 + 24) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 16, 0LL);
  *a3 = v11;
  CiSchedulerPoke(1u);
  return 0LL;
}
