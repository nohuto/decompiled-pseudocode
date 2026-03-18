/*
 * XREFs of ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A
 * Callers:
 *     _WindowHasShadow@4 @ 0x1FAEE (_WindowHasShadow@4.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxUpdateShadowZorder@4 @ 0x19D563 (_xxxUpdateShadowZorder@4.c)
 *     _zzzCloakShadow@8 @ 0x19D618 (_zzzCloakShadow@8.c)
 *     _zzzMoveShadow@4 @ 0x19D67F (_zzzMoveShadow@4.c)
 *     _zzzUpdateShadowAlpha@4 @ 0x19D6F9 (_zzzUpdateShadowAlpha@4.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__thiscall FindShadow(void *this)
{
  struct tagSHADOW *result; // eax

  for ( result = gpshadowFirst; result && *(void **)result != this; result = (struct tagSHADOW *)*((_DWORD *)result + 2) )
    ;
  return result;
}
