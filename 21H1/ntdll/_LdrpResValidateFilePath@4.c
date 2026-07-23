/*
 * XREFs of _LdrpResValidateFilePath@4 @ 0x4B343BC4
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480 (_RtlDetermineDosPathNameType_U@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70 (_RtlDosPathNameToNtPathName_U@16.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __thiscall LdrpResValidateFilePath(const WCHAR *this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  NTSTATUS v5; // edi
  RTL_PATH_TYPE v6; // eax
  wchar_t *Buffer; // esi
  int v8; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+14h] [ebp-78h] BYREF
  _UNICODE_STRING NtFileName; // [esp+2Ch] [ebp-60h] BYREF
  unsigned __int16 v12[2]; // [esp+34h] [ebp-58h] BYREF
  const wchar_t *v13; // [esp+38h] [ebp-54h]
  unsigned __int16 v14[2]; // [esp+3Ch] [ebp-50h] BYREF
  const wchar_t *v15; // [esp+40h] [ebp-4Ch]
  _FILE_BASIC_INFORMATION FileInformation; // [esp+48h] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v14[0] = 58;
  v14[1] = 60;
  v15 = L"LdrpResValidateFilePath Enter";
  v12[0] = 56;
  v12[1] = 58;
  v13 = L"LdrpResValidateFilePath Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v2 = 2147353477;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    v3 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v4 = 2147353476;
    LdrpTraceLoadMUIDll(v14, (void *)*(unsigned __int8 *)v4);
  }
  else
  {
    v3 = 2147353476;
  }
  if ( this
    && ((ms_exc.registration.TryLevel = 0,
         v6 = RtlDetermineDosPathNameType_U(this),
         ms_exc.registration.TryLevel = -2,
         v6 == RtlPathTypeUncAbsolute)
     || v6 == RtlPathTypeDriveAbsolute
     || v6 == RtlPathTypeLocalDevice) )
  {
    if ( RtlDosPathNameToNtPathName_U(this, &NtFileName, 0, 0) )
    {
      Buffer = NtFileName.Buffer;
      ObjectAttributes.Length = 24;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = &NtFileName;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v5 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
      if ( v5 >= 0 )
        v5 = (FileInformation.FileAttributes & 0x10) != 0 ? 0xC000000D : 0;
    }
    else
    {
      v5 = -1073741766;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  v8 = 2147353477;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v12, (void *)*(unsigned __int8 *)v3);
  }
  return v5;
}
