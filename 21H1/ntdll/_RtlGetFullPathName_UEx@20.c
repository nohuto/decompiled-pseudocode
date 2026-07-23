/*
 * XREFs of _RtlGetFullPathName_UEx@20 @ 0x4B2D22F0
 * Callers:
 *     _RtlGetFullPathName_U@16 @ 0x4B2ECAC0 (_RtlGetFullPathName_U@16.c)
 * Callees:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UEx(
        PCWSTR FileName,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart,
        ULONG *BytesRequired)
{
  NTSTATUS result; // eax
  ULONG FullPathName_Ustr; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF

  if ( BytesRequired )
    *BytesRequired = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, FileName);
  if ( result >= 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &DestinationString.Length,
                          BufferLength,
                          (wchar_t *)Buffer,
                          FilePart,
                          0,
                          &v8);
    if ( FullPathName_Ustr )
    {
      if ( BytesRequired )
        *BytesRequired = FullPathName_Ustr;
      return 0;
    }
    else
    {
      return -1073741773;
    }
  }
  return result;
}
