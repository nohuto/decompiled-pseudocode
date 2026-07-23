/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x140383704
 * Callers:
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AF2C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x14051A5F0 (KiRestoreIptState.c)
 */

struct _KPRCB *KeRestoreIptStateAfterProcessorComesOnline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiRestoreIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
