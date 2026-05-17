/*
 * XREFs of _RtlFreeThreadActivationContextStack@0 @ 0x4B2E4910
 * Callers:
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 * Callees:
 *     _RtlFreeActivationContextStack@4 @ 0x4B2E49C0 (_RtlFreeActivationContextStack@4.c)
 */

int __stdcall RtlFreeThreadActivationContextStack()
{
  struct _TEB *v0; // esi

  v0 = NtCurrentTeb();
  RtlFreeActivationContextStack(v0->ActivationContextStackPointer);
  v0->ActivationContextStackPointer = 0;
  return RtlpInitializeThreadActivationContextStack(v0);
}
