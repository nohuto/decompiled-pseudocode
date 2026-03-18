/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x14038D068
 * Callers:
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveIptState @ 0x140570250 (KiSaveIptState.c)
 */

struct _KPRCB *KeSaveIptStateBeforeProcessorGoesOffline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiSaveIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
