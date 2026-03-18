/*
 * XREFs of WinSqmEventWrite @ 0x1C00B8C30
 * Callers:
 *     WinSqmEndSession @ 0x1C0071CF4 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0072028 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C00B8AC8 (WinSqmStartSession.c)
 *     WinSqmAddToStream @ 0x1C013C510 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C013C700 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C013CA48 (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WinSqmEventWrite(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = 1359;
  if ( RegHandle )
    return EtwWrite(RegHandle, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
