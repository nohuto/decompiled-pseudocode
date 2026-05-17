/*
 * XREFs of _NtAllocateVirtualMemoryEx@28 @ 0x4B2F30E0
 * Callers:
 *     _RtlpHpEnvAllocVA@36 @ 0x4B3723C3 (_RtlpHpEnvAllocVA@36.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtAllocateVirtualMemoryEx(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return Wow64SystemServiceCall();
}
