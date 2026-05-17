/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A14B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallbackReturn @ 0x18009D6E0 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A1340 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax

  KiUserCallForwarder();
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
