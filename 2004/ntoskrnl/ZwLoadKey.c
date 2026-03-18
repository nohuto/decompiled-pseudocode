/*
 * XREFs of ZwLoadKey @ 0x1403F56A0
 * Callers:
 *     BiLoadHive @ 0x140773668 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
