/*
 * XREFs of ?RemoveHeap@UMPDOBJ@@QAEXXZ @ 0x1F3ED1
 * Callers:
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ @ 0x1F3ADD (-FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?DestroyUMPDHeap@@YGXPAU_UMPDHEAP@@@Z @ 0x1F3A92 (-DestroyUMPDHeap@@YGXPAU_UMPDHEAP@@@Z.c)
 */

void __thiscall UMPDOBJ::RemoveHeap(UMPDOBJ *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PVOID *v4; // ecx

  if ( *((_DWORD *)this + 9) )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v4 = (PVOID *)*((_DWORD *)this + 9);
    if ( *(PVOID **)(ThreadWin32Thread + 28) != v4 )
      DestroyUMPDHeap(v4);
    *((_DWORD *)this + 9) = 0;
  }
}
