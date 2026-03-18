/*
 * XREFs of PopDiagTraceConsoleDisplayState @ 0x14076D354
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceConsoleDisplayState(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CONSOLE_DISPLAY_STATE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(v1, &POP_ETW_EVENT_CONSOLE_DISPLAY_STATE, 0LL, 1u, &UserData);
    }
  }
}
