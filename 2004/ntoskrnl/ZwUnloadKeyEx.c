/*
 * XREFs of ZwUnloadKeyEx @ 0x1403F6EE0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140713AB8 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
