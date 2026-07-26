/*
 * XREFs of ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x1C0145398
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145088 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 ndisIfCompartmentStateSubsystemInitialize(void)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-39h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0xCu;
  v2[9] = ndisCmDeleteStateObject;
  LOWORD(v2[0]) = 120;
  HIDWORD(v2[3]) = 983103;
  HIDWORD(v2[4]) = 512;
  LODWORD(v2[5]) = 16;
  RtlInitUnicodeString(&DestinationString, L"NdisCmState");
  return ((__int64 (__fastcall *)(_UNICODE_STRING *, _QWORD *, _QWORD, __int64 *))ObCreateObjectType)(
           &DestinationString,
           v2,
           0LL,
           &qword_1C00E60E0);
}
