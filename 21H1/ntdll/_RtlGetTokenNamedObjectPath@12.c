/*
 * XREFs of _RtlGetTokenNamedObjectPath@12 @ 0x4B3464D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return RtlpGetTokenNamedObjectPath(TokenHandle, 0, (_BYTE)Sid != 0, ObjectPath);
}
