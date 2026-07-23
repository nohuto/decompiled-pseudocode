/*
 * XREFs of _LdrpResSetFilePointer@8 @ 0x4B343B27
 * Callers:
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 */

NTSTATUS __fastcall LdrpResSetFilePointer(HANDLE FileHandle, int a2)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+0h] [ebp-10h] BYREF
  _DWORD FileInformation[2]; // [esp+8h] [ebp-8h] BYREF

  if ( !FileHandle || FileHandle == (HANDLE)-1 )
    return -1073741816;
  FileInformation[1] = 0;
  FileInformation[0] = a2;
  return ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 8u, FilePositionInformation);
}
