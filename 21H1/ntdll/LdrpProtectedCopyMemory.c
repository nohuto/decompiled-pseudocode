/*
 * XREFs of LdrpProtectedCopyMemory @ 0x4B32F440
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     LdrpIgnoreReadFaultsFilter @ 0x4B32F3EE (LdrpIgnoreReadFaultsFilter.c)
 */

int __stdcall LdrpProtectedCopyMemory(int a1, void *Src, void *a3, size_t Size, _DWORD *a5)
{
  memcpy(a3, Src, Size);
  *a5 = Size;
  return 0;
}
