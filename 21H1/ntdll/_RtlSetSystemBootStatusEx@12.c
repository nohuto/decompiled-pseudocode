/*
 * XREFs of _RtlSetSystemBootStatusEx@12 @ 0x4B350D20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD (_RtlpSystemBootStatusRequest@16.c)
 */

int __stdcall RtlSetSystemBootStatusEx(int a1, int a2, PVOID OutputBuffer)
{
  return RtlpSystemBootStatusRequest(a2, OutputBuffer);
}
