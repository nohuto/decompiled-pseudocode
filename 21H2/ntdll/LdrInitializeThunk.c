/*
 * XREFs of LdrInitializeThunk @ 0x180075C40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180075C68 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009DEA0 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
