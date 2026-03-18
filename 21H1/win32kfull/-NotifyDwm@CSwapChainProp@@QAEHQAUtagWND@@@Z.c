/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z @ 0xC2CB2
 * Callers:
 *     _UserRemoveWindowedSwapChain@8 @ 0xC2A82 (_UserRemoveWindowedSwapChain@8.c)
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _DwmAsyncDxBindSwapChain@12 @ 0xC2D22 (_DwmAsyncDxBindSwapChain@12.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

BOOL __thiscall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  struct tagWND *v2; // esi
  int v3; // ebx
  struct tagWND *v5; // eax
  void *v6; // ecx
  struct tagWND *v7; // eax
  void *v8; // eax
  int v10; // [esp-4h] [ebp-10h]

  v2 = a2;
  v3 = 0;
  v5 = (struct tagWND *)*((_DWORD *)this + 1);
  if ( v5 && v5 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( IsWindowDesktopComposed(v2) )
  {
    v6 = (void *)*((_DWORD *)this + 2);
    v7 = 0;
    a2 = 0;
    if ( !v6 )
    {
LABEL_8:
      v10 = (int)v7;
      v8 = (void *)ReferenceDwmApiPort();
      return DwmAsyncDxBindSwapChain(v8, v10) >= 0;
    }
    if ( (int)DxgkOpenDwmHandleForCompositionObjectReference(v6, (void **)&a2) >= 0 )
    {
      v7 = a2;
      goto LABEL_8;
    }
  }
  return v3;
}
