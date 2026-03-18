/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x140382F6C
 * Callers:
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409B1490 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x140518870 (KiRestoreIptState.c)
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
