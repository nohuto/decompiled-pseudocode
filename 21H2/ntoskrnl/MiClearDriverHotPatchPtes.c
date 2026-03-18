/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x1405A2F88
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x14026ED30 (MiWriteWsle.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int8 v9; // bl
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  bool i; // cf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  int v23; // r13d
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-CCh]
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-B0h]
  _QWORD v38[24]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v38, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v35 = 0LL;
  AnyMultiplexedVm = 0LL;
  v5 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
  {
    v7 = *(_QWORD *)(a1 + 288);
    v8 = 1LL;
    v33 = 1;
    v9 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 64);
    v33 = 0;
    v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) + 8LL * ((v10 >> 12) + ((v10 & 0xFFF) != 0)) - 0x98000000000LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v8 = 0LL;
  }
  LOBYTE(v32) = v9;
  v11 = (unsigned int)dword_140C4F478 >> 12;
  v37 = v7 + 8LL * ((unsigned int)v11 + ((dword_140C4F478 & 0xFFF) != 0));
  v38[3] = 0LL;
  LODWORD(v38[1]) = 20;
  v12 = (__int64)(v7 << 25) >> 16;
  for ( i = v7 < v37; i; i = v7 < v37 )
  {
    if ( (_DWORD)v8 )
    {
      if ( v3 )
      {
        if ( (v7 & 0xFFF) != 0 )
          goto LABEL_15;
        LOBYTE(v11) = v9;
        MiUnlockProtoPoolPage(v3, v11, v8, v6);
      }
      v14 = MiLockProtoPoolPage(v7, (__int64)&v32);
      v9 = v32;
      v35 = v14;
    }
    else
    {
      if ( v5 )
      {
        if ( (v7 & 0xFFF) != 0 )
          goto LABEL_15;
        MiFlushTbList((__int64)v38);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
      }
      v5 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((__int64)AnyMultiplexedVm, v5, 0LL, v6);
    }
LABEL_15:
    v15 = MI_READ_PTE_LOCK_FREE(v7);
    v36 = v15;
    if ( !v15 )
    {
      v8 = v33;
      goto LABEL_39;
    }
    if ( (v15 & 1) != 0 )
    {
      LOBYTE(v17) = MiGetWsleContents(v16, v12) & 0xF;
      if ( (_BYTE)v17 == 9 )
        MiWriteWsle(v17, v12);
      MiInsertTbFlushEntry((__int64)v38, v12, 1LL, 0);
      v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      LODWORD(v34) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34, v18, v20, v21);
        while ( *(__int64 *)(v19 + 24) < 0 );
      }
      MiDecrementShareCount(v19, v18, v20, v21);
    }
    else
    {
      v19 = MiLockTransitionLeafPageEx(v7, 0LL, 0);
    }
    v22 = ZeroPte;
    v23 = 0;
    if ( MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v24 = (ZeroPte & 1) == 0;
          goto LABEL_30;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v24 = (ZeroPte & 1) == 0;
LABEL_30:
        if ( !v24 )
          v22 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v22;
    if ( v23 )
      MiWritePteShadow(v7, v22);
    v25 = *(_QWORD *)(v19 + 24);
    if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x1Au,
        0x18951uLL,
        v7,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x220000000000LL) >> 4),
        *(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 6;
    *(_QWORD *)(v19 + 24) = v25 & 0xC000000000000000uLL | (v25 + 1) & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    v26 = 48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    MiLockNestedPageAtDpcInline(v26);
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v33;
    v27 = *(_QWORD *)(v19 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    *(_QWORD *)(v19 + 40) = v27;
    if ( (_DWORD)v8 )
      *(_QWORD *)(v19 + 40) = v27 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_QWORD *)(v19 + 16) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = v32;
LABEL_39:
    v3 = v35;
    v7 += 8LL;
    v12 += 4096LL;
  }
  MiFlushTbList((__int64)v38);
  if ( v33 )
  {
    LOBYTE(v28) = v9;
    return MiUnlockProtoPoolPage(v3, v28, v29, v30);
  }
  else
  {
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
  }
}
