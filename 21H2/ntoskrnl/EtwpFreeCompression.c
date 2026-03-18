/*
 * XREFs of EtwpFreeCompression @ 0x14024E0F0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x14024E2A0 (EtwpFreePlaceholderList.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406355B0 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r9d

  KeRemoveQueueDpcEx(a1 + 1192, 0LL);
  if ( *(_DWORD *)(a1 + 1168) && (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v4 = a1 + 1144;
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1144);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)(v4 - qword_140C50630) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
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
        goto LABEL_25;
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
      CurrentThread->AbEntrySummary |= 1 << p_Process[16];
      _enable();
      if ( v10 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, a1 + 1144, v10);
      goto LABEL_28;
    }
LABEL_25:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 1144, SessionId, 0LL);
    _enable();
LABEL_28:
    _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0);
  }
  v2 = *(void **)(a1 + 1160);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 1152);
  if ( !v3 || (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    EtwpFreePlaceholderList(a1);
  else
    ExFreePoolWithTag(v3, 0);
}
