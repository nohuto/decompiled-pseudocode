/*
 * XREFs of ZwQueryInformationProcess @ 0x1403F2650
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405BDFB0 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
