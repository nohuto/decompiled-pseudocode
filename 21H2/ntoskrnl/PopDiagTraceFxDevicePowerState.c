/*
 * XREFs of PopDiagTraceFxDevicePowerState @ 0x14039FF3C
 * Callers:
 *     PopRequestCompletion @ 0x14037A450 (PopRequestCompletion.c)
 *     PoFxReportDevicePoweredOn @ 0x14039FDD0 (PoFxReportDevicePoweredOn.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowerState(__int64 a1, int a2)
{
  char v2; // bl
  REGHANDLE v3; // rdi
  char v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  char *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v5 = a1;
  PopFxAddLogEntry(a1, 0, 6, a2);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 8;
      v7 = &v4;
      v4 = v2 - 1;
      v8 = 1;
      EtwWriteEx(v3, &POP_ETW_EVENT_DEVICE_POWER_STATE, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
}
