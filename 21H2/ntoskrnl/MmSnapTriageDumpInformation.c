/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140538EF4
 * Callers:
 *     IoWriteCrashDump @ 0x140502C50 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140504B8C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x1405384AC (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C2A3BC = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C51DC0;
  dword_140C2A3A8 = dword_140C4E814;
  dword_140C2A3AC = dword_140C4E810;
  dword_140C2A3B0 = dword_140C4E818;
  dword_140C2A3B4 = dword_140C4E81C;
  dword_140C2A3B8 = dword_140C4E808;
  qword_140C2A3C0 = KeFeatureBits;
  xmmword_140C2A3C8 = 0LL;
  LODWORD(xmmword_140C2A3C8) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C2A3C8) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C2A3C8 + 1);
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
