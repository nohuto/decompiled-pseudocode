/*
 * XREFs of KsepGetShimsForDriver @ 0x140758B78
 * Callers:
 *     KseDriverLoadImage @ 0x14075B560 (KseDriverLoadImage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolAllocatePaged @ 0x14037174C (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x1403717A8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x140526EE8 (KsepDebugPrint.c)
 *     KsepDbGetDriverShims @ 0x140758C60 (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x140758F30 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B74C (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x14075B8D8 (KsepIsModuleShimmed.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0634 (KsepResolveApplicableShimsForDriver.c)
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
  __int64 v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v21 = 0LL;
  v20 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v22 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v22) )
  {
    v12 = v22;
    *a5 = *(_QWORD *)(v22 + 32);
    *a6 = *(_DWORD *)(v12 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v21, &v20);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v21, (__int64)&v20);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v21;
  v14 = v20;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v21, v20);
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50610, 0LL);
  v18 = (_QWORD *)qword_140C50608;
  if ( *(_UNKNOWN **)qword_140C50608 != &unk_140C50600 )
    __fastfail(3u);
  *v16 = &unk_140C50600;
  v16[1] = v18;
  *v18 = v16;
  qword_140C50608 = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50610);
  KeAbPostRelease((ULONG_PTR)&qword_140C50610);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_5:
  *a5 = v21;
  *a6 = v20;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v19]) = 0;
    LODWORD(KsepHistoryMessages[v19]) = 459112;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}
