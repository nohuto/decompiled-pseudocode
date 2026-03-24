/*
 * XREFs of PopDiagTraceAbnormalReset @ 0x140570AD4
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAbnormalReset(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ABNORMAL_RESET) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWriteEx(v1, &POP_ETW_EVENT_ABNORMAL_RESET, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
