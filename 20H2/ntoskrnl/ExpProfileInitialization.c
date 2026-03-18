/*
 * XREFs of ExpProfileInitialization @ 0x140A75D34
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3F33C (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectType @ 0x14078B3B0 (ObCreateObjectType.c)
 */

bool __fastcall ExpProfileInitialization(__int64 a1, __int64 a2, __int64 a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  LOBYTE(a3) = 1;
  DestinationString = 0LL;
  KiInitializeMutant((ULONG_PTR)&ExpProfileStateMutex, 0, a3, 0LL);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v5, 0, 0x78uLL);
  LOWORD(v5[0]) = 120;
  LODWORD(v5[1]) = 256;
  HIDWORD(v5[4]) = 512;
  HIDWORD(v5[5]) = 240;
  HIDWORD(v5[3]) = 983041;
  *(_OWORD *)((char *)&v5[1] + 4) = ExpProfileMapping;
  v5[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
