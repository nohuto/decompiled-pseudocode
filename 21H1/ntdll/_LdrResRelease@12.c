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

NTSTATUS __stdcall LdrResRelease(PVOID InitModule, PCWSTR SourceString, ULONG Flags)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  unsigned int v10; // edi
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-3Ch] BYREF
  unsigned __int16 v12[2]; // [esp+18h] [ebp-34h] BYREF
  const wchar_t *v13; // [esp+1Ch] [ebp-30h]
  unsigned __int16 v14[2]; // [esp+20h] [ebp-2Ch] BYREF
  const wchar_t *v15; // [esp+24h] [ebp-28h]
  DWORD Lcid; // [esp+2Ch] [ebp-20h] BYREF
  PVOID BaseModule; // [esp+30h] [ebp-1Ch] BYREF
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
    LdrpTraceLoadMUIDll(v14, (void *)*(unsigned __int8 *)v6);
  }
  else
  {
    v5 = 2147353476;
  }
  if ( !InitModule )
    return -1073741811;
  BaseModule = 0;
  if ( (Flags & 0x8800) == 0x8800 )
    return 0;
  if ( (unsigned int)SourceString < 0x10000 )
  {
    Lcid = (unsigned __int16)SourceString;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        ms_exc.registration.TryLevel = -2;
        return -1073741811;
      }
    }
    else
    {
      Lcid = 0;
    }
    ms_exc.registration.TryLevel = -2;
    Lcid = (unsigned __int16)Lcid;
  }
  v15 = (const wchar_t *)(Flags & 0xC00);
  if ( (Flags & 0xC00) != 0 )
  {
    v8 = LdrRemoveLoadAsDataTable(InitModule, &BaseModule, 0, Flags);
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
    BaseModule = InitModule;
  }
  v10 = (unsigned int)BaseModule;
  LdrUnloadAlternateResourceModuleEx(BaseModule, Lcid);
  if ( v15 && v10 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, (PVOID)(v10 & 0xFFFFFFFC));
LABEL_30:
  v9 = 0;
LABEL_31:
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v12, (void *)*(unsigned __int8 *)v5);
  }
  return v9;
}
