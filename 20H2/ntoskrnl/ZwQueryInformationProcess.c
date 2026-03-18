/*
 * XREFs of ZwQueryInformationProcess @ 0x1403F8490
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405C2350 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
