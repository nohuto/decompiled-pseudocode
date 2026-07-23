/*
 * XREFs of _LdrpGetNtPathFromDosPath@8 @ 0x4B2D204F
 * Callers:
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpMapDllRetry@4 @ 0x4B2DDF9E (_LdrpMapDllRetry@4.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall LdrpGetNtPathFromDosPath(_UNICODE_STRING *a1, int a2)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-54h] BYREF
  _UNICODE_STRING Destination; // [esp+24h] [ebp-3Ch] BYREF
  int v7; // [esp+2Ch] [ebp-34h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [esp+30h] [ebp-30h] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(1, a1, (unsigned __int16 *)a2, &Destination, (int)&v7, 0, 0);
  if ( result >= 0 )
  {
    if ( (_UNICODE_STRING *)v7 == &Destination )
    {
      if ( a2 + 8 != *(_DWORD *)(a2 + 4) )
        RtlDeleteBoundaryDescriptor(*(POBJECT_BOUNDARY_DESCRIPTOR *)(a2 + 4));
      *(_WORD *)(a2 + 8) = 0;
      *(_UNICODE_STRING *)a2 = Destination;
    }
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    v4 = 64;
    if ( !LdrpUseImpersonatedDeviceMap )
      v4 = 2112;
    ObjectAttributes.Attributes = v4;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
