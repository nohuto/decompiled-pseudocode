/*
 * XREFs of PopDiagTraceSystemLatencyUpdate @ 0x14026FC1C
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14026FA58 (PoFxSendSystemLatencyUpdate.c)
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemLatencyUpdate(char a1, int a2)
{
  REGHANDLE v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rdx
  const EVENT_DESCRIPTOR *v5; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
      if ( !a1 )
        v5 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
      EtwWriteEx(v3, v5, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
