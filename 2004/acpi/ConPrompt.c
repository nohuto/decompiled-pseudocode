/*
 * XREFs of ConPrompt @ 0x1C0065C48
 * Callers:
 *     Debugger @ 0x1C0066AA8 (Debugger.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

ULONG __fastcall ConPrompt(__int64 a1, CHAR *a2)
{
  if ( (gDebugger & 0xFFFDFFFF) != 0 && KeGetCurrentIrql() < 2u )
  {
    _InterlockedOr(&gDebugger, 0x20000u);
    DbgSetDebugFilterState(0x19u, 0xFFFFFFFF, 1u);
  }
  if ( qword_1C00828F8 )
    return ((__int64 (__fastcall *)(const CHAR *, CHAR *, __int64, __int64))qword_1C00828F8)(
             "\nAMLI(? for help)-> ",
             a2,
             256LL,
             qword_1C0082900);
  else
    return DbgPrompt("\nAMLI(? for help)-> ", a2, 0x100u);
}
