/*
 * XREFs of RtlGetSessionProperties @ 0x14090F200
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

NTSTATUS __cdecl RtlGetSessionProperties(ULONG SessionId, PULONG SharedUserSessionId)
{
  NTSTATUS v2; // ebx

  if ( SessionId == -1 )
    return -1073741811;
  v2 = 0;
  if ( !SharedUserSessionId )
    return -1073741811;
  *SharedUserSessionId = 0;
  *SharedUserSessionId = *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 139) + 24LL) == SessionId;
  return v2;
}
