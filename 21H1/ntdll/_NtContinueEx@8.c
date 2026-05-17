/*
 * XREFs of _NtContinueEx@8 @ 0x4B2F3390
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtContinueEx(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
