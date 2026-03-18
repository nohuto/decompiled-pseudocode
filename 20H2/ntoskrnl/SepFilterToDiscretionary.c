/*
 * XREFs of SepFilterToDiscretionary @ 0x14022AA44
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepFilterToDiscretionary(_DWORD *a1, int a2)
{
  return (a2 & 0xFDFFFFFF) != (a2 & 0xFDFFFFFF & *a1) ? 0xC0000022 : 0;
}
