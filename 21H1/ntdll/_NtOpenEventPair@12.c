/*
 * XREFs of _NtOpenEventPair@12 @ 0x4B2F3B50
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtOpenEventPair(
        PHANDLE EventPairHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return Wow64SystemServiceCall();
}
