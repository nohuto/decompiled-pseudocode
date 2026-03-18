/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x1402373C0
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x14023742C (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140236C6C (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
