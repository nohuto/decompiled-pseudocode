/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C0150F24
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C0150BE8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(void *a1, struct CSwapChainProp **a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi

  v2 = 0;
  *a2 = 0LL;
  v5 = (_QWORD *)Win32AllocPoolZInit(32LL, 1668772693LL);
  v8 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    *v5 = &CSwapChainProp::`vftable';
    if ( v5[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    *((_DWORD *)v8 + 6) = 0;
    v2 = 1;
    v8[2] = a1;
    *a2 = (struct CSwapChainProp *)v8;
  }
  return v2;
}
