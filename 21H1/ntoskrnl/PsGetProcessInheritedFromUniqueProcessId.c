/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x14025A1F0
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406E8CD0 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
