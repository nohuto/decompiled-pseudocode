/*
 * XREFs of RtlGetFullPathName_UEx @ 0x18001D800
 * Callers:
 *     RtlGetFileMUIPath @ 0x180046930 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x1800813D0 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x180088EA0 (RtlDosSearchPath_U.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UEx(
        PCWSTR FileName,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart,
        ULONG *BytesRequired)
{
  ULONG *v5; // rbx
  NTSTATUS result; // eax
  ULONG FullPathName_Ustr; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, FileName);
  if ( result >= 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &DestinationString.Length,
                          BufferLength,
                          Buffer,
                          FilePart,
                          0LL,
                          (__int64)&BytesRequired);
    if ( FullPathName_Ustr )
    {
      if ( v5 )
        *v5 = FullPathName_Ustr;
      return 0;
    }
    else
    {
      return -1073741773;
    }
  }
  return result;
}
