/*
 * XREFs of EtwpUpdateDisallowList @ 0x140930DE0
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpUpdateDisallowedGuids @ 0x14093E0AC (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rdi
  unsigned int updated; // ebx

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = (unsigned int *)v6;
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
