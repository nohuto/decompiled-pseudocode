/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140538CB4
 * Callers:
 *     IoWriteCrashDump @ 0x140502CD0 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140504C0C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140277468 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC828 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x14053826C (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C2A37C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C51D80;
  dword_140C2A368 = dword_140C4E7D4;
  dword_140C2A36C = dword_140C4E7D0;
  dword_140C2A370 = dword_140C4E7D8;
  dword_140C2A374 = dword_140C4E7DC;
  dword_140C2A378 = dword_140C4E7C8;
  qword_140C2A380 = KeFeatureBits;
  xmmword_140C2A388 = 0LL;
  LODWORD(xmmword_140C2A388) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C2A388) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C2A388 + 1);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = &IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*(unsigned __int16 *)v5 + a1));
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x38);
}
