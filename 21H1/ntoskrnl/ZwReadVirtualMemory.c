/*
 * XREFs of ZwReadVirtualMemory @ 0x1403F2B10
 * Callers:
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
