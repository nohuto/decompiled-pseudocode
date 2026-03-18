/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0153490
 * Callers:
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C01532E8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0156010 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1C0153538 (DwmAsyncDxBindSwapChain.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rax
  unsigned int v5; // ebx
  void *v8; // rcx
  void *v9; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct tagWND *)*((_QWORD *)this + 1);
  v5 = 0;
  if ( v4 && v4 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v8 = (void *)*((_QWORD *)this + 2);
    v11 = 0LL;
    if ( !v8 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v8, &v11) >= 0 )
    {
      v9 = (void *)ReferenceDwmApiPort(v8);
      LOBYTE(v5) = (int)DwmAsyncDxBindSwapChain(v9) >= 0;
    }
  }
  return v5;
}
