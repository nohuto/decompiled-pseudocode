/*
 * XREFs of _EtwpGetCpuSpeed@4 @ 0x4B307AB0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwpGetCpuSpeedFromRegistry@4 @ 0x4B2F0DF4 (_EtwpGetCpuSpeedFromRegistry@4.c)
 */

NTSTATUS __stdcall EtwpGetCpuSpeed(_DWORD *a1)
{
  return EtwpGetCpuSpeedFromRegistry(a1);
}
