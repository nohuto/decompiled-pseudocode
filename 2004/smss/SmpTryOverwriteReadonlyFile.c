/*
 * XREFs of SmpTryOverwriteReadonlyFile @ 0x1400152FC
 * Callers:
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpOpenTargetFile @ 0x140014B90 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140014C9C (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140015088 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpTryOverwriteReadonlyFile(struct _UNICODE_STRING *a1, void *a2)
{
  int v4; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+28h] [rbp-21h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+58h] [rbp+Fh] BYREF

  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v4 >= 0 )
  {
    if ( (FileInformation.FileAttributes & 0x10) != 0 )
    {
      v4 = -1073741638;
    }
    else if ( (FileInformation.FileAttributes & 1) != 0 )
    {
      v4 = SmpOpenTargetFile(&Handle, 0x100100u, &ObjectAttributes);
      if ( v4 >= 0 )
      {
        v4 = SmpSetTargetAttributes(Handle, FileInformation.FileAttributes & 0xFFFFFFFE);
        if ( v4 >= 0 )
        {
          NtClose(Handle);
          Handle = 0LL;
          v4 = SmpRenameTargetFile((const void **)a1, a2, 1);
          if ( v4 < 0 )
          {
            if ( SmpOpenTargetFile(&Handle, 0x110100u, &ObjectAttributes) >= 0 )
              SmpSetTargetAttributes(Handle, FileInformation.FileAttributes);
          }
          else
          {
            v4 = 0;
          }
        }
      }
    }
    else
    {
      v4 = -1073741823;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v4;
}
