/*
 * XREFs of _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E
 * Callers:
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(_UNICODE_STRING *a1, char a2)
{
  char v2; // bl
  void *v3; // eax
  NTSTATUS v4; // eax
  HANDLE *v5; // edi
  int v6; // esi
  _UNICODE_STRING Destination; // [esp+14h] [ebp-64h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-5Ch]
  _UNICODE_STRING v11; // [esp+20h] [ebp-58h] BYREF
  void *v12; // [esp+28h] [ebp-50h]
  PVOID v13; // [esp+2Ch] [ebp-4Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-48h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [esp+48h] [ebp-30h] BYREF

  v2 = 0;
  if ( RtlpDosPathNameToRelativeNtPathName(2, a1, 0, &Destination, 0, 0, &v11) < 0 )
    return 0;
  BaseAddress = Destination.Buffer;
  if ( v11.Length )
  {
    Destination = v11;
    v3 = v12;
  }
  else
  {
    v3 = 0;
  }
  ObjectAttributes.RootDirectory = v3;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v4 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  v5 = (HANDLE *)v13;
  v6 = v4;
  if ( v13 && !_InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) )
  {
    NtClose(v5[1]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741757 || v6 == -1073741790 )
    return a2 != 0;
  return v2;
}
