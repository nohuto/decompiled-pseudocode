/*
 * XREFs of _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryKey@20 @ 0x4B2F2AC0 (_ZwQueryKey@20.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall LdrpCodeAuthzInitialize()
{
  int v0; // ebx
  WORD Subsystem; // ax
  unsigned int v2; // eax
  NTSTATUS v4; // esi
  NTSTATUS v5; // esi
  NTSTATUS v6; // esi
  PVOID v7; // esi
  SIZE_T v8; // [esp-4h] [ebp-134h]
  char v9; // [esp+Fh] [ebp-121h]
  HANDLE Handle; // [esp+10h] [ebp-120h] BYREF
  HANDLE v11; // [esp+14h] [ebp-11Ch] BYREF
  ULONG ResultLength; // [esp+18h] [ebp-118h] BYREF
  PVOID ProcedureAddress; // [esp+1Ch] [ebp-114h] BYREF
  _UNICODE_STRING Destination; // [esp+20h] [ebp-110h] BYREF
  HANDLE KeyHandle; // [esp+28h] [ebp-108h] BYREF
  PVOID DllHandle; // [esp+2Ch] [ebp-104h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+30h] [ebp-100h] BYREF
  ULONG v18; // [esp+34h] [ebp-FCh] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [esp+38h] [ebp-F8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+40h] [ebp-F0h] BYREF
  _BYTE KeyInformation[20]; // [esp+58h] [ebp-D8h] BYREF
  int v22; // [esp+6Ch] [ebp-C4h]
  _BYTE KeyValueInformation[4]; // [esp+88h] [ebp-A8h] BYREF
  int v24; // [esp+8Ch] [ebp-A4h]
  int v25; // [esp+90h] [ebp-A0h]
  unsigned int v26; // [esp+94h] [ebp-9Ch]
  _BYTE v27[4]; // [esp+D8h] [ebp-58h] BYREF
  int v28; // [esp+DCh] [ebp-54h]
  int v29; // [esp+E0h] [ebp-50h]
  int v30; // [esp+E4h] [ebp-4Ch]
  PVOID *retaddr; // [esp+134h] [ebp+4h]

  v0 = 0;
  DllHandle = 0;
  ProcedureAddress = 0;
  if ( LdrpIsSecureProcess )
    return 0;
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  Subsystem = OutHeaders->OptionalHeader.Subsystem;
  if ( Subsystem != 3 && Subsystem != 2 )
    return 0;
  if ( ZwOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&::ObjectAttributes) < 0
    || (v4 = ZwQueryValueKey(KeyHandle, (PUNICODE_STRING)&stru_4B281A88, KeyValuePartialInformation, v27, 0x50u, &v18),
        NtClose(KeyHandle),
        v4 < 0)
    || v28 != 4
    || v29 != 4
    || !v30 )
  {
    v9 = 0;
    v11 = 0;
    if ( ZwOpenKey(&v11, 0x20019u, &stru_4B3A33B0) >= 0 )
    {
      v5 = ZwQueryKey(v11, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
      NtClose(v11);
      if ( (v5 != -2147483643 ? v5 : 0) >= 0 )
      {
        if ( v22 )
          goto LABEL_26;
      }
    }
    if ( ZwOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_4B281398) >= 0 )
    {
      if ( ZwQueryValueKey(
             Handle,
             (PUNICODE_STRING)&stru_4B281390,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x50u,
             &ResultLength) >= 0
        && v24 == 4
        && v25 == 4
        && v26 > 1 )
      {
        v9 = 1;
        ZwQueryValueKey(
          Handle,
          (PUNICODE_STRING)&stru_4B281A80,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x50u,
          &ResultLength);
      }
      NtClose(Handle);
      if ( v9 )
        goto LABEL_26;
    }
    if ( RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
    {
      Destination.Length = 0;
      v2 = CurrentUserKeyPath.Length + 120;
      if ( v2 <= 0xFFFE )
      {
        LODWORD(v8) = (unsigned __int16)v2;
        Destination.MaximumLength = CurrentUserKeyPath.Length + 120;
        Destination.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v8);
        if ( Destination.Buffer )
        {
          if ( RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath) >= 0
            && RtlAppendUnicodeToString(
                 &Destination,
                 L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            ObjectAttributes.Length = 24;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0;
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.SecurityDescriptor = 0;
            ObjectAttributes.SecurityQualityOfService = 0;
            if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
            {
              v6 = ZwQueryValueKey(
                     Handle,
                     (PUNICODE_STRING)&stru_4B281390,
                     KeyValuePartialInformation,
                     KeyValueInformation,
                     0x50u,
                     &ResultLength);
              NtClose(Handle);
              if ( v6 >= 0 && v24 == 4 && v25 == 4 && v26 > 1 )
                v9 = 1;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
        }
      }
      RtlFreeAnsiString(&CurrentUserKeyPath);
      if ( v9 )
      {
LABEL_26:
        if ( LdrLoadDll(0, 0, (PUNICODE_STRING)&DllName, &DllHandle) >= 0 )
        {
          v7 = DllHandle;
          if ( LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&ProcedureName,
                 0,
                 &ProcedureAddress,
                 0,
                 retaddr) >= 0
            && ProcedureAddress )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR4__(
                                             (unsigned int)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                             MEMORY[0x7FFE0330] & 0x1F);
            LdrpAdvapi32DllHandle = (int)v7;
          }
          else
          {
            LdrUnloadDll(v7);
            return -1073741511;
          }
        }
        else
        {
          return -1073741515;
        }
      }
    }
  }
  return v0;
}
