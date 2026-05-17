/*
 * XREFs of _NtVdmControl@8 @ 0x4B2F4670
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtVdmControl(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
