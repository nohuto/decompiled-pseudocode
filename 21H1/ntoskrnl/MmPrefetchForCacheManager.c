/*
 * XREFs of MmPrefetchForCacheManager @ 0x14063EE9C
 * Callers:
 *     CcFetchDataForRead @ 0x140287F20 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1402BE260 (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x140318B04 (MiReturnCcAccessLog.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x14063E46C (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14063F024 (MiPfExecuteReadList.c)
 *     MiGetCcAccessLog @ 0x1406D8ADC (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  signed __int64 CcAccessLog; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r15
  PVOID *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // rcx
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = a5;
  v13 = **(_QWORD **)(a1 + 40);
  if ( dword_140C4E768 && a5 >= dword_140C4E76C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v13, a2, 0LL, a4, v12, 0xFFFFFFFF, &P) >= 0 && P )
  {
    v14 = a8;
    *((_DWORD *)P + 26) = 1;
    if ( !*v14 )
      --CurrentThread->SpecialApcDisable;
    v15 = MiPfPutPagesInTransition((__int64)P, 0LL, 1);
    v19 = P;
    if ( v15 >= 0 && *((PVOID *)P + 15) != (char *)P + 120 )
    {
      if ( CcAccessLog )
      {
        MiReturnCcAccessLog(CcAccessLog, 1);
        v19 = P;
      }
      MiPfExecuteReadList(v19, 1LL, 0xFFFFFFFFLL, a7);
      result = 1LL;
      *(_QWORD *)P = *v14;
      *v14 = P;
      return result;
    }
    if ( !*v14 )
    {
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
      v19 = P;
    }
    MiReleaseReadListResources((__int64)v19);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
