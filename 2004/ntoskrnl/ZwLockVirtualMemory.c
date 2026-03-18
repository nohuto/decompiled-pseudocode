/*
 * XREFs of ZwLockVirtualMemory @ 0x1403F5760
 * Callers:
 *     CmSiLockViewOfSection @ 0x140271240 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140599390 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
