/*
 * XREFs of MmFreeLoaderBlock @ 0x140A4C7D0
 * Callers:
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiWriteWsle @ 0x1402C0ED0 (MiWriteWsle.c)
 *     MiMarkPfnTradable @ 0x1402E51A8 (MiMarkPfnTradable.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDeleteBootRange @ 0x1403B5178 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MmFreeBootRegistry @ 0x14079F85C (MmFreeBootRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     MiFreeRegistryPageRange @ 0x140A4CD08 (MiFreeRegistryPageRange.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int8 v13; // al
  __int64 *v14; // rsi
  char *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 *v18; // rcx
  _QWORD *v19; // rbx
  unsigned int v20; // eax
  int v21; // edx
  _QWORD *i; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r12
  __int64 v30; // rbx
  _KPROCESS *v31; // rdx
  unsigned __int64 v32; // r14
  __int64 v33; // rdi
  unsigned __int64 v34; // r13
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rcx
  char WsleContents; // al
  __int64 v42; // rcx
  char v43; // di
  int v44; // ebp
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r13
  __int64 v48; // rbp
  struct _LIST_ENTRY *Flink; // rdx
  bool v50; // zf
  unsigned __int8 v51; // [rsp+20h] [rbp-168h]
  unsigned int v52; // [rsp+24h] [rbp-164h]
  __int64 v53; // [rsp+28h] [rbp-160h]
  BOOL v54; // [rsp+30h] [rbp-158h]
  __int64 TransitionPte; // [rsp+38h] [rbp-150h] BYREF
  __int64 v56; // [rsp+40h] [rbp-148h]
  unsigned __int64 v57; // [rsp+48h] [rbp-140h]
  unsigned __int64 *v58; // [rsp+50h] [rbp-138h]
  __int64 v59; // [rsp+58h] [rbp-130h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-128h]
  _QWORD *v61; // [rsp+68h] [rbp-120h]
  __int64 v62; // [rsp+70h] [rbp-118h]
  __int64 v63; // [rsp+78h] [rbp-110h]
  __int64 *v64; // [rsp+80h] [rbp-108h]
  _QWORD v65[24]; // [rsp+90h] [rbp-F8h] BYREF

  memset(v65, 0, 0xB8uLL);
  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v56 = 0LL;
  v1 = 0;
  v53 = 0LL;
  v2 = 0LL;
  v64 = v0;
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
    v52 = v1;
    if ( v2 )
    {
      Pool = MiAllocatePool(64, 8 * v2 + 8, 0x624D6D4Du);
      v61 = Pool;
      v8 = (signed __int64)Pool;
      if ( Pool )
      {
        *Pool = v2;
        v65[3] = 0LL;
        v58 = Pool + 1;
        LODWORD(v65[1]) = 20;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v9 = AnyMultiplexedVm;
        v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v10, v11, v12);
        v14 = (__int64 *)*v0;
        v51 = v13;
        if ( (__int64 *)*v0 != v0 )
        {
          v15 = AnyMultiplexedVm;
          while ( *((_DWORD *)v14 + 4) != 19 || !v14[4] )
          {
LABEL_14:
            v14 = (__int64 *)*v14;
            if ( v14 == v0 )
            {
              v8 = (signed __int64)v61;
              v9 = AnyMultiplexedVm;
              v1 = v52;
              v13 = v51;
              goto LABEL_16;
            }
          }
          v57 = 0LL;
          v29 = 0LL;
          v63 = v14[3];
          v30 = v63;
          v62 = 0LL;
          v54 = MiPteInShadowRange((unsigned __int64)&TransitionPte);
          v32 = v57;
          v33 = 48 * v30 - 0x58000000000LL;
          v59 = v33;
          while ( 1 )
          {
            v34 = *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL;
            v35 = v58;
            v36 = (__int64)((v34 << 25) - v62) >> 16;
            *v58 = v36;
            v58 = v35 + 1;
            v57 = v36;
            v37 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v29 != v37 )
            {
              if ( v29 )
              {
                MiFlushTbList((__int64)v65, v31);
                MiFreeRegistryPageRange(v56, v53);
                MiUnlockPageTableInternal((__int64)v15, v29);
              }
              v29 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              MiLockPageTableInternal((__int64)v15, v37, 0LL);
            }
            TransitionPte = MI_READ_PTE_LOCK_FREE(v34);
            v38 = TransitionPte;
            MiMarkPfnTradable(v33, 0LL, v39);
            WsleContents = MiGetWsleContents(v40, v36);
            MiWriteWsle(v42, v36, WsleContents & 0xF0 | 0xA);
            if ( v54
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v38 & 1) != 0
              && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
                  v38 |= 0x20uLL;
              }
            }
            TransitionPte = MiMakeTransitionPte((v38 >> 12) & 0xFFFFFFFFFLL, 4);
            v43 = TransitionPte;
            v44 = 0;
            v45 = TransitionPte;
            if ( !MiPteInShadowRange(v34) )
              goto LABEL_41;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v50 = (v43 & 1) == 0;
                goto LABEL_65;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v50 = (v43 & 1) == 0;
LABEL_65:
              if ( !v50 )
                v45 |= 0x8000000000000000uLL;
            }
LABEL_41:
            *(_QWORD *)v34 = v45;
            if ( v44 )
              MiWritePteShadow(v34, v45, v46);
            if ( HIDWORD(v65[1]) )
            {
              v47 = v56;
              v48 = v53 + 1;
            }
            else
            {
              v48 = 1LL;
              v47 = v32 + v63;
              v56 = v32 + v63;
            }
            v53 = v48;
            MiInsertTbFlushEntry((__int64)v65, v57, 1LL, 0);
            ++v32;
            v33 = v59 + 48;
            v59 += 48LL;
            if ( v32 >= v14[4] )
            {
              v0 = v64;
              MiFlushTbList((__int64)v65, v31);
              MiFreeRegistryPageRange(v47, v48);
              MiUnlockPageTableInternal((__int64)v15, v29);
              goto LABEL_14;
            }
          }
        }
LABEL_16:
        MiUnlockWorkingSetShared((__int64)v9, v13);
        if ( _InterlockedCompareExchange64(&qword_140C4EED0, v8, 0LL) )
        {
          qword_140C4EED0 = v8;
          MmFreeBootRegistry();
        }
      }
    }
  }
  v16 = MiAllocatePool(64, 16LL * v1, 0x624D6D4Du);
  v17 = v16;
  if ( v16 )
  {
    v18 = (__int64 *)*v0;
    v19 = v16;
    if ( (__int64 *)*v0 != v0 )
    {
      do
      {
        v20 = *((_DWORD *)v18 + 4);
        if ( v20 <= 0x15 )
        {
          v21 = 2113664;
          if ( _bittest(&v21, v20) )
          {
            if ( v18[4] )
            {
              *v19 = v18[3];
              v19[1] = v18[4];
              v19 += 2;
            }
          }
        }
        v18 = (__int64 *)*v18;
      }
      while ( v18 != v0 );
      if ( v19 != v17 )
      {
        for ( i = v19 - 2; i >= v17; i -= 2 )
        {
          v23 = 48LL * *i;
          v24 = i[1];
          v25 = (_QWORD *)(v23 - 0x57FFFFFFFF8LL);
          v26 = *(_QWORD *)(v23 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v24 )
          {
            v25 += 6;
            v26 += 8LL;
            if ( (*v25 | 0x8000000000000000uLL) != v26 )
            {
              v27 = *(_QWORD *)(v23 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v28 = (__int64)(v26 - v27) >> 3;
              MiDeleteBootRange(v27, v28, v23);
              i[1] -= v28;
              *i += v28;
              i += 2;
              if ( v28 )
                goto LABEL_30;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *i - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, i[1], v23);
LABEL_30:
          ;
        }
      }
    }
    ExFreePoolWithTag(v17, 0);
  }
}
