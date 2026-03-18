/*
 * XREFs of MiMapBBTMemory @ 0x140B092AC
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiObtainSystemVa @ 0x14026B32C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 ValidPte; // rdi
  __int64 v11; // rax
  unsigned __int64 i; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  int v16; // eax
  bool v17; // zf
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // [rsp+80h] [rbp+18h]

  if ( BBTPagesToReserve )
  {
    v4 = *(__m128i **)(*(_QWORD *)(a1 + 240) + 2856LL);
    if ( v4 )
    {
      v5 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_41:
      v21 = v5 << 12;
      KeZeroPages(v4, v21);
      v4->m128i_i64[0] = v21;
      goto LABEL_42;
    }
    v6 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v22 = MiObtainSystemVa(v6 >> 9, 9LL, a3);
    v4 = (__m128i *)v22;
    if ( !v22 )
    {
      BBTPagesToReserve = 0LL;
LABEL_42:
      BBTBuffer = (__int64)v4;
      return;
    }
    v7 = (unsigned __int64 *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = (__int64)&v7[v6 - 1];
    if ( !(unsigned int)MiMakeZeroedPageTablesEx((__int64)v7, v8, 0, 9, 0) )
    {
      MiReturnSystemVa(v22, ((v8 << 25) + 0x10000000) >> 16, 9);
      v4 = 0LL;
      BBTPagesToReserve = 0LL;
      goto LABEL_42;
    }
    v9 = a1 + 352;
    ValidPte = MiMakeValidPte(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, -1610612732);
    v5 = 0LL;
    v11 = *(_QWORD *)(v9 + 8);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
        goto LABEL_39;
      i = v11 ^ (v9 | 1);
    }
    else
    {
      i = *(_QWORD *)(v9 + 8);
    }
    if ( i )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(i + 24) != 23 )
          goto LABEL_30;
        v13 = *(_QWORD *)(i + 40);
        v14 = *(_QWORD *)(i + 32);
        if ( v13 + v5 > BBTPagesToReserve )
          v13 = BBTPagesToReserve - v5;
        v5 += v13;
        do
        {
          ValidPte ^= (ValidPte ^ (v14 << 12)) & 0xFFFFFFFFFF000LL;
          v15 = ValidPte;
          if ( MiPteInShadowRange((unsigned __int64)v7) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v16 = 1;
              if ( HIBYTE(word_140C51864) )
                goto LABEL_26;
              v17 = (ValidPte & 1) == 0;
            }
            else
            {
              v16 = 0;
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_26;
              v17 = (ValidPte & 1) == 0;
            }
            if ( !v17 )
              v15 = ValidPte | 0x8000000000000000uLL;
          }
          else
          {
            v16 = 0;
          }
LABEL_26:
          *v7 = v15;
          if ( v16 )
            MiWritePteShadow((__int64)v7, v15);
          ++v7;
          ++v14;
          --v13;
        }
        while ( v13 );
        if ( v5 == BBTPagesToReserve )
          goto LABEL_38;
LABEL_30:
        v18 = *(_QWORD ***)(i + 8);
        v19 = i;
        if ( v18 )
        {
          v20 = *v18;
          for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
            i = (unsigned __int64)v20;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v19 )
              break;
            v19 = i;
          }
        }
        if ( !i )
        {
LABEL_38:
          v4 = (__m128i *)v22;
          break;
        }
      }
    }
LABEL_39:
    if ( v5 < BBTPagesToReserve )
      BBTPagesToReserve = v5;
    goto LABEL_41;
  }
}
