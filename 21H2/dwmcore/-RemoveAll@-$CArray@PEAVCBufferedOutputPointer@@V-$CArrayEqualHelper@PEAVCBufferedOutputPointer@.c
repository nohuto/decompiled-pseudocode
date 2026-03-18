/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800EFCB4
 * Callers:
 *     ??1CInteractionContextWrapper@@EEAA@XZ @ 0x18002BE34 (--1CInteractionContextWrapper@@EEAA@XZ.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1802740B0 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    DefaultHeap::Free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
