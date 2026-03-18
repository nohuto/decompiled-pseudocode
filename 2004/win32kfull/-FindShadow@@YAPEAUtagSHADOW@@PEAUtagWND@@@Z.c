/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001DE38
 * Callers:
 *     WindowHasShadow @ 0x1C001DE04 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C013529C (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C023EF48 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C023F050 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C023F0F0 (zzzMoveShadow.c)
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
