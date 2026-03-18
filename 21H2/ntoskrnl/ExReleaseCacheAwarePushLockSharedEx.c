/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140359C70
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x140359D80 (KiAbThreadClearAcquiredLockEntry.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v6; // rsi
  __int64 SessionId; // r8
  unsigned int v8; // r8d
  __int64 v9; // rbx
  int v10; // edx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v6 - qword_140C50630 < 0x8000000000LL )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    _disable();
    result = KiAbThreadClearAcquiredLockEntry(CurrentThread, v6, SessionId);
    v9 = result;
    if ( result )
    {
      if ( *(__int64 *)result < 0 )
      {
        *(_BYTE *)result |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(result);
        _disable();
      }
      v10 = *(_DWORD *)(v9 + 88);
      *(_DWORD *)(v9 + 88) = 0;
      *(_BYTE *)(v9 + 17) = 0;
      *(_QWORD *)v9 = 0LL;
      result = *(unsigned __int8 *)(v9 + 16);
      CurrentThread->AbEntrySummary |= 1 << result;
      _enable();
      if ( v10 )
        return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v6, v10);
    }
    else
    {
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, v8, 0LL);
      _enable();
    }
  }
  return result;
}
