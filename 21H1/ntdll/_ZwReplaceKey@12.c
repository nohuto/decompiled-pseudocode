/*
 * XREFs of _ZwReplaceKey@12 @ 0x4B2F40C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwReplaceKey(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
