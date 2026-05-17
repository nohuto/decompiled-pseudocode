/*
 * XREFs of _NtSetInformationEnlistment@16 @ 0x4B2F42E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetInformationEnlistment(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
