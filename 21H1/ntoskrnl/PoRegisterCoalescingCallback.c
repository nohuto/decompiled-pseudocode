/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140787FE0
 * Callers:
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140A397E8 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140A4704C (PopCoalescingInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExInitializePushLock @ 0x1402C0830 (ExInitializePushLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x1403AF60C (ExCompareExchangeCallBack.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(
        unsigned __int64 a1,
        char a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned __int64 a4)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  struct _EX_RUNDOWN_REF **v10; // rcx
  struct _EX_RUNDOWN_REF *v11; // rax
  __int64 result; // rax

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x62436F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v9[2].Count = (unsigned __int64)v9;
  v9[1].Count = (unsigned __int64)PopCoalescingCallback;
  v9[5].Count = a4;
  v9[3].Count = a1;
  LOBYTE(v9[4].Count) = a2 != 0;
  ExInitializePushLock(&v9->Count);
  if ( !ExCompareExchangeCallBack((signed __int64 *)&v9[8], v9, 0LL) )
    return 3221225485LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
  v10 = (struct _EX_RUNDOWN_REF **)off_140C04698;
  v11 = v9 + 6;
  if ( *off_140C04698 != (_UNKNOWN *)&PopCoalRegistrationList )
    __fastfail(3u);
  v9[7].Count = (unsigned __int64)off_140C04698;
  v11->Count = (unsigned __int64)&PopCoalRegistrationList;
  *v10 = v11;
  off_140C04698 = (_UNKNOWN **)&v9[6];
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = v9;
  return result;
}
