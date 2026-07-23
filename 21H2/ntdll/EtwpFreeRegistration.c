/*
 * XREFs of EtwpFreeRegistration @ 0x1800515F8
 * Callers:
 *     EtwNotificationRegister @ 0x180043040 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x1800514F0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A1210 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  memset((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1, v2, v3);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
