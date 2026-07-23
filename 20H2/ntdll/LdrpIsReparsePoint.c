/*
 * XREFs of LdrpIsReparsePoint @ 0x180069FE4
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048F4C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpGetLoadAsEntry @ 0x18006A28C (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x18006A350 (LdrFindEntryForAddress.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009D850 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpIsReparsePoint(void *a1)
{
  unsigned int v1; // ebx
  wchar_t *Buffer; // rcx
  wchar_t *v3; // rdi
  unsigned __int64 ContainingDirectory; // rdx
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+28h] [rbp-79h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+30h] [rbp-71h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+40h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  PCWSTR DosFileName[2]; // [rsp+90h] [rbp-11h] BYREF
  __int128 v11; // [rsp+A0h] [rbp-1h]
  __int128 v12; // [rsp+B0h] [rbp+Fh]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+C0h] [rbp+1Fh] BYREF

  Entry = 0LL;
  v1 = -1073741823;
  *(_OWORD *)DosFileName = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, DosFileName) < 0 )
      return v1;
    Buffer = (wchar_t *)DosFileName[1];
  }
  else
  {
    if ( LdrFindEntryForAddress(a1, &Entry) < 0 )
      return v1;
    Buffer = Entry->FullDllName.Buffer;
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(Buffer, &NtFileName, 0LL, &RelativeName) )
  {
    v3 = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(v3 != 0LL));
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
      && (FileInformation.FileAttributes & 0x400) != 0 )
    {
      v1 = 0;
    }
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v1;
}
