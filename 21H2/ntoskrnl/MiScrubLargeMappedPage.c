/*
 * XREFs of MiScrubLargeMappedPage @ 0x1405C4FB8
 * Callers:
 *     MiScrubProcessLargePages @ 0x1405C5930 (MiScrubProcessLargePages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1405C4F88 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r8d
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 i; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  unsigned __int8 v25; // [rsp+20h] [rbp-188h]
  char v26; // [rsp+21h] [rbp-187h]
  int v27; // [rsp+28h] [rbp-180h]
  int v28; // [rsp+28h] [rbp-180h]
  unsigned __int64 v29; // [rsp+30h] [rbp-178h]
  unsigned __int64 v30; // [rsp+38h] [rbp-170h]
  int v31; // [rsp+40h] [rbp-168h]
  unsigned __int64 v32; // [rsp+48h] [rbp-160h] BYREF
  unsigned __int64 valid; // [rsp+50h] [rbp-158h]
  unsigned __int64 v34; // [rsp+58h] [rbp-150h]
  unsigned __int64 v35; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-140h]
  unsigned __int64 v37; // [rsp+70h] [rbp-138h]
  __int64 v38; // [rsp+78h] [rbp-130h]
  __int64 v39; // [rsp+80h] [rbp-128h]
  __int64 v40; // [rsp+90h] [rbp-118h]
  _QWORD v41[24]; // [rsp+A0h] [rbp-108h] BYREF

  v38 = a1;
  v40 = a1;
  memset(v41, 0, 0xB8uLL);
  v5 = 1;
  LODWORD(v41[0]) = 1;
  WORD2(v41[0]) = 0;
  v41[2] = 0LL;
  LODWORD(v41[1]) = 20;
  v41[3] = 0LL;
  v26 = 0;
  v29 = 0LL;
  v6 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
  v7 = ((((unsigned __int64)*(unsigned int *)(a3 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v34 = v7;
  v8 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v30 = v8;
  v9 = a2 + 1664;
  v39 = v9;
  v25 = MiLockWorkingSetShared(v9);
  while ( v7 <= v8 )
  {
    v32 = v7;
    v36 = 0LL;
    valid = MiLockLowestValidPageTable(v9, v7, &v32);
    v10 = v8;
    v11 = v32;
    if ( v32 != v7 )
      v10 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v12 = MI_READ_PTE_LOCK_FREE(v11);
      v13 = v12;
      v35 = v12;
      if ( v12 )
        break;
      v29 = 0LL;
      v11 += 8LL;
      if ( (v11 & 0xFFF) == 0 )
        break;
    }
    while ( v11 <= v10 );
    v32 = v11;
    if ( v12 )
    {
      if ( (v12 & 1) != 0 && (v12 & 0x80u) != 0LL )
      {
        v35 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFFLL;
        v14 = 1;
        v15 = 512LL;
        v16 = (__int64)(((__int64)((v11 << 25) - v36) >> 16 << 25) - v36) >> 16;
        while ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v16 = (__int64)((v16 << 25) - v36) >> 16;
          v15 <<= 9;
          ++v14;
        }
        v27 = v14;
        MiRewritePteWithLockBit(v9, (volatile __int64 *)v11, ZeroPte, 0xFFFFF68000000000uLL);
        v17 = v13 & 0xCFFFFFFFFFFFFFFFuLL;
        MiInsertTbFlushEntry((__int64)v41, (__int64)(v7 << 25) >> 16 << 25 >> 16, 1LL, v27);
        MiFlushTbList((__int64)v41);
        v18 = v29 & -(__int64)(v29 < v15);
        v29 = v18;
        v31 = 0;
        v19 = 48 * (v35 + v15) - 0x220000000000LL;
        v36 = v19;
        v20 = 48 * (v18 + v35);
        for ( i = v20 - 0x220000000000LL; ; i += 48LL )
        {
          v37 = i;
          if ( i >= v19 )
            break;
          v29 = ++v18;
          if ( *(_WORD *)(v20 - 0x21FFFFFFFFE0LL) == 2 )
          {
            if ( (int)MiScrubPage(v38, i, 0LL, 1LL) < 0 )
              MiMakePageBad(0xAAAAAAAAAAAAAAABuLL * (v20 >> 4), 1);
            if ( MiWorkingSetIsContended(v9)
              || (unsigned int)MiPageTableLockIsContended(v9, valid)
              || KeShouldYieldProcessor() )
            {
              v31 = 1;
              break;
            }
            if ( MiScrubInterrupted(v38) )
            {
              v26 = 1;
              break;
            }
            i = v37;
            v18 = v29;
            v19 = v36;
          }
          v20 += 48LL;
        }
        v22 = v17 | 0x20;
        v35 = v22;
        v28 = 0;
        v23 = v22;
        if ( MiPteInShadowRange(v11) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v28 = 1;
            if ( !HIBYTE(word_140C51864) && (v22 & 1) != 0 )
              v23 = v22 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v22 & 1) != 0 )
            {
              v23 = v22 | 0x8000000000000000uLL;
            }
            v11 = v32;
          }
        }
        *(_QWORD *)v11 = v23;
        if ( v28 )
          MiWritePteShadow(v11, v23);
        MiUnlockPageTableInternal(v9, valid);
        if ( v37 == v36 )
        {
          v7 += 8 * (v15 >> 9);
          v34 = v7;
          v29 = 0LL;
        }
        if ( v26 )
        {
          v5 = 0;
          break;
        }
        v8 = v30;
        v5 = 1;
        if ( v31 )
        {
          MiUnlockWorkingSetShared(v9, v25);
          MiLockWorkingSetShared(v9);
        }
      }
      else
      {
        MiUnlockPageTableInternal(v9, valid);
        MiUnlockWorkingSetShared(v9, v25);
        v8 = v30;
        v5 = 1;
        MiLockWorkingSetShared(v9);
      }
    }
    else
    {
      MiUnlockPageTableInternal(v9, valid);
      v7 = ((MiGetLeafVa(v11) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v34 = v7;
      v8 = v30;
      v5 = 1;
    }
  }
  MiUnlockWorkingSetShared(v9, v25);
  return v5;
}
