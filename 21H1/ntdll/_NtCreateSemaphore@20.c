/*
 * XREFs of _NtCreateSemaphore@20 @ 0x4B2F3570
 * Callers:
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateSemaphore(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
