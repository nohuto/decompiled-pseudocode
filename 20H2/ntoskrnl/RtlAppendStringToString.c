/*
 * XREFs of RtlAppendStringToString @ 0x140769B80
 * Callers:
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x1407C6FC8 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140873AF0 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)v4 + Length <= (unsigned int)Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
