/*
 * XREFs of ExpProfileInitialization @ 0x140A73CB4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  KiInitializeMutant((ULONG_PTR)&ExpProfileStateMutex, 0, 1, 0);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 240;
  HIDWORD(v2[3]) = 983041;
  *(_OWORD *)((char *)&v2[1] + 4) = ExpProfileMapping;
  v2[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
