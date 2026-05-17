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

int __fastcall LdrpResFileSize(int a1, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int InformationFile; // edi
  unsigned __int16 v10[2]; // [esp+10h] [ebp-38h] BYREF
  const wchar_t *v11; // [esp+14h] [ebp-34h]
  unsigned __int16 v12[2]; // [esp+18h] [ebp-30h] BYREF
  const wchar_t *v13; // [esp+1Ch] [ebp-2Ch]
  _BYTE v14[8]; // [esp+20h] [ebp-28h] BYREF
  _BYTE v15[8]; // [esp+28h] [ebp-20h] BYREF
  int v16; // [esp+30h] [ebp-18h]
  int v17; // [esp+34h] [ebp-14h]

  v10[1] = 48;
  v10[0] = 46;
  v11 = L"LdrResGetRCConfig Enter";
  v12[0] = 44;
  v12[1] = 46;
  v13 = L"LdrResGetRCConfig Exit";
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
    LdrpTraceLoadMUIDll(v10, *(unsigned __int8 *)v6);
  }
  if ( a2 && a1 && a1 != -1 )
  {
    InformationFile = ZwQueryInformationFile(a1, (int)v14, (int)v15, 24, 5);
    if ( InformationFile < 0 )
      return InformationFile;
    *a2 = v16;
    a2[1] = v17;
  }
  else
  {
    InformationFile = -1073741811;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v12, *(unsigned __int8 *)v5);
  }
  return InformationFile;
}
