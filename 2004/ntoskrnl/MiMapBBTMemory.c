/*
 * XREFs of MiMapBBTMemory @ 0x140A53620
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiObtainSystemVa @ 0x14033DD94 (MiObtainSystemVa.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __m128i *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 ValidPte; // rdi
  __int64 *v12; // rax
  __int64 *v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rsi
  __int64 *v21; // [rsp+80h] [rbp+18h]
  __m128i *v22; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  if ( BBTPagesToReserve )
  {
    v5 = *(__m128i **)(*(_QWORD *)(a1 + 240) + 2824LL);
    if ( v5 )
    {
      v3 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_31:
      v20 = v3 << 12;
      KeZeroPages(v5, v20);
      v5->m128i_i64[0] = v20;
      goto LABEL_32;
    }
    v6 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v7 = MiObtainSystemVa(v6 >> 9, 9LL, a3);
    v22 = (__m128i *)v7;
    v5 = (__m128i *)v7;
    if ( !v7 )
    {
LABEL_7:
      BBTPagesToReserve = 0LL;
LABEL_32:
      BBTBuffer = (__int64)v5;
      return;
    }
    v8 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = (__int64)&v8[v6 - 1];
    if ( !(unsigned int)MiMakeZeroedPageTablesEx((__int64)v8, v9, 0, 9, 0) )
    {
      MiReturnSystemVa((unsigned __int64)v5, ((v9 << 25) + 0x10000000) >> 16, 9);
      v5 = 0LL;
      goto LABEL_7;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v8, 0LL, 2684354564LL, v10);
    v12 = (__int64 *)(a1 + 32);
    v13 = *(__int64 **)(a1 + 32);
    v21 = v12;
    if ( v13 == v12 )
    {
LABEL_29:
      if ( v3 < BBTPagesToReserve )
        BBTPagesToReserve = v3;
      goto LABEL_31;
    }
LABEL_9:
    if ( *((_DWORD *)v13 + 4) != 23 )
      goto LABEL_27;
    v14 = v13[4];
    v15 = v13[3];
    if ( v14 + v3 > BBTPagesToReserve )
      v14 = BBTPagesToReserve - v3;
    v3 += v14;
    while ( 1 )
    {
      ValidPte ^= (ValidPte ^ (v15 << 12)) & 0xFFFFFFFFF000LL;
      v16 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v18 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v19 = (ValidPte & 1) == 0;
            goto LABEL_17;
          }
        }
        else
        {
          v18 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v19 = (ValidPte & 1) == 0;
LABEL_17:
            if ( !v19 )
              v16 = ValidPte | 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v18 = 0;
      }
      *v8 = v16;
      if ( v18 )
        MiWritePteShadow((__int64)v8, v16, v17);
      ++v8;
      ++v15;
      if ( !--v14 )
      {
        if ( v3 == BBTPagesToReserve )
          goto LABEL_28;
        v12 = v21;
LABEL_27:
        v13 = (__int64 *)*v13;
        if ( v13 == v12 )
        {
LABEL_28:
          v5 = v22;
          goto LABEL_29;
        }
        goto LABEL_9;
      }
    }
  }
}
