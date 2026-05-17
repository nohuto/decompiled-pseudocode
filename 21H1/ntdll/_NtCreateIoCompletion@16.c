/*
 * XREFs of _NtCreateIoCompletion@16 @ 0x4B2F3440
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateIoCompletion(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
