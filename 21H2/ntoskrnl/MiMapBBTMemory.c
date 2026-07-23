/*
 * XREFs of MiMapBBTMemory @ 0x140A562A8
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __m128i *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 ValidPte; // rdi
  __int64 *v11; // rax
  __int64 *v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rsi
  __int64 *v19; // [rsp+80h] [rbp+18h]
  __m128i *v20; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  if ( BBTPagesToReserve )
  {
    v5 = *(__m128i **)(*(_QWORD *)(a1 + 240) + 2824LL);
    if ( v5 )
    {
      v3 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_31:
      v18 = v3 << 12;
      KeZeroPages(v5, v18);
      v5->m128i_i64[0] = v18;
      goto LABEL_32;
    }
    v6 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v7 = MiObtainSystemVa(v6 >> 9, 9LL, a3);
    v20 = (__m128i *)v7;
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
    ValidPte = MiMakeValidPte((unsigned __int64)v8, 0LL, -1610612732);
    v11 = (__int64 *)(a1 + 32);
    v12 = *(__int64 **)(a1 + 32);
    v19 = v11;
    if ( v12 == v11 )
    {
LABEL_29:
      if ( v3 < BBTPagesToReserve )
        BBTPagesToReserve = v3;
      goto LABEL_31;
    }
LABEL_9:
    if ( *((_DWORD *)v12 + 4) != 23 )
      goto LABEL_27;
    v13 = v12[4];
    v14 = v12[3];
    if ( v13 + v3 > BBTPagesToReserve )
      v13 = BBTPagesToReserve - v3;
    v3 += v13;
    while ( 1 )
    {
      ValidPte ^= (ValidPte ^ (v14 << 12)) & 0xFFFFFFFFF000LL;
      v15 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v17 = (ValidPte & 1) == 0;
            goto LABEL_17;
          }
        }
        else
        {
          v16 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v17 = (ValidPte & 1) == 0;
LABEL_17:
            if ( !v17 )
              v15 = ValidPte | 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v16 = 0;
      }
      *v8 = v15;
      if ( v16 )
        MiWritePteShadow((__int64)v8, v15);
      ++v8;
      ++v14;
      if ( !--v13 )
      {
        if ( v3 == BBTPagesToReserve )
          goto LABEL_28;
        v11 = v19;
LABEL_27:
        v12 = (__int64 *)*v12;
        if ( v12 == v11 )
        {
LABEL_28:
          v5 = v20;
          goto LABEL_29;
        }
        goto LABEL_9;
      }
    }
  }
}
