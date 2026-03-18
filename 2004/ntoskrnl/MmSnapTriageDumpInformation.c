/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1405337E4
 * Callers:
 *     IoWriteCrashDump @ 0x1404FD880 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1404FF7BC (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402E6B08 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x140532D9C (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C2A11C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C51B80;
  dword_140C2A108 = dword_140C4E5D4;
  dword_140C2A10C = dword_140C4E5D0;
  dword_140C2A110 = dword_140C4E5D8;
  dword_140C2A114 = dword_140C4E5DC;
  dword_140C2A118 = dword_140C4E5C8;
  qword_140C2A120 = KeFeatureBits;
  xmmword_140C2A128 = 0LL;
  LODWORD(xmmword_140C2A128) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C2A128) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C2A128 + 1);
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
