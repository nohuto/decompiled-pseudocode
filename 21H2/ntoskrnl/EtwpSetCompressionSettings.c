/*
 * XREFs of EtwpSetCompressionSettings @ 0x1406356A0
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // edi
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // r14
  ULONG_PTR v6; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v10; // edx
  int v11; // r9d

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = v4 + 1144;
    ExAcquirePushLockExclusiveEx(v4 + 1144, 0LL);
    v5[294] = a1[1];
    v5[293] = a1[2];
    v5[295] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    CurrentThread = KeGetCurrentThread();
    if ( v6 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v10 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v6 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v10;
      p_Process += 96LL;
      if ( v10 >= 6 )
        goto LABEL_14;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_14:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
      _enable();
      goto LABEL_22;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v11 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v11 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v6, v11);
LABEL_22:
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
