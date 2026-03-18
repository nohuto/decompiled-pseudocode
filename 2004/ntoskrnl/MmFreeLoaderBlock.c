/*
 * XREFs of MmFreeLoaderBlock @ 0x140A44F90
 * Callers:
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWriteWsle @ 0x1402E0090 (MiWriteWsle.c)
 *     MiMarkPfnTradable @ 0x1402E5148 (MiMarkPfnTradable.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MmFreeBootRegistry @ 0x14078762C (MmFreeBootRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     MiFreeRegistryPageRange @ 0x140A454C8 (MiFreeRegistryPageRange.c)
 */

void MmFreeLoaderBlock()
{
  __int64 *v0; // r14
  unsigned int v1; // r12d
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *Pool; // rax
  signed __int64 v8; // r15
  char *v9; // rbx
  unsigned __int8 v10; // al
  __int64 *v11; // rsi
  char *v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 *v15; // rcx
  _QWORD *v16; // rbx
  unsigned int v17; // eax
  int v18; // edx
  _QWORD *i; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  _KPROCESS *v28; // rdx
  unsigned __int64 v29; // r14
  __int64 v30; // rdi
  unsigned __int64 v31; // r13
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  __int64 v36; // rcx
  char WsleContents; // al
  __int64 v38; // rcx
  char v39; // di
  int v40; // ebp
  __int64 v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r13
  __int64 v44; // rbp
  struct _LIST_ENTRY *Flink; // rdx
  bool v46; // zf
  unsigned __int8 v47; // [rsp+20h] [rbp-168h]
  unsigned int v48; // [rsp+24h] [rbp-164h]
  __int64 v49; // [rsp+28h] [rbp-160h]
  BOOL v50; // [rsp+30h] [rbp-158h]
  __int64 TransitionPte; // [rsp+38h] [rbp-150h] BYREF
  __int64 v52; // [rsp+40h] [rbp-148h]
  unsigned __int64 v53; // [rsp+48h] [rbp-140h]
  unsigned __int64 *v54; // [rsp+50h] [rbp-138h]
  __int64 v55; // [rsp+58h] [rbp-130h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-128h]
  _QWORD *v57; // [rsp+68h] [rbp-120h]
  __int64 v58; // [rsp+70h] [rbp-118h]
  __int64 v59; // [rsp+78h] [rbp-110h]
  __int64 *v60; // [rsp+80h] [rbp-108h]
  _QWORD v61[24]; // [rsp+90h] [rbp-F8h] BYREF

  memset(v61, 0, 0xB8uLL);
  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v52 = 0LL;
  v1 = 0;
  v49 = 0LL;
  v2 = 0LL;
  v60 = v0;
  v3 = *(__int64 **)(KeLoaderBlock_0 + 32);
  if ( (__int64 *)*v0 != v0 )
  {
    do
    {
      v4 = v3[4];
      v5 = v2;
      if ( v4 )
      {
        v6 = *((_DWORD *)v3 + 4);
        v2 += v4;
        if ( v6 != 19 )
          v2 = v5;
        if ( v6 == 7 || v6 == 21 || v6 == 14 )
          ++v1;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v0 );
    v48 = v1;
    if ( v2 )
    {
      Pool = MiAllocatePool(64, 8 * v2 + 8, 0x624D6D4Du);
      v57 = Pool;
      v8 = (signed __int64)Pool;
      if ( Pool )
      {
        *Pool = v2;
        v61[3] = 0LL;
        v54 = Pool + 1;
        LODWORD(v61[1]) = 20;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v9 = AnyMultiplexedVm;
        v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v11 = (__int64 *)*v0;
        v47 = v10;
        if ( (__int64 *)*v0 != v0 )
        {
          v12 = AnyMultiplexedVm;
          while ( *((_DWORD *)v11 + 4) != 19 || !v11[4] )
          {
LABEL_14:
            v11 = (__int64 *)*v11;
            if ( v11 == v0 )
            {
              v8 = (signed __int64)v57;
              v9 = AnyMultiplexedVm;
              v1 = v48;
              v10 = v47;
              goto LABEL_16;
            }
          }
          v53 = 0LL;
          v26 = 0LL;
          v59 = v11[3];
          v27 = v59;
          v58 = 0LL;
          v50 = MiPteInShadowRange((unsigned __int64)&TransitionPte);
          v29 = v53;
          v30 = 48 * v27 - 0x58000000000LL;
          v55 = v30;
          while ( 1 )
          {
            v31 = *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL;
            v32 = v54;
            v33 = (__int64)((v31 << 25) - v58) >> 16;
            *v54 = v33;
            v54 = v32 + 1;
            v53 = v33;
            v34 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v26 != v34 )
            {
              if ( v26 )
              {
                MiFlushTbList((__int64)v61, v28);
                MiFreeRegistryPageRange(v52, v49);
                MiUnlockPageTableInternal((__int64)v12, v26);
              }
              v26 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              MiLockPageTableInternal((__int64)v12, v34, 0LL);
            }
            TransitionPte = MI_READ_PTE_LOCK_FREE(v31);
            v35 = TransitionPte;
            MiMarkPfnTradable(v30, 0);
            WsleContents = MiGetWsleContents(v36, v33);
            MiWriteWsle(v38, v33, WsleContents & 0xF0 | 0xA);
            if ( v50
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v35 & 1) != 0
              && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
                  v35 |= 0x20uLL;
              }
            }
            TransitionPte = MiMakeTransitionPte((v35 >> 12) & 0xFFFFFFFFFLL, 4);
            v39 = TransitionPte;
            v40 = 0;
            v41 = TransitionPte;
            if ( !MiPteInShadowRange(v31) )
              goto LABEL_41;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v40 = 1;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v46 = (v39 & 1) == 0;
                goto LABEL_65;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v46 = (v39 & 1) == 0;
LABEL_65:
              if ( !v46 )
                v41 |= 0x8000000000000000uLL;
            }
LABEL_41:
            *(_QWORD *)v31 = v41;
            if ( v40 )
              MiWritePteShadow(v31, v41, v42);
            if ( HIDWORD(v61[1]) )
            {
              v43 = v52;
              v44 = v49 + 1;
            }
            else
            {
              v44 = 1LL;
              v43 = v29 + v59;
              v52 = v29 + v59;
            }
            v49 = v44;
            MiInsertTbFlushEntry((__int64)v61, v53, 1LL, 0);
            ++v29;
            v30 = v55 + 48;
            v55 += 48LL;
            if ( v29 >= v11[4] )
            {
              v0 = v60;
              MiFlushTbList((__int64)v61, v28);
              MiFreeRegistryPageRange(v43, v44);
              MiUnlockPageTableInternal((__int64)v12, v26);
              goto LABEL_14;
            }
          }
        }
LABEL_16:
        MiUnlockWorkingSetShared((__int64)v9, v10);
        if ( _InterlockedCompareExchange64(&qword_140C4ECD0, v8, 0LL) )
        {
          qword_140C4ECD0 = v8;
          MmFreeBootRegistry();
        }
      }
    }
  }
  v13 = MiAllocatePool(64, 16LL * v1, 0x624D6D4Du);
  v14 = v13;
  if ( v13 )
  {
    v15 = (__int64 *)*v0;
    v16 = v13;
    if ( (__int64 *)*v0 != v0 )
    {
      do
      {
        v17 = *((_DWORD *)v15 + 4);
        if ( v17 <= 0x15 )
        {
          v18 = 2113664;
          if ( _bittest(&v18, v17) )
          {
            if ( v15[4] )
            {
              *v16 = v15[3];
              v16[1] = v15[4];
              v16 += 2;
            }
          }
        }
        v15 = (__int64 *)*v15;
      }
      while ( v15 != v0 );
      if ( v16 != v14 )
      {
        for ( i = v16 - 2; i >= v14; i -= 2 )
        {
          v20 = 48LL * *i;
          v21 = i[1];
          v22 = (_QWORD *)(v20 - 0x57FFFFFFFF8LL);
          v23 = *(_QWORD *)(v20 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v21 )
          {
            v22 += 6;
            v23 += 8LL;
            if ( (*v22 | 0x8000000000000000uLL) != v23 )
            {
              v24 = *(_QWORD *)(v20 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v25 = (__int64)(v23 - v24) >> 3;
              MiDeleteBootRange(v24, v25, v20);
              i[1] -= v25;
              *i += v25;
              i += 2;
              if ( v25 )
                goto LABEL_30;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *i - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, i[1], v20);
LABEL_30:
          ;
        }
      }
    }
    ExFreePoolWithTag(v14, 0);
  }
}
