/*
 * XREFs of PopDiagTraceFxDeviceDirectedTransition @ 0x1405725A4
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x14056AEE8 (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceDirectedTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  REGHANDLE v3; // rbx
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v5 = a1;
  PopFxAddLogEntry(a1, 0, 25, a2);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v4 = v2;
      v7 = &v4;
      UserData.Size = 8;
      v8 = 4;
      EtwWriteEx(v3, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
