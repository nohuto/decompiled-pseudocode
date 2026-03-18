/*
 * XREFs of PfSnLogHelper @ 0x1406B7F6C
 * Callers:
 *     PfSnLogStreamCreate @ 0x1406B7E04 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x14070137C (PfSnLogVolumeCreate.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x14025D0D0 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x14025D4A0 (PfSnTraceGetLogEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     PfSnFailProcessTrace @ 0x140722AE0 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
    }
    else
    {
      v5 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      ExReleaseRundownProtection_0(v7 + 45);
  }
  return v5;
}
