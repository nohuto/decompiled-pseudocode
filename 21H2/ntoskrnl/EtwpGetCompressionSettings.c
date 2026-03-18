/*
 * XREFs of EtwpGetCompressionSettings @ 0x140635440
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetCompressionSettings(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v6; // rax
  _DWORD *v7; // rsi
  signed __int64 *v8; // rdi

  v2 = *a1;
  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v2, 0LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *a2 = v2;
    v8 = (signed __int64 *)(v6 + 1144);
    ExAcquirePushLockSharedEx(v6 + 1144, 0LL);
    a2[1] = v7[294];
    a2[2] = v7[293];
    a2[3] = v7[295];
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    EtwpReleaseLoggerContext(v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
