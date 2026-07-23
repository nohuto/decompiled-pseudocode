/*
 * XREFs of _LdrpResFileSize@8 @ 0x4B34303A
 * Callers:
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __fastcall LdrpResFileSize(HANDLE FileHandle, _DWORD *StackCookie)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  NTSTATUS v7; // edi
  _DWORD *StackCookiea; // [esp+Ch] [ebp-3Ch]
  uintptr_t StackCookie_4; // [esp+10h] [ebp-38h] BYREF
  unsigned __int16 v11[2]; // [esp+18h] [ebp-30h] BYREF
  const wchar_t *v12; // [esp+1Ch] [ebp-2Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-28h] BYREF
  _BYTE FileInformation[8]; // [esp+28h] [ebp-20h] BYREF
  int v15; // [esp+30h] [ebp-18h]
  int v16; // [esp+34h] [ebp-14h]

  StackCookiea = StackCookie;
  LODWORD(StackCookie_4) = 3145774;
  HIDWORD(StackCookie_4) = L"LdrResGetRCConfig Enter";
  v11[0] = 44;
  v11[1] = 46;
  v12 = L"LdrResGetRCConfig Exit";
  v3 = 2147353477;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v4 = 2147353477;
  v5 = 2147353476;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v6 = 2147353476;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&StackCookie_4, (void *)*(unsigned __int8 *)v6);
  }
  if ( StackCookiea && FileHandle && FileHandle != (HANDLE)-1 )
  {
    v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    if ( v7 < 0 )
      return v7;
    *StackCookiea = v15;
    StackCookiea[1] = v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v11, (void *)*(unsigned __int8 *)v5);
  }
  return v7;
}
