/*
 * XREFs of MiMakeLargePageTable @ 0x14053DA14
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402E5210 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSetPfnPageState @ 0x140329F00 (MiSetPfnPageState.c)
 *     MiMakeDemandZeroPte @ 0x140329F70 (MiMakeDemandZeroPte.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140379058 (MiTransformValidPteInPlace.c)
 *     MiLockPageAtDpc @ 0x14054F91C (MiLockPageAtDpc.c)
 *     MiDemotePfnListChain @ 0x14055E218 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  unsigned __int64 LeafVa; // r10
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 ContainingPageTable; // rdi
  __int64 v13; // rbx
  unsigned __int64 ValidPte; // rbx
  int v15; // edi
  __int64 v16; // r8
  bool v17; // zf
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  if ( (*(_DWORD *)(v3 + 64) & 0x80u) != 0 && (unsigned int)(a3 - 1) <= 1 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( LeafVa >= *(_QWORD *)(v6 + 32) )
    {
      v8 = 1;
      if ( v5 > 1 )
      {
        v9 = v5 - 1;
        do
        {
          --v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = v8;
      if ( LeafVa + (MiLargePageSizes[v8] << 12) - 1 <= *(_QWORD *)(v6 + 40) )
      {
        v11 = *(_QWORD *)(v3 + 8LL * v8);
        if ( v11 || v8 && (MiDemotePfnListChain(v3), (v11 = *(_QWORD *)(v3 + 8 * v10)) != 0) )
        {
          *(_QWORD *)(v3 + 8 * v10) = *(_QWORD *)v11;
          ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
          v13 = 48 * ContainingPageTable - 0x58000000000LL;
          MiLockPageAtDpc(v13);
          *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiLockPageAtDpc(v11);
          *(_QWORD *)(v11 + 8) = a2;
          *(_QWORD *)(v11 + 16) = MiMakeDemandZeroPte(4);
          MiSetPfnPageState(v11, 6);
          *(_QWORD *)(v11 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(v11 + 40)) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ValidPte = MiMakeValidPte((unsigned __int64)a2, (v11 + 0x58000000000LL) / 48, -2080374780);
          if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) & 1) != 0 )
          {
            MiTransformValidPteInPlace(a2, (__int64)a2, ValidPte, v5);
LABEL_23:
            result = 1LL;
            *(_QWORD *)(v3 + 48) += MiLargePageSizes[v10];
            return result;
          }
          v15 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a2) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v15 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v17 = (ValidPte & 1) == 0;
                goto LABEL_19;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v17 = (ValidPte & 1) == 0;
LABEL_19:
              if ( !v17 )
                ValidPte |= 0x8000000000000000uLL;
            }
          }
          *a2 = ValidPte;
          if ( v15 )
            MiWritePteShadow((__int64)a2, ValidPte, v16);
          goto LABEL_23;
        }
      }
    }
  }
  return 0LL;
}
