/*
 * XREFs of _LdrpIsReparsePoint@4 @ 0x4B2A87A0
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrFindEntryForAddress@8 @ 0x4B2CF200 (_LdrFindEntryForAddress@8.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

unsigned int __thiscall LdrpIsReparsePoint(PVOID DllHandle)
{
  unsigned int v1; // edi
  const WCHAR *Buffer; // eax
  wchar_t *v3; // esi
  HANDLE ContainingDirectory; // ecx
  PLDR_DATA_TABLE_ENTRY Entry; // [esp+Ch] [ebp-7Ch] BYREF
  _UNICODE_STRING NtFileName; // [esp+10h] [ebp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-70h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [esp+30h] [ebp-58h] BYREF
  PCWSTR v10[6]; // [esp+40h] [ebp-48h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [esp+58h] [ebp-30h] BYREF

  Entry = 0;
  memset(v10, 0, sizeof(v10));
  v1 = -1073741823;
  if ( ((unsigned __int8)DllHandle & 3) != 0 )
  {
    if ( LdrpGetLoadAsEntry((_BYTE)DllHandle, v10) < 0 )
      return v1;
    Buffer = v10[1];
  }
  else
  {
    if ( LdrFindEntryForAddress(DllHandle, &Entry) < 0 )
      return v1;
    Buffer = (const WCHAR *)Entry->FullDllName.Buffer;
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(Buffer, &NtFileName, 0, &RelativeName) )
  {
    v3 = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0;
    }
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.RootDirectory = v3 != 0 ? ContainingDirectory : 0;
    ObjectAttributes.ObjectName = &NtFileName;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0 )
      v1 = (FileInformation.FileAttributes & 0x400) == 0 ? 0xC0000001 : 0;
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v1;
}
