/*
 * XREFs of MiIsFaultPteIntact @ 0x14020A414
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14020A4E4 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
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
      if ( (unsigned int)MiIsPrototypePteVadLookup(v9, v9) )
      {
        v12 = MiCheckVirtualAddress(a2, &v14, &v15);
      }
      else
      {
        if ( qword_140C4DF80 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= ~qword_140C4DF80;
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
