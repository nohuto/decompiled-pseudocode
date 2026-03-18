/*
 * XREFs of ZwLockProductActivationKeys @ 0x1403F5720
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A59540 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockProductActivationKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
