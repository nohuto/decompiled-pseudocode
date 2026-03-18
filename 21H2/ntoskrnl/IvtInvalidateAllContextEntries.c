/*
 * XREFs of IvtInvalidateAllContextEntries @ 0x14052F1C8
 * Callers:
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IvtIommuSendCommand @ 0x14052F378 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x14052F618 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateAllContextEntries(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = 0LL;
  v4[0] = 17LL;
  IvtIommuSendCommand(a1, v4, 0LL);
  return IvtIommuWaitCommand(a1, v2, 0LL);
}
