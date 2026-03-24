/*
 * XREFs of EtwpUpdateDisallowList @ 0x1409343E0
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x14079B594 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094163C (EtwpUpdateDisallowedGuids.c)
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
