/*
 * XREFs of _NtGetWriteWatch@28 @ 0x4B2F3930
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtGetWriteWatch(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return Wow64SystemServiceCall();
}
