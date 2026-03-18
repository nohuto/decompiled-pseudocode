/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C0034C3C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 */

__int64 xxxApplyGlobalInputSettings()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 ProcessWindowStation; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 112LL) + 16LL);
  result = *(unsigned int *)(v0 + 480);
  if ( (result & 1) == 0 && *(_QWORD *)(v0 + 776) )
  {
    if ( v0 == gptiCurrent )
    {
      result = gspklGlobalActive;
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v6[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v6;
          v6[2] = 0LL;
          v6[1] = gspklGlobalActive;
          HMLockObject(gspklGlobalActive);
          ProcessWindowStation = GetProcessWindowStation(0LL);
          xxxInternalActivateKeyboardLayout(ProcessWindowStation, gspklGlobalActive, 0LL, 0LL);
          return ThreadUnlock1(v4, v3, v5);
        }
      }
    }
    else
    {
      return PostEventMessageEx((struct tagTHREADINFO *)v0, gpqForeground, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
