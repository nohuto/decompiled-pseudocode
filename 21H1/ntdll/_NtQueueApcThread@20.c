/*
 * XREFs of _NtQueueApcThread@20 @ 0x4B2F2DD0
 * Callers:
 *     _RtlQueueApcWow64Thread@20 @ 0x4B33A120 (_RtlQueueApcWow64Thread@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtQueueApcThread(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
