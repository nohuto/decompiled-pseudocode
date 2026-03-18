/*
 * XREFs of MiScrubLargeMappedPage @ 0x14055DF98
 * Callers:
 *     MiScrubProcessLargePages @ 0x14055EA04 (MiScrubProcessLargePages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiMakePageBad @ 0x14055DE44 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x14055DF68 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x14055E804 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  volatile __int64 *v14; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // edi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  _KPROCESS *v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // r12
  unsigned __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  volatile __int64 *v33; // rcx
  unsigned __int8 v35; // [rsp+20h] [rbp-178h]
  char v36; // [rsp+21h] [rbp-177h]
  unsigned __int64 v37; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-168h]
  __int64 v39; // [rsp+38h] [rbp-160h] BYREF
  int v40; // [rsp+40h] [rbp-158h]
  int v41; // [rsp+44h] [rbp-154h]
  unsigned __int64 valid; // [rsp+48h] [rbp-150h]
  unsigned __int64 v43; // [rsp+50h] [rbp-148h]
  unsigned __int64 v44; // [rsp+58h] [rbp-140h]
  unsigned __int64 v45; // [rsp+60h] [rbp-138h]
  __int64 v46; // [rsp+68h] [rbp-130h]
  __int64 v47; // [rsp+70h] [rbp-128h]
  __int64 v48; // [rsp+80h] [rbp-118h]
  _QWORD v49[24]; // [rsp+90h] [rbp-108h] BYREF

  v46 = a1;
  v48 = a1;
  memset(v49, 0, 0xB8uLL);
  v5 = 1;
  LODWORD(v49[0]) = 1;
  WORD2(v49[0]) = 0;
  v49[2] = 0LL;
  LODWORD(v49[1]) = 20;
  v49[3] = 0LL;
  v36 = 0;
  v38 = 0LL;
  v6 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
  v7 = ((((unsigned __int64)*(unsigned int *)(a3 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v43 = v7;
  v8 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v45 = v8;
  v9 = a2 + 1664;
  v47 = v9;
  v35 = MiLockWorkingSetShared(v9);
  while ( v7 <= v8 )
  {
    v37 = v7;
    v44 = 0LL;
    valid = MiLockLowestValidPageTable(v9, v7, &v37);
    v10 = v8;
    if ( v37 != v7 )
      v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(v37);
      v13 = v11;
      v39 = v11;
      if ( v11 )
        break;
      v38 = 0LL;
      v14 = (volatile __int64 *)(v37 + 8);
      v37 = (unsigned __int64)v14;
      if ( ((unsigned __int16)v14 & 0xFFF) == 0 )
        break;
    }
    while ( (unsigned __int64)v14 <= v10 );
    if ( v11 )
    {
      if ( (v11 & 1) != 0 && (v11 & 0x80u) != 0LL )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v39)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v39 >> 3) & 0x1FF));
            v17 = v13 | 0x20;
            if ( (v16 & 0x20) == 0 )
              v17 = v13;
            v13 = v17;
            if ( (v16 & 0x42) != 0 )
              v13 = v17 | 0x42;
          }
        }
        v18 = (v13 >> 12) & 0xFFFFFFFFFLL;
        v19 = 1;
        v20 = 512LL;
        v21 = (__int64)(((__int64)((v37 << 25) - v44) >> 16 << 25) - v44) >> 16;
        while ( v21 >= 0xFFFFF68000000000uLL && v21 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v21 = (__int64)((v21 << 25) - v44) >> 16;
          v20 <<= 9;
          ++v19;
        }
        MiRewritePteWithLockBit(v9, (volatile __int64 *)v37, ZeroPte);
        v39 &= 0xCFFFFFFFFFFFFFFFuLL;
        MiInsertTbFlushEntry((__int64)v49, (__int64)(v7 << 25) >> 16 << 25 >> 16, 1LL, v19);
        MiFlushTbList((__int64)v49, v22);
        v23 = v38 & -(__int64)(v38 < v20);
        v38 = v23;
        v41 = 0;
        v24 = 48 * (v18 + v20) - 0x58000000000LL;
        v44 = v24;
        v25 = 48 * (v23 + v18) - 0x58000000000LL;
        v26 = valid;
        while ( v25 < v24 )
        {
          v38 = ++v23;
          if ( *(_WORD *)(v25 + 32) == 2 )
          {
            v27 = v46;
            if ( (int)MiScrubPage(v46, v25, 0LL, 1LL) < 0 )
              MiMakePageBad(v25, 1LL, v28, v29);
            if ( MiWorkingSetIsContended(v9)
              || (unsigned int)MiPageTableLockIsContended(v9, v26)
              || KeShouldYieldProcessor() )
            {
              v41 = 1;
              break;
            }
            if ( MiScrubInterrupted(v27) )
            {
              v36 = 1;
              break;
            }
            v24 = v44;
            v23 = v38;
          }
          v25 += 48LL;
        }
        v30 = v39 | 0x20;
        v39 = v30;
        v40 = 0;
        v31 = v30;
        if ( MiPteInShadowRange(v37) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v40 = 1;
            if ( HIBYTE(word_140C4DF48) )
              goto LABEL_46;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_46;
          }
          if ( (v30 & 1) != 0 )
            v31 = v30 | 0x8000000000000000uLL;
        }
LABEL_46:
        v33 = (volatile __int64 *)v37;
        *(_QWORD *)v37 = v31;
        if ( v40 )
          MiWritePteShadow((__int64)v33, v31);
        MiUnlockPageTableInternal(v9, valid, v32);
        if ( v25 == v44 )
        {
          v7 += 8 * (v20 >> 9);
          v43 = v7;
          v38 = 0LL;
        }
        if ( v36 == 1 )
        {
          v5 = 0;
          break;
        }
        v8 = v45;
        v5 = 1;
        if ( v41 )
        {
          MiUnlockWorkingSetShared(v9, v35);
          MiLockWorkingSetShared(v9);
        }
      }
      else
      {
        MiUnlockPageTableInternal(v9, valid, v12);
        MiUnlockWorkingSetShared(v9, v35);
        v5 = 1;
        MiLockWorkingSetShared(v9);
      }
    }
    else
    {
      MiUnlockPageTableInternal(v9, valid, v12);
      v7 = ((MiGetLeafVa(v37) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v43 = v7;
      v5 = 1;
    }
  }
  MiUnlockWorkingSetShared(v9, v35);
  return v5;
}
