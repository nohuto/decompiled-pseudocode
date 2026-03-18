/*
 * XREFs of NormalizationList__Unlock @ 0x1405F2A2C
 * Callers:
 *     RtlpGetNormalization @ 0x1409C5570 (RtlpGetNormalization.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char NormalizationList__Unlock()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v3; // edx
  int v4; // r9d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&NormalizationListLock);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&NormalizationListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v3 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&NormalizationListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v3;
    p_Process += 96LL;
    if ( v3 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_12:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&NormalizationListLock, SessionId, 0LL);
    _enable();
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v4 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v4 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&NormalizationListLock, v4);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
