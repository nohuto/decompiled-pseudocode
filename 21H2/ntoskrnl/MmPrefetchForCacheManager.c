/*
 * XREFs of MmPrefetchForCacheManager @ 0x1406FA590
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14029C970 (CcAsyncReadPrefetch.c)
 *     CcFetchDataForRead @ 0x140329470 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x140233A4C (MiReturnCcAccessLog.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiGetCcAccessLog @ 0x1406AC9A4 (MiGetCcAccessLog.c)
 *     MiPfExecuteReadList @ 0x1406F4E78 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x1406FACF8 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  _QWORD *CcAccessLog; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r12
  PVOID *v15; // rbx
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = a5;
  v14 = **(_QWORD **)(a1 + 40);
  if ( dword_140C52B68 && a5 >= dword_140C52B6C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList((_DWORD)CcAccessLog, v14, a2, a3, a4, v13, -1, (__int64)&P) >= 0 && P )
  {
    v15 = a8;
    *((_DWORD *)P + 26) = 1;
    if ( !*v15 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)P, 0) >= 0 && *((PVOID *)P + 15) != (char *)P + 120 )
    {
      if ( CcAccessLog )
        MiReturnCcAccessLog(CcAccessLog, 1);
      MiPfExecuteReadList((__int64)P, 1, 0xFFFFFFFF, a7);
      result = 1LL;
      *(_QWORD *)P = *v15;
      *v15 = P;
      return result;
    }
    if ( !*v15
      && CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    MiReleaseReadListResources(P);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
