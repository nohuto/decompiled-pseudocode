/*
 * XREFs of RtlAppendStringToString @ 0x14075B290
 * Callers:
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x1407B8738 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x14086E004 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
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
