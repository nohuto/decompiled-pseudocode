/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140533194
 * Callers:
 *     IoWriteCrashDump @ 0x1404FD230 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1404FF16C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x14053274C (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C2A33C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C51C80;
  dword_140C2A328 = dword_140C4E714;
  dword_140C2A32C = dword_140C4E710;
  dword_140C2A330 = dword_140C4E718;
  dword_140C2A334 = dword_140C4E71C;
  dword_140C2A338 = dword_140C4E708;
  qword_140C2A340 = KeFeatureBits;
  xmmword_140C2A348 = 0LL;
  LODWORD(xmmword_140C2A348) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C2A348) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C2A348 + 1);
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
