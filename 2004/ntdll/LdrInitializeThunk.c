/*
 * XREFs of LdrInitializeThunk @ 0x180074B10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180074B38 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009D670 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
