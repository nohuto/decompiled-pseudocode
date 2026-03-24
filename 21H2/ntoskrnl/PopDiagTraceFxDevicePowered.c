/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x1402626D8
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140262744 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140260CB4 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v2 = a1;
  PopFxAddLogEntry(a1, 0, 7, 0LL);
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWriteEx(v1, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
}
