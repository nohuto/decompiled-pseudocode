/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1405371B4
 * Callers:
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14050308C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402E7528 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x14053676C (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C2A21C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C51C00;
  dword_140C2A208 = dword_140C4E654;
  dword_140C2A20C = dword_140C4E650;
  dword_140C2A210 = dword_140C4E658;
  dword_140C2A214 = dword_140C4E65C;
  dword_140C2A218 = dword_140C4E648;
  qword_140C2A220 = KeFeatureBits;
  xmmword_140C2A228 = 0LL;
  LODWORD(xmmword_140C2A228) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C2A228) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C2A228 + 1);
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
