/*
 * XREFs of _NtFreezeRegistry@4 @ 0x4B2F3860
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  return Wow64SystemServiceCall();
}
