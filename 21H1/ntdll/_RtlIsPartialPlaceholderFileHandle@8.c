/*
 * XREFs of _RtlIsPartialPlaceholderFileHandle@8 @ 0x4B3667B0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileHandle(HANDLE FileHandle, PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+0h] [ebp-10h] BYREF
  int FileInformation; // [esp+8h] [ebp-8h] BYREF

  v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *IsPartialPlaceholder = (FileInformation & 0x440000) != 0;
    return 0;
  }
  else if ( v2 == -1073741811 )
  {
    v3 = 0;
    *IsPartialPlaceholder = 0;
  }
  return v3;
}
