/*
 * XREFs of _RtlGetSystemBootStatus@16 @ 0x4B350B70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD (_RtlpSystemBootStatusRequest@16.c)
 */

int __stdcall RtlGetSystemBootStatus(int a1, int a2, int a3, int a4)
{
  return RtlpSystemBootStatusRequest(1, a4);
}
