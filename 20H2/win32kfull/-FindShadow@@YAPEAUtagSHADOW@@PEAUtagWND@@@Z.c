/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8
 * Callers:
 *     WindowHasShadow @ 0x1C003CBA4 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C01371EC (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C023DCA8 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C023DDB0 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C023DE50 (zzzMoveShadow.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  for ( result = gpshadowFirst;
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
