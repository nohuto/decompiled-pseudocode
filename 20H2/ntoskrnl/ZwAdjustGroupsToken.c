/*
 * XREFs of ZwAdjustGroupsToken @ 0x1403F8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustGroupsToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
