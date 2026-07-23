/*
 * XREFs of _RtlpQueryDiskSpacePolicyByHandle@8 @ 0x4B389D13
 * Callers:
 *     _RtlpQueryDiskSpacePolicy@8 @ 0x4B389C18 (_RtlpQueryDiskSpacePolicy@8.c)
 * Callees:
 *     _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10 (_NtQueryVolumeInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 */

int __fastcall RtlpQueryDiskSpacePolicyByHandle(HANDLE FileHandle, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  int v4; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+8h] [ebp-30h] BYREF
  _QWORD FsInformation[3]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v8; // [esp+28h] [ebp-10h]
  unsigned int v9; // [esp+2Ch] [ebp-Ch]

  LODWORD(v3) = NtQueryVolumeInformationFile(
                  FileHandle,
                  &IoStatusBlock,
                  FsInformation,
                  0x20u,
                  FileFsFullSizeInformation);
  if ( (v3 & 0x80000000) == 0LL )
  {
    v3 = v8 * (unsigned __int64)v9 * FsInformation[0];
    v4 = v8 * v9 * LODWORD(FsInformation[0]);
    LODWORD(v3) = 0;
    if ( HIDWORD(v3) > 2 || HIDWORD(v3) >= 2 && v4 )
    {
      if ( HIDWORD(v3) > 8 || HIDWORD(v3) >= 8 && v4 )
      {
        if ( HIDWORD(v3) > 0x20 || HIDWORD(v3) >= 0x20 && v4 )
          *a2 = 20;
        else
          *a2 = 15;
      }
      else
      {
        *a2 = 10;
      }
    }
    else
    {
      *a2 = 5;
    }
  }
  return v3;
}
