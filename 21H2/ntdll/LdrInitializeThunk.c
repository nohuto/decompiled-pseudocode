/*
 * XREFs of LdrInitializeThunk @ 0x180075C40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180075C68 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009DE60 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
