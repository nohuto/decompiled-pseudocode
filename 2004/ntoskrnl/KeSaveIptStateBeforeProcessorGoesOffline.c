/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x140381978
 * Callers:
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AB520 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveIptState @ 0x140515068 (KiSaveIptState.c)
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
