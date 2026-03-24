/*
 * XREFs of MmPrefetchForCacheManager @ 0x1406E898C
 * Callers:
 *     CcAsyncReadPrefetch @ 0x1402F9B74 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x140320A30 (CcFetchDataForRead.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x1402C811C (MiReturnCcAccessLog.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetCcAccessLog @ 0x1406AD20C (MiGetCcAccessLog.c)
 *     MiReleaseReadListResources @ 0x1406E8B14 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1406E9104 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  PVOID CcAccessLog; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r15
  PVOID *v14; // rbx
  int v15; // eax
  PVOID v16; // rcx
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = a5;
  v13 = **(_QWORD **)(a1 + 40);
  if ( dword_140C4E828 && a5 >= dword_140C4E82C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList((_DWORD)CcAccessLog, v13, a2, 0, a4, v12, -1, (__int64)&P) >= 0 && P )
  {
    v14 = a8;
    *((_DWORD *)P + 26) = 1;
    if ( !*v14 )
      --CurrentThread->SpecialApcDisable;
    v15 = MiPfPutPagesInTransition((__int64)P, 0LL, 1);
    v16 = P;
    if ( v15 >= 0 && *((PVOID *)P + 15) != (char *)P + 120 )
    {
      if ( CcAccessLog )
      {
        MiReturnCcAccessLog((signed __int64)CcAccessLog, 1);
        v16 = P;
      }
      MiPfExecuteReadList(v16, 1LL, 0xFFFFFFFFLL, a7);
      result = 1LL;
      *(_QWORD *)P = *v14;
      *v14 = P;
      return result;
    }
    if ( !*v14 )
    {
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v16 = P;
    }
    MiReleaseReadListResources(v16);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog((signed __int64)CcAccessLog, 0);
  return 0LL;
}
