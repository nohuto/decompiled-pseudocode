/*
 * XREFs of ZwLoadKeyEx @ 0x1403F4450
 * Callers:
 *     PiDrvDbLoadHive @ 0x140711C54 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
