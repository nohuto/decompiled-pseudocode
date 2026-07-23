/*
 * XREFs of _NtCompactKeys@8 @ 0x4B2F3320
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  return Wow64SystemServiceCall();
}
