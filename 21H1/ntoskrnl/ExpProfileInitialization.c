/*
 * XREFs of ExpProfileInitialization @ 0x140A6EE14
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A394EC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 */

bool __fastcall ExpProfileInitialization(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v6[16]; // [rsp+30h] [rbp-29h] BYREF

  LOBYTE(a3) = 1;
  DestinationString = 0LL;
  KiInitializeMutant((__int64)&ExpProfileStateMutex, 0LL, a3, a4);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v6, 0, 0x78uLL);
  LOWORD(v6[0]) = 120;
  LODWORD(v6[1]) = 256;
  HIDWORD(v6[4]) = 512;
  HIDWORD(v6[5]) = 240;
  HIDWORD(v6[3]) = 983041;
  *(_OWORD *)((char *)&v6[1] + 4) = ExpProfileMapping;
  v6[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v6, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
