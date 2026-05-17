/*
 * XREFs of _LdrResRelease@12 @ 0x4B342E00
 * Callers:
 *     <none>
 * Callees:
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __stdcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edi
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-3Ch] BYREF
  unsigned __int16 v12[2]; // [esp+18h] [ebp-34h] BYREF
  const wchar_t *v13; // [esp+1Ch] [ebp-30h]
  unsigned __int16 v14[2]; // [esp+20h] [ebp-2Ch] BYREF
  const wchar_t *v15; // [esp+24h] [ebp-28h]
  int v16; // [esp+2Ch] [ebp-20h] BYREF
  int v17; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v14[0] = 38;
  v14[1] = 40;
  v15 = L"LdrResRelease Enter";
  v12[0] = 36;
  v12[1] = 38;
  v13 = L"LdrResRelease Exit";
  v3 = 2147353477;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v4 = 2147353477;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    v5 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v6 = 2147353476;
    LdrpTraceLoadMUIDll(v14, *(unsigned __int8 *)v6);
  }
  else
  {
    v5 = 2147353476;
  }
  if ( !String2 )
    return -1073741811;
  v17 = 0;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0;
  if ( (unsigned int)SourceString < 0x10000 )
  {
    v16 = (unsigned __int16)SourceString;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v16) )
      {
        ms_exc.registration.TryLevel = -2;
        return -1073741811;
      }
    }
    else
    {
      v16 = 0;
    }
    ms_exc.registration.TryLevel = -2;
    v16 = (unsigned __int16)v16;
  }
  v15 = (const wchar_t *)(a3 & 0xC00);
  if ( (a3 & 0xC00) != 0 )
  {
    v8 = LdrRemoveLoadAsDataTable(String2, (wchar_t **)&v17, 0, a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -1073740024 && v8 != -1073741511 )
        goto LABEL_31;
      goto LABEL_30;
    }
  }
  else
  {
    v17 = (int)String2;
  }
  v10 = v17;
  LdrUnloadAlternateResourceModuleEx(v17, v16);
  if ( v15 && v10 )
    NtUnmapViewOfSection(-1, v10 & 0xFFFFFFFC);
LABEL_30:
  v9 = 0;
LABEL_31:
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v12, *(unsigned __int8 *)v5);
  }
  return v9;
}
