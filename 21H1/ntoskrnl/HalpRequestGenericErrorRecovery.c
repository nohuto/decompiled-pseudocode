/*
 * XREFs of HalpRequestGenericErrorRecovery @ 0x1404CAE60
 * Callers:
 *     <none>
 * Callees:
 *     HalpGenericErrorSourceRecovery @ 0x1404CA938 (HalpGenericErrorSourceRecovery.c)
 */

__int64 __fastcall HalpRequestGenericErrorRecovery(__int64 a1, _DWORD *a2)
{
  return HalpGenericErrorSourceRecovery(a1, a2);
}
