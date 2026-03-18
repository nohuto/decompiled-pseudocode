/*
 * XREFs of ZwLoadKeyEx @ 0x1403FA2B0
 * Callers:
 *     PiDrvDbLoadHive @ 0x1407217F4 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
