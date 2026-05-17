/*
 * XREFs of _ZwFlushVirtualMemory@16 @ 0x4B2F3830
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwFlushVirtualMemory(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
