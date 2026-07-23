/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x180042A50
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180085390 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     EtwNotificationRegister @ 0x180043080 (EtwNotificationRegister.c)
 *     EtwpCreateRegGuidsContext @ 0x180043BD4 (EtwpCreateRegGuidsContext.c)
 *     RtlSetLastWin32Error @ 0x1800507C0 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        int a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  GUID v9; // xmm0
  void *RegGuidsContext; // rsi
  unsigned __int32 LastErrorValue; // ebx
  ULONGLONG RegHandle; // [rsp+30h] [rbp-38h] BYREF
  GUID Guid; // [rsp+38h] [rbp-30h] BYREF

  if ( !Callback || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
LABEL_10:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  v9 = *a3;
  *a8 = 0LL;
  Guid = v9;
  RegGuidsContext = (void *)EtwpCreateRegGuidsContext((_DWORD)Callback, a2, (unsigned int)&Guid, a4, a5);
  if ( RegGuidsContext )
  {
    LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, RegGuidsContext, &RegHandle);
    if ( LastErrorValue )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
    else
      *a8 = RegHandle;
  }
  else
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
  }
  if ( LastErrorValue )
    goto LABEL_10;
  return LastErrorValue;
}
