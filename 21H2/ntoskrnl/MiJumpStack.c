/*
 * XREFs of MiJumpStack @ 0x140536270
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 */

char __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
