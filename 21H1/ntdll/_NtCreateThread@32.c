/*
 * XREFs of _NtCreateThread@32 @ 0x4B2F2E60
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateThread(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return Wow64SystemServiceCall();
}
