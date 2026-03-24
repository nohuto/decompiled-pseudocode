/*
 * XREFs of MiIsFaultPteIntact @ 0x14028D274
 * Callers:
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14028D344 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14028D510 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 ActualFaultingPte; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v15 = 0LL;
  v14 = 0;
  ActualFaultingPte = MiFindActualFaultingPte(a1, a2);
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
        v12 = MiCheckVirtualAddress(a2, &v14, &v15);
      }
      else
      {
        if ( qword_140C4DF40 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= ~qword_140C4DF40;
        }
        v12 = v11 >> 16;
      }
      if ( v12 != a3 )
        return 0LL;
      v10 = MI_READ_PTE_LOCK_FREE(v12);
    }
    if ( v10 == *a4 )
      return 1LL;
  }
  return 0LL;
}
