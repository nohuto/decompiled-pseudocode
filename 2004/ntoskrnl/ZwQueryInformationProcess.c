/*
 * XREFs of ZwQueryInformationProcess @ 0x1403F38E0
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405BE6D0 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
