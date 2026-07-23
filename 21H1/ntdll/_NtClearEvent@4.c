/*
 * XREFs of _NtClearEvent@4 @ 0x4B2F2D60
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtClearEvent(HANDLE EventHandle)
{
  return Wow64SystemServiceCall();
}
