/*
 * XREFs of CcAmILowPriorityWriter @ 0x140282258
 * Callers:
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall CcAmILowPriorityWriter(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rsi
  bool v3; // bp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d

  v1 = *(_QWORD *)(a1 + 528);
  v2 = v1 + 1216;
  ExAcquirePushLockExclusiveEx(v1 + 1216, 0LL);
  v3 = *(_QWORD *)(v1 + 1192) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 1216);
  CurrentThread = KeGetCurrentThread();
  if ( v2 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v7 = 0LL;
  v8 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v8
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v7 = (unsigned int)(v7 + 1);
    p_Process += 96;
    if ( (unsigned int)v7 >= 6 )
      goto LABEL_17;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v7, v8);
      _disable();
    }
    v9 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v9 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v2, v9);
    return v3;
  }
LABEL_17:
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
  _enable();
  return v3;
}
