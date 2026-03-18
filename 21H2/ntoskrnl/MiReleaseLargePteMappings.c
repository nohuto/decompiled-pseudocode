/*
 * XREFs of MiReleaseLargePteMappings @ 0x1405B585C
 * Callers:
 *     MiEmptyPteBins @ 0x140269570 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1402BBAD0 (MiInsertCachedPte.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
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
  __int64 v18; // r9
  int v19; // r13d
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  int v22; // r12d
  bool v23; // zf
  __int64 v24; // r9
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
      if ( qword_140C50780 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= ~qword_140C50780;
      }
      v14 = HIDWORD(v15);
    }
    if ( qword_140C50780 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C50780;
    }
    v6 = HIDWORD(v13);
    v30 = v14 + v7;
    v34 = v14 << 21;
    v16 = (((__int64)((v12 << 25) - v9) >> 16 << 25) - v9) >> 16;
    v32 = v16;
    v31 = v6;
    v17 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v28 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v17, 0LL, v18);
    v19 = 0;
    if ( v14 )
    {
      v20 = (__int64)v29;
      while ( 1 )
      {
        v21 = ZeroPte;
        v22 = 0;
        if ( MiPteInShadowRange(v12) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v22 = 1;
            if ( !HIBYTE(word_140C51864) )
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
              v21 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v12 = v21;
        if ( v22 )
          MiWritePteShadow(v12, v21);
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)v37, 1u, v12);
        v12 += 8LL;
        if ( (v12 & 0xFFF) == 0 && (unsigned int)(v19 + 1) < v14 )
        {
          MiUnlockPageTableInternal(v20, v17);
          v17 += 8LL;
          MiLockPageTableInternal(v20, v17, 0LL, v24);
        }
        if ( (unsigned int)++v19 >= v14 )
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
      MiFlushTbList((__int64)v37);
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
