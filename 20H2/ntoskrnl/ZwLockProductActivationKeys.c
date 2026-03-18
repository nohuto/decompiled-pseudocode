/*
 * XREFs of ZwLockProductActivationKeys @ 0x1403FA2F0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A59BC0 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockProductActivationKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
