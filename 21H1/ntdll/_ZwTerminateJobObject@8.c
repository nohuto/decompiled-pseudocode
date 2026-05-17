/*
 * XREFs of _ZwTerminateJobObject@8 @ 0x4B2F4570
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwTerminateJobObject(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
