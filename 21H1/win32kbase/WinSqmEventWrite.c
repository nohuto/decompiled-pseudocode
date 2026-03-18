/*
 * XREFs of WinSqmEventWrite @ 0x1C004B250
 * Callers:
 *     WinSqmStartSession @ 0x1C004B0E8 (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C005437C (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00546A8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C0144BB0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C0144DA0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C01450E8 (WinSqmSetString.c)
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
  if ( qword_1C0252818 )
    return EtwWrite(qword_1C0252818, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
