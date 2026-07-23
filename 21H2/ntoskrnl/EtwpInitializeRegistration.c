/*
 * XREFs of EtwpInitializeRegistration @ 0x140A73644
 * Callers:
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRegistration()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  KiInitializeMutant((ULONG_PTR)&EtwpGlobalMutex, 0, 1, 0);
  EtwpReplyListLock = 0LL;
  qword_140C19948 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v2[0]) = 120;
  v2[8] = EtwpCloseRegistrationObject;
  LODWORD(v2[1]) = 256;
  v2[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = EtwpGenericMapping;
  HIDWORD(v2[3]) = 2052;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&EtwpRegistrationObjectType);
}
