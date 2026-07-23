/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x140383DF8
 * Callers:
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AF2C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveIptState @ 0x14051A718 (KiSaveIptState.c)
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
