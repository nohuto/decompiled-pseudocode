/*
 * XREFs of _ZwCreateTimer@16 @ 0x4B2F35A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCreateTimer(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
