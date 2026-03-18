/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140832790
 * Callers:
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140B15390 (PopCoalescingInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x1403C7678 (ExCompareExchangeCallBack.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(__int64 a1, char a2, __int64 *a3, __int64 a4)
{
  __int64 Pool2; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax

  Pool2 = ExAllocatePool2(64LL, 72LL, 1648586576LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 8) = PopCoalescingCallback;
  *(_QWORD *)(Pool2 + 40) = a4;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_BYTE *)(Pool2 + 32) = a2 != 0;
  ExInitializePushLock((PEX_RUNDOWN_REF)Pool2);
  if ( !ExCompareExchangeCallBack((signed __int64 *)(Pool2 + 64), (struct _EX_RUNDOWN_REF *)Pool2, 0LL) )
    return 3221225485LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
  v9 = off_140C06778;
  v10 = (_QWORD *)(Pool2 + 48);
  if ( *(_UNKNOWN ***)off_140C06778 != &PopCoalRegistrationList )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 56) = off_140C06778;
  *v10 = &PopCoalRegistrationList;
  *v9 = v10;
  off_140C06778 = (_UNKNOWN *)(Pool2 + 48);
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = Pool2;
  return result;
}
