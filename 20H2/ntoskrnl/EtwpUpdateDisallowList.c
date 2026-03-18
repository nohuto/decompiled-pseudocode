/*
 * XREFs of EtwpUpdateDisallowList @ 0x140936C10
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x1407ABE40 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateDisallowedGuids @ 0x140943E6C (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rdi
  unsigned int updated; // ebx

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = v6;
  if ( v6 )
  {
    updated = EtwpUpdateDisallowedGuids(v6, a3, a4);
    EtwpReleaseLoggerContext(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return updated;
}
