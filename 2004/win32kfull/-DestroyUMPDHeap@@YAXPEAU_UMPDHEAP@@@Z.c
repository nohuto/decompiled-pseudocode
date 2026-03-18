/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0152D58
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00ED958 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     FreeNonCachedUserMemWrap @ 0x1C00FC620 (FreeNonCachedUserMemWrap.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029432C (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1)
{
  void *v2; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 1);
    if ( v2 )
      MmUnsecureVirtualMemory(v2);
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1);
  }
}
