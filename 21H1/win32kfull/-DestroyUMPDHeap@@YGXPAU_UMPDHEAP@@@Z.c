/*
 * XREFs of ?DestroyUMPDHeap@@YGXPAU_UMPDHEAP@@@Z @ 0x1F3A92
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z @ 0xA3A60 (-vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z.c)
 *     ?RemoveHeap@UMPDOBJ@@QAEXXZ @ 0x1F3ED1 (-RemoveHeap@UMPDOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall DestroyUMPDHeap(PVOID *this)
{
  PVOID BaseAddress; // [esp+4h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+8h] [ebp-4h] BYREF

  if ( this )
  {
    if ( this[1] )
      MmUnsecureVirtualMemory(this[1]);
    if ( *this )
    {
      BaseAddress = *this;
      RegionSize = 0x400000;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool((PATHOBJ *)this);
  }
}
