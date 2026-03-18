/*
 * XREFs of ZwSystemDebugControl @ 0x1403F6D60
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140786744 (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
