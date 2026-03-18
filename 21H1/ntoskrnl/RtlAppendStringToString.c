/*
 * XREFs of RtlAppendStringToString @ 0x140759410
 * Callers:
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x1407B55C8 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x14086FFEC (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
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
