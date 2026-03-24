/*
 * XREFs of ExpProfileInitialization @ 0x140A72CB4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3CEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObCreateObjectType @ 0x1407958D0 (ObCreateObjectType.c)
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
