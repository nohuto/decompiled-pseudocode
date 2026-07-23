/*
 * XREFs of _RtlGetFullPathName_U@16 @ 0x4B2ECAC0
 * Callers:
 *     _RtlDosSearchPath_U@24 @ 0x4B32D140 (_RtlDosSearchPath_U@24.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlGetFullPathName_UEx@20 @ 0x4B2D22F0 (_RtlGetFullPathName_UEx@20.c)
 */

ULONG __cdecl RtlGetFullPathName_U(PCWSTR FileName, ULONG BufferLength, PWSTR Buffer, PWSTR *FilePart)
{
  ULONG BytesRequired; // [esp+0h] [ebp-4h] BYREF

  if ( RtlGetFullPathName_UEx(FileName, BufferLength, Buffer, FilePart, &BytesRequired) < 0 )
    return 0;
  else
    return BytesRequired;
}
