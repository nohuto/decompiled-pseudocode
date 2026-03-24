/*
 * XREFs of VidSchQueryLastCompletedPresentId @ 0x1C00149F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 && a3 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = (unsigned int)a2;
    if ( (unsigned int)a2 < *(_DWORD *)(v5 + 40) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1720), &LockHandle);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v6 + 508);
      v7 = *(_DWORD *)(a1 + 8 * v6 + 576);
      *(_DWORD *)(a3 + 8) = v7;
      *(_DWORD *)(a3 + 4) = v7;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 8 * v6 + 704);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 8 * v6 + 832);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    v9 = WdLogNewEntry5_WdWarning(v5, a2);
    *(_QWORD *)(v9 + 24) = v6;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v9);
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
  }
  return 3221225485LL;
}
