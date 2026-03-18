/*
 * XREFs of EtwpGetCompressionSettings @ 0x1405AB994
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
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
    v8 = (signed __int64 *)(v6 + 1128);
    ExAcquirePushLockSharedEx(v6 + 1128, 0LL);
    a2[1] = v7[290];
    a2[2] = v7[289];
    a2[3] = v7[291];
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
