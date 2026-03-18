/*
 * XREFs of MiIsFaultPteIntact @ 0x140315C5C
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFindActualFaultingPte @ 0x140315D2C (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h] BYREF

  v17 = 0LL;
  v16 = 0;
  ActualFaultingPte = MiFindActualFaultingPte(a1, a2);
  v8 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v9 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v12 = v9;
    if ( v8 != a3 )
    {
      if ( (v9 & 0x400) == 0 )
        return 0LL;
      if ( (unsigned int)MiIsPrototypePteVadLookup(v9, v9, v10, v11) )
      {
        v14 = MiCheckVirtualAddress(a2, &v16, &v17);
      }
      else
      {
        if ( qword_140C4DD40 )
        {
          if ( (v13 & 0x10) != 0 )
            v13 &= ~0x10uLL;
          else
            v13 &= ~qword_140C4DD40;
        }
        v14 = v13 >> 16;
      }
      if ( v14 != a3 )
        return 0LL;
      v12 = MI_READ_PTE_LOCK_FREE(v14);
    }
    if ( v12 == *a4 )
      return 1LL;
  }
  return 0LL;
}
