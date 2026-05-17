/*
 * XREFs of _NtWow64ReadVirtualMemory64@28 @ 0x4B2F47E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64ReadVirtualMemory64(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return Wow64SystemServiceCall();
}
