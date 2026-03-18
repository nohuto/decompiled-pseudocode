/*
 * XREFs of ExpEventInitialization @ 0x140A76620
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3F33C (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObCreateObjectType @ 0x14078B3B0 (ObCreateObjectType.c)
 */

bool ExpEventInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v2[32]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Event");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  v2[1] = 16;
  v2[2] = 256;
  v2[9] = 512;
  *(_OWORD *)&v2[3] = ExpEventMapping;
  v2[11] = 24;
  v2[7] = 2031619;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExEventObjectType) >= 0;
}
