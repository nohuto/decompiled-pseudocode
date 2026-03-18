/*
 * XREFs of MiJumpStack @ 0x140534530
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140310FA0 (KeGenericCallDpc.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
