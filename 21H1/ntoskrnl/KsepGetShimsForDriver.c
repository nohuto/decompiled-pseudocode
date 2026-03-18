/*
 * XREFs of KsepGetShimsForDriver @ 0x140741648
 * Callers:
 *     KseDriverLoadImage @ 0x140743F4C (KseDriverLoadImage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KsepPoolAllocatePaged @ 0x14036E4DC (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x14036E538 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1405213E8 (KsepDebugPrint.c)
 *     KsepDbGetDriverShims @ 0x140741730 (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x140741A00 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x1407442C4 (KsepIsModuleShimmed.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408BBDF4 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v24 = 0LL;
  v23 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v25 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v25) )
  {
    v12 = v25;
    *a5 = *(_QWORD *)(v25 + 32);
    *a6 = *(_DWORD *)(v12 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v24, &v23);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v24, (__int64)&v23);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v24;
  v14 = v23;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v24, v23);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_12:
    if ( v13 && v14 )
      KsepDbFreeDriverShims(v13, v14);
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v16 = Paged;
  if ( !Paged )
  {
    ShimsFromRegistry = -1073741670;
    goto LABEL_12;
  }
  Paged[4] = v13;
  *((_DWORD *)Paged + 6) = v14;
  Paged[2] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50540, 0LL);
  v18 = (_QWORD *)qword_140C50538;
  if ( *(_UNKNOWN **)qword_140C50538 != &unk_140C50530 )
    __fastfail(3u);
  *v16 = &unk_140C50530;
  v16[1] = v18;
  *v18 = v16;
  qword_140C50538 = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50540);
  KeAbPostRelease((ULONG_PTR)&qword_140C50540);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
LABEL_5:
  *a5 = v24;
  *a6 = v23;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v22]) = 0;
    LODWORD(KsepHistoryMessages[v22]) = 459112;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}
