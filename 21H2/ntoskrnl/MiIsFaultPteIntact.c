/*
 * XREFs of MiIsFaultPteIntact @ 0x1402803FC
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x1402804F0 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x1403536F0 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 ActualFaultingPte; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v9 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v10 = v9;
    if ( v8 != a3 )
    {
      if ( (v9 & 0x400) == 0 )
        return 0LL;
      if ( (unsigned int)MiIsPrototypePteVadLookup(v9) )
      {
        v15 = 0LL;
        v14 = 0;
        v11 = MiCheckVirtualAddress(a2, &v14, &v15);
        if ( v15 )
        {
          LOBYTE(v13) = 17;
          MiUnlockVadTree(1LL, v13);
        }
      }
      else
      {
        if ( qword_140C50780 )
        {
          if ( (v10 & 0x10) != 0 )
            v10 &= ~0x10uLL;
          else
            v10 &= ~qword_140C50780;
        }
        v11 = v10 >> 16;
      }
      if ( v11 != a3 )
        return 0LL;
      v10 = MI_READ_PTE_LOCK_FREE(v11);
    }
    if ( v10 == *a4 )
      return 1LL;
  }
  return 0LL;
}
