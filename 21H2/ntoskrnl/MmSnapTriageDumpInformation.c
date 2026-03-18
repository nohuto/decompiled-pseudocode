/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140593778
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x1405540DC (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405554B0 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x140592BEC (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C297DC = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C56900;
  dword_140C297C8 = dword_140C52AE8;
  dword_140C297CC = dword_140C52AE4;
  dword_140C297D0 = dword_140C52B10;
  dword_140C297D4 = dword_140C52B14;
  qword_140C297E0 = KeFeatureBits;
  xmmword_140C297E8 = 0LL;
  dword_140C297D8 = dword_140C52AC4 + dword_140C52AC8 + dword_140C52ACC;
  LODWORD(xmmword_140C297E8) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C297E8) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C297E8 + 1);
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
