/*
 * XREFs of EtwpCompressionProc @ 0x140634F90
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x140634D24 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406355B0 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax
  unsigned __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v9; // edx
  int v10; // r8d

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 284, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 284, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[292];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    v5 = (unsigned __int64)(a1 + 286);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 286), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 143, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 286);
    CurrentThread = KeGetCurrentThread();
    if ( v5 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v9 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v5 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v9;
      p_Process += 96LL;
      if ( v9 >= 6 )
        goto LABEL_18;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_18:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)(a1 + 286), SessionId, 0LL);
      _enable();
      goto LABEL_26;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v10 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v10 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)(a1 + 286), v10);
  }
LABEL_26:
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}
