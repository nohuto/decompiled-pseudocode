/*
 * XREFs of ZwSystemDebugControl @ 0x1403F5AD0
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x1407810B8 (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
