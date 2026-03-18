/*
 * XREFs of MiJumpStack @ 0x140530510
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
