/*
 * XREFs of ZwLockVirtualMemory @ 0x1403F44D0
 * Callers:
 *     CmSiLockViewOfSection @ 0x1402E08C8 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140598CA0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
