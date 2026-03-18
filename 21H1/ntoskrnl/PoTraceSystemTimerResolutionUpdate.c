/*
 * XREFs of PoTraceSystemTimerResolutionUpdate @ 0x140202B8C
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140202A40 (ExpUpdateTimerResolution.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

BOOLEAN PoTraceSystemTimerResolutionUpdate()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = KeTimeIncrement;
  v2 = KeTimeIncrement;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      return EtwWriteEx(v1, &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
