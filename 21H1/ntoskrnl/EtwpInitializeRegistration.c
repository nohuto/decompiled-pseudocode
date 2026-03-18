/*
 * XREFs of EtwpInitializeRegistration @ 0x140A465E8
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 */

__int64 __fastcall EtwpInitializeRegistration(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v6[16]; // [rsp+30h] [rbp-29h] BYREF

  LOBYTE(a3) = 1;
  DestinationString = 0LL;
  KiInitializeMutant((__int64)&EtwpGlobalMutex, 0LL, a3, a4);
  EtwpReplyListLock = 0LL;
  qword_140C198F8 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v6, 0, 0x78uLL);
  BYTE2(v6[0]) |= 0x18u;
  v6[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v6[0]) = 120;
  v6[8] = EtwpCloseRegistrationObject;
  LODWORD(v6[1]) = 256;
  v6[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v6[1] + 4) = EtwpGenericMapping;
  HIDWORD(v6[3]) = 2052;
  HIDWORD(v6[4]) = 512;
  HIDWORD(v6[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v6, 0LL, (__int64)&EtwpRegistrationObjectType);
}
