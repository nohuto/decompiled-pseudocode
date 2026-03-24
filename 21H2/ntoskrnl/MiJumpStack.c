/*
 * XREFs of MiJumpStack @ 0x140536030
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x1402ECF00 (KeGenericCallDpc.c)
 */

char __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
