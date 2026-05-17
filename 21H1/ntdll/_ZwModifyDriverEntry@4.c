/*
 * XREFs of _ZwModifyDriverEntry@4 @ 0x4B2F3AE0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwModifyDriverEntry(int a1)
{
  return Wow64SystemServiceCall();
}
