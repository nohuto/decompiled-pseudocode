/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0150D90
 * Callers:
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C0150BE8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01536E0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1C0150E38 (DwmAsyncDxBindSwapChain.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  struct tagWND *v2; // rax
  unsigned int v3; // ebx
  void *v6; // rcx
  void *v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagWND *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && v2 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v6 = (void *)*((_QWORD *)this + 2);
    v9 = 0LL;
    if ( !v6 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v6, &v9) >= 0 )
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v7) >= 0;
    }
  }
  return v3;
}
