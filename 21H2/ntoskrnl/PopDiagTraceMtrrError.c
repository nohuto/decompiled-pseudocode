/*
 * XREFs of PopDiagTraceMtrrError @ 0x140A6BC20
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void PopDiagTraceMtrrError()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_MTRR_CHANGED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_140C227EC;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_MTRR_CHANGED, 0LL, 1u, &UserData);
    }
  }
}
