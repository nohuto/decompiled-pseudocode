/*
 * XREFs of ExpMutantInitialization @ 0x140A6F2B0
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3935C (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCreateObjectType @ 0x14077DE10 (ObCreateObjectType.c)
 */

bool ExpMutantInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Mutant");
  memset(v2, 0, 0x78uLL);
  memset(&KeGetCurrentThread()->ApcState.Process->DirectoryTableBase, 0, (unsigned int)KdDumpEnableOffset);
  LOWORD(v2[0]) = 120;
  HIDWORD(v2[0]) = 64;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 56;
  *(_OWORD *)((char *)&v2[1] + 4) = ExpMutantMapping;
  HIDWORD(v2[3]) = 2031617;
  v2[9] = ExpDeleteMutant;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExMutantObjectType) >= 0;
}
