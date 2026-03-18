/*
 * XREFs of MiReleaseLargePteMappings @ 0x1405524EC
 * Callers:
 *     MiEmptyPteBins @ 0x14023E170 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  int v18; // r13d
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  int v21; // r12d
  __int64 v22; // r8
  bool v23; // zf
  _KPROCESS *v24; // rdx
  unsigned int v25; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 v28; // [rsp+20h] [rbp-158h]
  char *v29; // [rsp+28h] [rbp-150h]
  __int64 v30; // [rsp+30h] [rbp-148h]
  unsigned __int64 v31; // [rsp+38h] [rbp-140h]
  unsigned __int64 v32; // [rsp+40h] [rbp-138h]
  _DWORD *v33; // [rsp+48h] [rbp-130h]
  unsigned __int64 v34; // [rsp+50h] [rbp-128h]
  __int64 v35; // [rsp+58h] [rbp-120h]
  __int64 v36; // [rsp+60h] [rbp-118h]
  _QWORD v37[24]; // [rsp+70h] [rbp-108h] BYREF

  v33 = a2;
  memset(v37, 0, 0xB8uLL);
  v6 = (unsigned int)a2[1];
  v7 = 0LL;
  v8 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v37[3] = 0LL;
  v35 = v8 - 0x98000000000LL;
  LODWORD(v37[1]) = 20;
  v9 = 0LL;
  v36 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v29 = AnyMultiplexedVm;
  do
  {
    v12 = v10 + 8 * v6;
    v13 = MI_READ_PTE_LOCK_FREE(v12);
    if ( (v13 & 0xF000) == 0x1000 )
    {
      v14 = 1LL;
    }
    else
    {
      v15 = MI_READ_PTE_LOCK_FREE(v12 + 8);
      if ( qword_140C4DDC0 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= ~qword_140C4DDC0;
      }
      v14 = HIDWORD(v15);
    }
    if ( qword_140C4DDC0 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C4DDC0;
    }
    v6 = HIDWORD(v13);
    v30 = v14 + v7;
    v34 = v14 << 21;
    v16 = (((__int64)((v12 << 25) - v9) >> 16 << 25) - v9) >> 16;
    v32 = v16;
    v31 = v6;
    v17 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v28 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v17, 0LL);
    v18 = 0;
    if ( v14 )
    {
      v19 = (__int64)v29;
      while ( 1 )
      {
        v20 = ZeroPte;
        v21 = 0;
        if ( MiPteInShadowRange(v12) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C4DE88) )
            {
              v23 = (ZeroPte & 1) == 0;
              goto LABEL_21;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v23 = (ZeroPte & 1) == 0;
LABEL_21:
            if ( !v23 )
              v20 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v12 = v20;
        if ( v21 )
          MiWritePteShadow(v12, v20, v22);
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)v37, 1u, v12);
        v12 += 8LL;
        if ( (v12 & 0xFFF) == 0 && (unsigned int)(v18 + 1) < v14 )
        {
          MiUnlockPageTableInternal(v19, v17);
          v17 += 8LL;
          MiLockPageTableInternal(v19, v17, 0LL);
        }
        if ( (unsigned int)++v18 >= v14 )
        {
          v6 = v31;
          v16 = v32;
          AnyMultiplexedVm = v29;
          break;
        }
      }
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v17);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v28);
    if ( a3 )
    {
      MiFlushTbList((unsigned int *)v37, v24);
      if ( v6 )
      {
        _InterlockedOr(v27, 0);
        v25 = KiTbFlushTimeStamp - *v33;
        a3 = v25 <= 2 && ((*v33 & 1) != 0 || v25 < 2);
      }
    }
    MiReturnSystemVa(v16, v16 + v34, 13);
    v10 = v35;
    v7 = v30;
    v9 = v36;
  }
  while ( v6 );
  return v30;
}
