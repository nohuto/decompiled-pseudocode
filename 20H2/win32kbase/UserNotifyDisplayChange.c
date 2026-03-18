/*
 * XREFs of UserNotifyDisplayChange @ 0x1C0016570
 * Callers:
 *     DrvEnableMDEV @ 0x1C00160B8 (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014BD80 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00165D8 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C0016610 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00166B8 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 */

__int64 UserNotifyDisplayChange()
{
  __int64 v0; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v0 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v0);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
