/*
 * XREFs of _NtDisplayString@4 @ 0x4B2F3730
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtDisplayString(int a1)
{
  return Wow64SystemServiceCall();
}
