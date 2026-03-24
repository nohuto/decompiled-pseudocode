/*
 * XREFs of CiThreadCreate @ 0x1C000AB70
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C000AA00 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiTryIncrementTotalThreadCount @ 0x1C00017D0 (CiTryIncrementTotalThreadCount.c)
 *     CiSchedulerPoke @ 0x1C0001800 (CiSchedulerPoke.c)
 *     CiSchedulerAddThread @ 0x1C0001850 (CiSchedulerAddThread.c)
 *     CiThreadInsertInTree @ 0x1C00019E0 (CiThreadInsertInTree.c)
 *     CiDecrementTotalThreadCount @ 0x1C0001B50 (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0001B60 (CiTaskIndexDereference.c)
 *     memset @ 0x1C0003480 (memset.c)
 *     CiLogThreadJoin @ 0x1C0004140 (CiLogThreadJoin.c)
 *     WPP_SF_ @ 0x1C00043F8 (WPP_SF_.c)
 *     WPP_SF_dI @ 0x1C0004850 (WPP_SF_dI.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ADD0 (CiThreadIncrementScheduledCount.c)
 *     CiProcessAddThread @ 0x1C000AE50 (CiProcessAddThread.c)
 *     CiThreadUpdatePriorities @ 0x1C000AEA0 (CiThreadUpdatePriorities.c)
 *     CiProcessLocate @ 0x1C000AF50 (CiProcessLocate.c)
 *     CiProcessCreate @ 0x1C000B400 (CiProcessCreate.c)
 *     CiThreadDereference @ 0x1C000B830 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B8E0 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000BA90 (CiProcessDereference.c)
 */

__int64 __fastcall CiThreadCreate(struct _KTHREAD *Object, volatile signed __int64 *P, __int64 *a3)
{
  __int64 v3; // rdi
  PEPROCESS ThreadProcess; // rax
  __int64 v8; // rsi
  int v9; // ebx
  PVOID PoolWithQuotaTag; // rax
  __int64 v11; // rbx
  NTSTATUS InformationThread; // r15d
  char v13; // al
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE ThreadInformation[32]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)P + 17);
  v20 = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v19 = 0LL;
  ThreadProcess = PsGetThreadProcess(Object);
  v21 = CiProcessLocate(ThreadProcess);
  v8 = v21;
  if ( !v21 )
  {
    v9 = CiProcessCreate(&v21);
    if ( v9 < 0 )
    {
LABEL_22:
      CiTaskIndexDereference(P);
      return (unsigned int)v9;
    }
    v8 = v21;
  }
  v9 = CiTryIncrementTotalThreadCount(&CiTotalThreads, CiMaxThreadsTotal);
  if ( v9 < 0 )
  {
LABEL_21:
    CiProcessDereference((PVOID)v8);
    goto LABEL_22;
  }
  v9 = CiTryIncrementTotalThreadCount((volatile signed __int32 *)(v8 + 92), CiMaxThreadsPerProcess);
  if ( v9 < 0 )
  {
    v15 = &CiTotalThreads;
LABEL_20:
    CiDecrementTotalThreadCount(v15);
    goto LABEL_21;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x98uLL, 0x4873634Du);
  v11 = (__int64)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v9 = -1073741801;
    CiDecrementTotalThreadCount(&CiTotalThreads);
    v15 = (volatile signed __int32 *)(v8 + 92);
    goto LABEL_20;
  }
  memset(PoolWithQuotaTag, 0, 0x98uLL);
  *(_QWORD *)(v11 + 32) = 1LL;
  *(_QWORD *)(v11 + 72) = P;
  *(_QWORD *)(v11 + 64) = *((_QWORD *)P + 17);
  *(_QWORD *)(v11 + 128) = v8;
  InformationThread = ZwQueryInformationThread(
                        (HANDLE)0xFFFFFFFFFFFFFFFELL,
                        ThreadBasicInformation,
                        ThreadInformation,
                        0x30u,
                        0LL);
  if ( InformationThread < 0 )
    goto LABEL_30;
  *(_DWORD *)(v11 + 108) = DWORD2(v19);
  *(_DWORD *)(v11 + 144) = HIDWORD(v19);
  *(_QWORD *)(v11 + 136) = v19;
  v13 = *(_BYTE *)(v3 + 1);
  if ( !v13 )
    v13 = 1;
  *(_BYTE *)(v11 + 106) = v13;
  *(_BYTE *)(v11 + 105) = 8;
  *(_BYTE *)(v11 + 104) = *(_BYTE *)v3;
  v20 = *(_QWORD *)(v3 + 32);
  if ( v20 != (_QWORD)v19 )
  {
    v20 = *(_QWORD *)(v3 + 32);
    InformationThread = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &v20, 8u);
    if ( InformationThread < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_dI((__int64)WPP_GLOBAL_Control->AttachedDevice, v16, v17, InformationThread, v20);
      if ( InformationThread != -1073741811 || (~qword_1C0007210 & v20) != 0 )
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
    CiThreadDereference(v11);
    return (unsigned int)InformationThread;
  }
  CiThreadUpdatePriorities(v11, v3, 0LL);
  if ( byte_1C0007370 )
    CiLogThreadJoin(v11);
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
