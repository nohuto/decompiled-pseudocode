/*
 * XREFs of LdrResRelease @ 0x180089F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006A7E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800738D0 (LdrRemoveLoadAsDataTable.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E19DC (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(PVOID InitModule, PCWSTR SourceString, ULONG Flags)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int32 v10; // edi
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-40h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+80h] [rbp+8h] BYREF
  PVOID DllHandle; // [rsp+98h] [rbp+20h] BYREF

  v14 = 2621478;
  v15 = L"LdrResRelease Enter";
  v16 = 2490404;
  v17 = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v14, *(unsigned __int8 *)v12);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !InitModule )
    return 3221225485LL;
  DllHandle = 0LL;
  if ( (Flags & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return 3221225485LL;
    }
    else
    {
      Lcid = 0;
    }
    LOWORD(SourceString) = Lcid;
  }
  if ( (Flags & 0xC00) != 0 )
  {
    v13 = LdrRemoveLoadAsDataTable(InitModule, &DllHandle, 0LL, Flags);
    v10 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073740024 && v13 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    DllHandle = InitModule;
  }
  v9 = (unsigned __int64)DllHandle;
  LdrUnloadAlternateResourceModuleEx(DllHandle, (unsigned __int16)SourceString);
  if ( (Flags & 0xC00) != 0 && v9 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(v9 & 0xFFFFFFFFFFFFFFFCuLL));
LABEL_11:
  v10 = 0;
LABEL_12:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v16, *(unsigned __int8 *)v8);
  }
  return v10;
}
