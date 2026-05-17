/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x1800707C0
 * Callers:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180070800 (RtlFreeActivationContextStack.c)
 */

__int64 RtlFreeThreadActivationContextStack()
{
  struct _TEB *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = NtCurrentTeb();
  RtlFreeActivationContextStack(v0->ActivationContextStackPointer);
  v0->ActivationContextStackPointer = 0LL;
  return RtlpInitializeThreadActivationContextStack(v0, v1, v2, v3);
}
