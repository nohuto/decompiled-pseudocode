/*
 * XREFs of _ZwAdjustGroupsToken@24 @ 0x4B2F3040
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwAdjustGroupsToken(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
