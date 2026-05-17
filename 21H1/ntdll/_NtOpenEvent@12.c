/*
 * XREFs of _NtOpenEvent@12 @ 0x4B2F2D80
 * Callers:
 *     _WaitForWerSvc@4 @ 0x4B33AD78 (_WaitForWerSvc@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtOpenEvent(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
