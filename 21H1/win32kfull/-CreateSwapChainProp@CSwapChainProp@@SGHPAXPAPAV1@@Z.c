/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SGHPAXPAPAV1@@Z @ 0xC2DA0
 * Callers:
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall CSwapChainProp::CreateSwapChainProp(int a1, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // esi

  v2 = 0;
  *a2 = 0;
  v3 = (_DWORD *)Win32AllocPoolZInit(16, 1668772693);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    *v3 = &CSwapChainProp::`vftable';
    if ( v3[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v3[2] = a1;
    v3[3] = 0;
    v2 = 1;
    *a2 = v3;
  }
  return v2;
}
