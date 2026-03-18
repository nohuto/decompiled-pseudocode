/*
 * XREFs of WinSqmEventWrite @ 0x1C0058F70
 * Callers:
 *     WinSqmStartSession @ 0x1C0058E08 (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C0060F98 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00612C8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C013E860 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C013EA50 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C013ED98 (WinSqmSetString.c)
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
  if ( qword_1C024C800 )
    return EtwWrite(qword_1C024C800, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
