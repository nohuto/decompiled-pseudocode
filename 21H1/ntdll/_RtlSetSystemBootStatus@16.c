/*
 * XREFs of _RtlSetSystemBootStatus@16 @ 0x4B350CE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD (_RtlpSystemBootStatusRequest@16.c)
 */

int __stdcall RtlSetSystemBootStatus(int a1, int a2, int a3, int a4)
{
  return RtlpSystemBootStatusRequest(1, a4);
}
