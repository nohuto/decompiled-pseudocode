/*
 * XREFs of SepTokenInitialization @ 0x140A5F39C
 * Callers:
 *     SepInitializationPhase0 @ 0x140A5E210 (SepInitializationPhase0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403A5724 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCreateObjectType @ 0x14077DE10 (ObCreateObjectType.c)
 */

bool SepTokenInitialization()
{
  int v0; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Token");
  memset(v3, 0, 0x78uLL);
  BYTE2(v3[0]) |= 0xEu;
  LOWORD(v3[0]) = 120;
  HIDWORD(v3[0]) = 512;
  LODWORD(v3[1]) = 256;
  HIDWORD(v3[4]) = 1;
  HIDWORD(v3[3]) = 983551;
  *(_OWORD *)((char *)&v3[1] + 4) = SepTokenMapping;
  v3[9] = SepTokenDeleteMethod;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&SeTokenObjectType);
  if ( v0 >= 0 )
    v0 = SeRegisterObjectTypeMandatoryPolicy((__int64)SeTokenObjectType, 1);
  return v0 >= 0;
}
