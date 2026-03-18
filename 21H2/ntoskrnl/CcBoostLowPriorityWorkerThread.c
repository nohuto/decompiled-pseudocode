/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x14023C3B4
 * Callers:
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14029E260 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14023C5D4 (CcUpdateSharedCacheMapFlag.c)
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r9d
  __int64 result; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r8

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x5A2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 1216;
  ExAcquirePushLockExclusiveEx(a1 + 1216, 0LL);
  if ( *(_QWORD *)(a1 + 1192)
    && (int)PsGetIoPriorityThread(KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 1200)) )
  {
    IoBoostThreadIoPriority(v12, 2LL, 0LL);
    *(_DWORD *)(a1 + 1208) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 1192), 13);
    v13 = *(_QWORD *)(a1 + 1200);
    if ( !*(_DWORD *)(v13 + 4) )
      KeBugCheckEx(0x34u, 0x5CFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v13 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a1 + 1192), 0LL, 0LL, 0LL);
      LOBYTE(v14) = 1;
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 1200), 0x20000000LL, v14);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  CurrentThread = KeGetCurrentThread();
  if ( v4 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v8 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v8
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v9 = (unsigned int)(v9 + 1);
    p_Process += 96;
    if ( (unsigned int)v9 >= 6 )
      goto LABEL_19;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v9, v8);
      _disable();
    }
    v10 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    result = (unsigned __int8)p_Process[16];
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v10 )
      return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v4, v10);
    return result;
  }
LABEL_19:
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, SessionId, 0LL);
  _enable();
  return result;
}
