/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x140380A48
 * Callers:
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AA6C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x1405148F0 (KiRestoreIptState.c)
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
