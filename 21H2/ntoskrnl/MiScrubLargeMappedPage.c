/*
 * XREFs of MiScrubLargeMappedPage @ 0x140563CC8
 * Callers:
 *     MiScrubProcessLargePages @ 0x140564734 (MiScrubProcessLargePages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x140563C98 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  volatile __int64 *v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // edi
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rcx
  _KPROCESS *v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  ULONG_PTR v26; // r12
  unsigned __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r8
  _DWORD *v30; // r9
  __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  volatile __int64 *v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  unsigned __int8 v41; // [rsp+20h] [rbp-178h]
  char v42; // [rsp+21h] [rbp-177h]
  unsigned __int64 v43; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v44; // [rsp+30h] [rbp-168h]
  __int64 v45; // [rsp+38h] [rbp-160h] BYREF
  int v46; // [rsp+40h] [rbp-158h]
  int v47; // [rsp+44h] [rbp-154h]
  unsigned __int64 valid; // [rsp+48h] [rbp-150h]
  unsigned __int64 v49; // [rsp+50h] [rbp-148h]
  unsigned __int64 v50; // [rsp+58h] [rbp-140h]
  unsigned __int64 v51; // [rsp+60h] [rbp-138h]
  __int64 v52; // [rsp+68h] [rbp-130h]
  __int64 v53; // [rsp+70h] [rbp-128h]
  __int64 v54; // [rsp+80h] [rbp-118h]
  _QWORD v55[24]; // [rsp+90h] [rbp-108h] BYREF

  v52 = a1;
  v54 = a1;
  memset(v55, 0, 0xB8uLL);
  v5 = 1;
  LODWORD(v55[0]) = 1;
  WORD2(v55[0]) = 0;
  v55[2] = 0LL;
  LODWORD(v55[1]) = 20;
  v55[3] = 0LL;
  v42 = 0;
  v44 = 0LL;
  v6 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
  v7 = ((((unsigned __int64)*(unsigned int *)(a3 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v49 = v7;
  v8 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v51 = v8;
  v9 = a2 + 1664;
  v53 = v9;
  v41 = MiLockWorkingSetShared(v9, 0xFFFFF6FB40000000uLL, v10, v11);
  while ( v7 <= v8 )
  {
    v43 = v7;
    v50 = 0LL;
    valid = MiLockLowestValidPageTable(v9, v7, &v43);
    v12 = v8;
    if ( v43 != v7 )
      v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v13 = MI_READ_PTE_LOCK_FREE(v43);
      v14 = v13;
      v45 = v13;
      if ( v13 )
        break;
      v44 = 0LL;
      v15 = (volatile __int64 *)(v43 + 8);
      v43 = (unsigned __int64)v15;
      if ( ((unsigned __int16)v15 & 0xFFF) == 0 )
        break;
    }
    while ( (unsigned __int64)v15 <= v12 );
    if ( v13 )
    {
      if ( (v13 & 1) != 0 && (v13 & 0x80u) != 0LL )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v45)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v17 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF));
            v18 = v14 | 0x20;
            if ( (v17 & 0x20) == 0 )
              v18 = v14;
            v14 = v18;
            if ( (v17 & 0x42) != 0 )
              v14 = v18 | 0x42;
          }
        }
        v19 = (v14 >> 12) & 0xFFFFFFFFFLL;
        v20 = 1;
        v21 = 512LL;
        v22 = (__int64)(((__int64)((v43 << 25) - v50) >> 16 << 25) - v50) >> 16;
        while ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v22 = (__int64)((v22 << 25) - v50) >> 16;
          v21 <<= 9;
          ++v20;
        }
        MiRewritePteWithLockBit(v9, (volatile __int64 *)v43, ZeroPte);
        v45 &= 0xCFFFFFFFFFFFFFFFuLL;
        MiInsertTbFlushEntry((__int64)v55, (__int64)(v7 << 25) >> 16 << 25 >> 16, 1LL, v20);
        MiFlushTbList((__int64)v55, v23);
        v24 = v44 & -(__int64)(v44 < v21);
        v44 = v24;
        v47 = 0;
        v25 = 48 * (v19 + v21) - 0x58000000000LL;
        v50 = v25;
        v26 = 48 * (v24 + v19) - 0x58000000000LL;
        v27 = valid;
        while ( v26 < v25 )
        {
          v44 = ++v24;
          if ( *(_WORD *)(v26 + 32) == 2 )
          {
            v28 = v52;
            if ( (int)MiScrubPage(v52, v26, 0LL, 1LL) < 0 )
              MiMakePageBad(v26, 1LL, v29, v30);
            if ( MiWorkingSetIsContended(v9)
              || (unsigned int)MiPageTableLockIsContended(v9, v27)
              || KeShouldYieldProcessor() )
            {
              v47 = 1;
              break;
            }
            if ( MiScrubInterrupted(v28) )
            {
              v42 = 1;
              break;
            }
            v25 = v50;
            v24 = v44;
          }
          v26 += 48LL;
        }
        v31 = v45 | 0x20;
        v45 = v31;
        v46 = 0;
        v32 = v31;
        if ( MiPteInShadowRange(v43) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v46 = 1;
            if ( HIBYTE(word_140C4E048) )
              goto LABEL_46;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_46;
          }
          if ( (v31 & 1) != 0 )
            v32 = v31 | 0x8000000000000000uLL;
        }
LABEL_46:
        v33 = (volatile __int64 *)v43;
        *(_QWORD *)v43 = v32;
        if ( v46 )
          MiWritePteShadow((__int64)v33, v32);
        MiUnlockPageTableInternal(v9, valid);
        if ( v26 == v50 )
        {
          v7 += 8 * (v21 >> 9);
          v49 = v7;
          v44 = 0LL;
        }
        if ( v42 == 1 )
        {
          v5 = 0;
          break;
        }
        v8 = v51;
        v5 = 1;
        if ( v47 )
        {
          MiUnlockWorkingSetShared(v9, v41);
          MiLockWorkingSetShared(v9, v35, v36, v37);
        }
      }
      else
      {
        MiUnlockPageTableInternal(v9, valid);
        MiUnlockWorkingSetShared(v9, v41);
        v5 = 1;
        MiLockWorkingSetShared(v9, v38, v39, v40);
      }
    }
    else
    {
      MiUnlockPageTableInternal(v9, valid);
      v7 = ((MiGetLeafVa(v43) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v49 = v7;
      v5 = 1;
    }
  }
  MiUnlockWorkingSetShared(v9, v41);
  return v5;
}
