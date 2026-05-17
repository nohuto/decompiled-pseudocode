/*
 * XREFs of _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF
 * Callers:
 *     _RtlpGetCustomCultureData@16 @ 0x4B3631F6 (_RtlpGetCustomCultureData@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 *     _RtlStringCchCatW@12 @ 0x4B352F81 (_RtlStringCchCatW@12.c)
 *     _RtlpGetFileSize@8 @ 0x4B36330F (_RtlpGetFileSize@8.c)
 */

int __fastcall RtlpOpenAndMapCustomCultureFile(int a1, _DWORD *a2, _DWORD *a3)
{
  NTSTATUS Section; // esi
  HANDLE v7; // [esp-4h] [ebp-268h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+10h] [ebp-254h] BYREF
  UNICODE_STRING DestinationString; // [esp+18h] [ebp-24Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-244h] BYREF
  _DWORD v11[3]; // [esp+38h] [ebp-22Ch] BYREF
  int v12; // [esp+44h] [ebp-220h] BYREF
  HANDLE Handle; // [esp+48h] [ebp-21Ch] BYREF
  HANDLE FileHandle; // [esp+4Ch] [ebp-218h] BYREF
  WCHAR SourceString[262]; // [esp+50h] [ebp-214h] BYREF

  if ( RtlStringCchCopyW(SourceString, 256, (int)L"\\SystemRoot\\Globalization\\") < 0
    || RtlStringCchCatW(SourceString, 256, a1) < 0
    || RtlStringCchCatW(SourceString, 256, (int)L".nlp") < 0 )
  {
    return -1073741823;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  Section = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( Section >= 0 )
  {
    if ( RtlpGetFileSize((int)FileHandle, v11) < 0 || v11[1] )
    {
      Section = -1073741823;
    }
    else
    {
      v7 = FileHandle;
      *a3 = v11[0];
      Section = NtCreateSection((int)&Handle, 983045, 0, 0, 2, 0x8000000, (int)v7);
      if ( Section >= 0 )
      {
        *a2 = 0;
        v12 = 0;
        Section = ZwMapViewOfSection((int)Handle, -1, (int)a2, 0, 0, 0, (int)&v12, 1, 0, 2);
        NtClose(Handle);
      }
    }
    NtClose(FileHandle);
  }
  return Section;
}
