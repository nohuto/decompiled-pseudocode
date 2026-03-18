/*
 * XREFs of MiScrubLargeMappedPage @ 0x140561FB8
 * Callers:
 *     MiScrubProcessLargePages @ 0x140562A24 (MiScrubProcessLargePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiRewritePteWithLockBit @ 0x1403B54A8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiMakePageBad @ 0x140561E64 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x140561F88 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x140562824 (MiScrubPage.c)
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
  unsigned __int64 v12; // rbx
  volatile __int64 *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // edi
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rcx
  _KPROCESS *v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  ULONG_PTR v24; // r12
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  volatile __int64 *v32; // rcx
  unsigned __int8 v34; // [rsp+20h] [rbp-178h]
  char v35; // [rsp+21h] [rbp-177h]
  unsigned __int64 v36; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-168h]
  __int64 v38; // [rsp+38h] [rbp-160h] BYREF
  int v39; // [rsp+40h] [rbp-158h]
  int v40; // [rsp+44h] [rbp-154h]
  unsigned __int64 valid; // [rsp+48h] [rbp-150h]
  unsigned __int64 v42; // [rsp+50h] [rbp-148h]
  unsigned __int64 v43; // [rsp+58h] [rbp-140h]
  unsigned __int64 v44; // [rsp+60h] [rbp-138h]
  __int64 v45; // [rsp+68h] [rbp-130h]
  __int64 v46; // [rsp+70h] [rbp-128h]
  __int64 v47; // [rsp+80h] [rbp-118h]
  _QWORD v48[24]; // [rsp+90h] [rbp-108h] BYREF

  v45 = a1;
  v47 = a1;
  memset(v48, 0, 0xB8uLL);
  v5 = 1;
  LODWORD(v48[0]) = 1;
  WORD2(v48[0]) = 0;
  v48[2] = 0LL;
  LODWORD(v48[1]) = 20;
  v48[3] = 0LL;
  v35 = 0;
  v37 = 0LL;
  v6 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
  v7 = ((((unsigned __int64)*(unsigned int *)(a3 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v42 = v7;
  v8 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v44 = v8;
  v9 = a2 + 1664;
  v46 = v9;
  v34 = MiLockWorkingSetShared(v9);
  while ( v7 <= v8 )
  {
    v36 = v7;
    v43 = 0LL;
    valid = MiLockLowestValidPageTable(v9, v7, &v36);
    v10 = v8;
    if ( v36 != v7 )
      v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(v36);
      v12 = v11;
      v38 = v11;
      if ( v11 )
        break;
      v37 = 0LL;
      v13 = (volatile __int64 *)(v36 + 8);
      v36 = (unsigned __int64)v13;
      if ( ((unsigned __int16)v13 & 0xFFF) == 0 )
        break;
    }
    while ( (unsigned __int64)v13 <= v10 );
    if ( v11 )
    {
      if ( (v11 & 1) != 0 && (v11 & 0x80u) != 0LL )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v38)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v15 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF));
            v16 = v12 | 0x20;
            if ( (v15 & 0x20) == 0 )
              v16 = v12;
            v12 = v16;
            if ( (v15 & 0x42) != 0 )
              v12 = v16 | 0x42;
          }
        }
        v17 = (v12 >> 12) & 0xFFFFFFFFFLL;
        v18 = 1;
        v19 = 512LL;
        v20 = (__int64)(((__int64)((v36 << 25) - v43) >> 16 << 25) - v43) >> 16;
        while ( v20 >= 0xFFFFF68000000000uLL && v20 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v20 = (__int64)((v20 << 25) - v43) >> 16;
          v19 <<= 9;
          ++v18;
        }
        MiRewritePteWithLockBit(v9, (volatile __int64 *)v36, ZeroPte);
        v38 &= 0xCFFFFFFFFFFFFFFFuLL;
        MiInsertTbFlushEntry((__int64)v48, (__int64)(v7 << 25) >> 16 << 25 >> 16, 1LL, v18);
        MiFlushTbList((unsigned int *)v48, v21);
        v22 = v37 & -(__int64)(v37 < v19);
        v37 = v22;
        v40 = 0;
        v23 = 48 * (v17 + v19) - 0x58000000000LL;
        v43 = v23;
        v24 = 48 * (v22 + v17) - 0x58000000000LL;
        v25 = valid;
        while ( v24 < v23 )
        {
          v37 = ++v22;
          if ( *(_WORD *)(v24 + 32) == 2 )
          {
            v26 = v45;
            if ( (int)MiScrubPage(v45, v24, 0LL, 1LL) < 0 )
              MiMakePageBad(v24, 1LL, v27, v28);
            if ( MiWorkingSetIsContended(v9)
              || (unsigned int)MiPageTableLockIsContended(v9, v25)
              || KeShouldYieldProcessor() )
            {
              v40 = 1;
              break;
            }
            if ( MiScrubInterrupted(v26) )
            {
              v35 = 1;
              break;
            }
            v23 = v43;
            v22 = v37;
          }
          v24 += 48LL;
        }
        v29 = v38 | 0x20;
        v38 = v29;
        v39 = 0;
        v30 = v29;
        if ( MiPteInShadowRange(v36) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v39 = 1;
            if ( HIBYTE(word_140C4DE88) )
              goto LABEL_46;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_46;
          }
          if ( (v29 & 1) != 0 )
            v30 = v29 | 0x8000000000000000uLL;
        }
LABEL_46:
        v32 = (volatile __int64 *)v36;
        *(_QWORD *)v36 = v30;
        if ( v39 )
          MiWritePteShadow((__int64)v32, v30, v31);
        MiUnlockPageTableInternal(v9, valid);
        if ( v24 == v43 )
        {
          v7 += 8 * (v19 >> 9);
          v42 = v7;
          v37 = 0LL;
        }
        if ( v35 == 1 )
        {
          v5 = 0;
          break;
        }
        v8 = v44;
        v5 = 1;
        if ( v40 )
        {
          MiUnlockWorkingSetShared(v9, v34);
          MiLockWorkingSetShared(v9);
        }
      }
      else
      {
        MiUnlockPageTableInternal(v9, valid);
        MiUnlockWorkingSetShared(v9, v34);
        v5 = 1;
        MiLockWorkingSetShared(v9);
      }
    }
    else
    {
      MiUnlockPageTableInternal(v9, valid);
      v7 = ((MiGetLeafVa(v36) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v42 = v7;
      v5 = 1;
    }
  }
  MiUnlockWorkingSetShared(v9, v34);
  return v5;
}
