/*
 * XREFs of SmpOpenTargetFile @ 0x140014A30
 * Callers:
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x14000EA88 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpForceDeleteTargetFile @ 0x1400143D4 (SmpForceDeleteTargetFile.c)
 *     SmpShuffleMove @ 0x140014F98 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x14001519C (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpOpenTargetFile(void **a1, ACCESS_MASK a2, struct _OBJECT_ATTRIBUTES *a3)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+68h] [rbp+20h] BYREF
  int v7; // [rsp+6Ch] [rbp+24h]

  result = NtOpenFile(a1, a2, a3, &IoStatusBlock, 3u, 0x204020u);
  if ( result >= 0 )
  {
    if ( NtQueryInformationFile(*a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation) < 0
      || (FileInformation & 0x400) == 0
      || (v7 & 0x20000000) != 0 )
    {
      return 0;
    }
    else
    {
      NtClose(*a1);
      *a1 = 0LL;
      return -1073741608;
    }
  }
  return result;
}
