/*
 * XREFs of _NtGetDevicePowerState@8 @ 0x4B2F38D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtGetDevicePowerState(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
