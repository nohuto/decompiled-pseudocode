/*
 * XREFs of MiZeroLargePage @ 0x14026A28C
 * Callers:
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x1405B05D0 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1405C0828 (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  int ProtectionPfnCompatible; // ebx
  __int64 v9; // r8
  unsigned int v10; // esi
  _OWORD *v11; // r14
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v13; // r14
  unsigned int v14; // ebx
  __int64 ValidPte; // rbx
  unsigned int v16; // r12d
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned int v19; // edi
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 *v22; // r12
  int v23; // r13d
  __int64 result; // rax
  __int64 v25; // rcx
  int v26; // edi
  unsigned __int64 v27; // rbx
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  __int64 v31; // r14
  __int64 v32; // rdi
  unsigned int v33; // r13d
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  int v36; // [rsp+20h] [rbp-E8h]
  int v37; // [rsp+20h] [rbp-E8h]
  unsigned __int64 *v39; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v40; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v41; // [rsp+30h] [rbp-D8h]
  _OWORD v42[8]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = a2;
  memset(v42, 0, sizeof(v42));
  v6 = MiLargePageSizes[v3];
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( v7 <= qword_140C50840 && ((*(_QWORD *)(16 * ((a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a1);
  }
  else
  {
    v9 = 4LL;
    ProtectionPfnCompatible = 4;
  }
  v10 = 0;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
      v9 = 2LL;
  }
  else
  {
    v9 = 1LL;
  }
  if ( (unsigned int)MiCreateUltraThreadContext(v42, 0LL, v9) )
  {
    v11 = &v42[2 * (unsigned int)v3];
    UltraMapping = MiGetUltraMapping(v11, (unsigned int)v3, v6, 0LL);
    v41 = UltraMapping;
    if ( (_DWORD)v3 == 2 )
    {
      UltraMapping = MiGetUltraMapping(v11, 2LL, v6, 0LL);
      v41 = UltraMapping;
    }
    v13 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (unsigned int)v3 <= 1 )
    {
      v25 = (unsigned int)(2 - v3);
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v25;
      }
      while ( v25 );
      v14 = ProtectionPfnCompatible | 0xA4000000;
    }
    else
    {
      v14 = ProtectionPfnCompatible | 0xA0000000;
    }
    ValidPte = MiMakeValidPte(v13, v7, v14);
    if ( (unsigned int)v3 > 1 )
    {
      v16 = 0;
      if ( !v6 )
        goto LABEL_20;
      v17 = 0LL;
      while ( 1 )
      {
        v36 = 0;
        v39 = (unsigned __int64 *)(v13 + 8 * v17);
        v18 = ValidPte;
        if ( (unsigned int)MiPteInShadowRange(v39) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v36 = 1;
            if ( !HIBYTE(word_140C51864) )
              goto LABEL_51;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_51:
            if ( (ValidPte & 1) != 0 )
              v18 = ValidPte | 0x8000000000000000uLL;
          }
        }
        *v39 = v18;
        if ( v36 )
          MiWritePteShadow((__int64)v39, v18);
        ++v16;
        ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
        v17 = v16;
        if ( v16 >= v6 )
        {
          LODWORD(v3) = a2;
          goto LABEL_20;
        }
      }
    }
    v26 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v13) )
    {
LABEL_33:
      *(_QWORD *)v13 = ValidPte;
      if ( v26 )
        MiWritePteShadow(v13, ValidPte);
LABEL_20:
      KeZeroPages(v41, v6 << 12);
      v19 = 0;
      if ( (unsigned int)v3 > 1 )
      {
        if ( v6 )
        {
          v20 = 0LL;
          while ( 1 )
          {
            v21 = ZeroPte;
            v22 = (unsigned __int64 *)(v13 + 8 * v20);
            v23 = 0;
            if ( (unsigned int)MiPteInShadowRange(v22) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v23 = 1;
                if ( !HIBYTE(word_140C51864) )
                {
                  v30 = (ZeroPte & 1) == 0;
                  goto LABEL_65;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v30 = (ZeroPte & 1) == 0;
LABEL_65:
                if ( !v30 )
                  v21 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v22 = v21;
            if ( v23 )
              MiWritePteShadow((__int64)v22, v21);
            v20 = ++v19;
            if ( v19 >= v6 )
              return MiDeleteUltraThreadContext((__int64)v42);
          }
        }
        return MiDeleteUltraThreadContext((__int64)v42);
      }
      v27 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(v13) )
      {
LABEL_36:
        *(_QWORD *)v13 = v27;
        if ( v19 )
          MiWritePteShadow(v13, v27);
        return MiDeleteUltraThreadContext((__int64)v42);
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_36;
        v29 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v29 = (ZeroPte & 1) == 0;
      }
      if ( !v29 )
        v27 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_36;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v26 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_33;
      v28 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_33;
      v28 = (ValidPte & 1) == 0;
    }
    if ( !v28 )
      ValidPte |= 0x8000000000000000uLL;
    goto LABEL_33;
  }
  result = MiReservePtes(&qword_140C534C0, (unsigned int)v6);
  v31 = result;
  if ( result )
  {
    v32 = MiMakeValidPte(result, v7, ProtectionPfnCompatible | 0xA0000000);
    v33 = 0;
    if ( !v6 )
    {
LABEL_80:
      KeZeroPages(v31 << 25 >> 16, v6 << 12);
      return MiReleasePtes(&qword_140C534C0, v31, (unsigned int)v6);
    }
    v34 = 0LL;
    while ( 1 )
    {
      v37 = 0;
      v32 ^= (v32 ^ ((v34 + v7) << 12)) & 0xFFFFFFFFFF000LL;
      v40 = (unsigned __int64 *)(v31 + 8 * v34);
      v35 = v32;
      if ( (unsigned int)MiPteInShadowRange(v40) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v37 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_75;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_75:
          if ( (v32 & 1) != 0 )
            v35 = v32 | 0x8000000000000000uLL;
        }
      }
      *v40 = v35;
      if ( v37 )
        MiWritePteShadow((__int64)v40, v35);
      v34 = ++v33;
      if ( v33 >= v6 )
        goto LABEL_80;
    }
  }
  if ( v6 )
  {
    result = 0LL;
    do
    {
      MiZeroPhysicalPage(result + v7, 0, a3);
      result = ++v10;
    }
    while ( v10 < v6 );
  }
  return result;
}
