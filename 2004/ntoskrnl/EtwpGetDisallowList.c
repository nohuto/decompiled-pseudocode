/*
 * XREFs of EtwpGetDisallowList @ 0x140931078
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetDisallowList(__int64 a1, unsigned __int16 *a2, void *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v8; // rbp
  unsigned int v9; // esi

  v5 = *a4;
  v6 = 0;
  v8 = EtwpAcquireLoggerContextByLoggerId(a1, *a2, 0);
  if ( v8 )
  {
    memset(a3, 0, *a4);
    ExAcquirePushLockSharedEx(v8 + 704, 0LL);
    v9 = 16 * *(unsigned __int16 *)(v8 + 1048);
    if ( v9 > v5 )
      v6 = -1073741789;
    else
      memmove(a3, *(const void **)(v8 + 1056), v9);
    *a4 = v9;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 704), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 704));
    KeAbPostRelease(v8 + 704);
    EtwpReleaseLoggerContext((unsigned int *)v8, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
