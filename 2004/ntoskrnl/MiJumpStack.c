/*
 * XREFs of MiJumpStack @ 0x140530B60
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x14033FF70 (KeGenericCallDpc.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
