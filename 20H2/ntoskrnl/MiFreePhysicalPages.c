/*
 * XREFs of MiFreePhysicalPages @ 0x14054A444
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1403052B0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1403060F0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiDecrementAweMapCount @ 0x140549EE8 (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x14054B500 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054C4F8 (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x14054C534 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiFreePhysicalPages(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 *v4; // rdi
  unsigned int v5; // r12d
  unsigned __int64 v6; // r14
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rbp
  unsigned __int64 v11; // r8
  const signed __int64 *v12; // rcx
  __int64 v13; // rbx
  unsigned __int128 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  __int64 result; // rax
  unsigned __int8 v24; // [rsp+20h] [rbp-168h]
  int v25; // [rsp+28h] [rbp-160h]
  int v26; // [rsp+2Ch] [rbp-15Ch]
  __int64 v27; // [rsp+30h] [rbp-158h]
  unsigned __int64 v28; // [rsp+38h] [rbp-150h]
  signed __int64 *v29; // [rsp+40h] [rbp-148h]
  struct _KTHREAD *v30; // [rsp+48h] [rbp-140h]
  unsigned __int64 v31; // [rsp+50h] [rbp-138h]
  __int64 v33; // [rsp+60h] [rbp-128h]
  unsigned __int64 v34; // [rsp+68h] [rbp-120h]
  unsigned __int64 v35; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  _QWORD v37[24]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a1;
  memset(v37, 0, 0xB8uLL);
  LODWORD(v37[0]) = 1;
  WORD2(v37[0]) = 0;
  v4 = (__int64 *)(a2 + 48);
  v37[2] = 0LL;
  v5 = 0;
  v37[3] = 0LL;
  v6 = 0LL;
  v25 = 0;
  v7 = (_QWORD *)(a2 + 48);
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  LODWORD(v37[1]) = 20;
  CurrentThread = KeGetCurrentThread();
  v24 = 17;
  v30 = CurrentThread;
  v28 = a2 + 48 + 8 * v8;
  v31 = *(_QWORD *)(v3 + 8);
  v10 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v26 = *(_DWORD *)v3 & 1;
  if ( v26 )
    MiLockAweVadsExclusive(CurrentThread);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v3 + 56;
  ExAcquireAutoExpandPushLockExclusive(v3 + 56, 0LL);
  v11 = *(_QWORD *)(v3 + 16);
  v12 = *(const signed __int64 **)(v3 + 24);
  v35 = v11;
  v29 = (signed __int64 *)v12;
  if ( (unsigned __int64)v4 >= v28 )
    goto LABEL_41;
  while ( 1 )
  {
    v33 = *v4;
    v13 = *v4;
    *(_QWORD *)&v14 = *v4 / v31;
    *((_QWORD *)&v14 + 1) = *v4 % v31;
    v34 = v14;
    if ( v14 >= v11 )
      break;
    if ( !_bittest64(v12, v14) )
      break;
    *((_QWORD *)&v14 + 1) = 48 * v33 - 0x58000000000LL;
    v27 = *((_QWORD *)&v14 + 1);
    if ( (*(_QWORD *)(*((_QWORD *)&v14 + 1) + 24LL) & 0x4000000000000000LL) != 0 )
      break;
    v15 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 24LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v15 != 1 && (*(_DWORD *)v3 & 1) != 0 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL);
      v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v6 != v17 )
      {
        if ( v6 )
        {
          MiFlushTbList((unsigned int *)v37, *((_KPROCESS **)&v14 + 1));
          MiUnlockPageTableInternal(v10, v6);
        }
        v6 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v24 == 17 )
          v24 = MiLockWorkingSetShared(v10);
        MiLockPageTableInternal(v10, v17, 0LL);
      }
      v18 = ZeroPte;
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
            v18 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_24;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v18 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v20 = 0;
LABEL_24:
      *(_QWORD *)v16 = v18;
      if ( v20 )
        MiWritePteShadow(v16, v18, v19);
      MiUpdateAwePageTable(v6, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)v37, (__int64)(v16 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v21, v27, (__int64 *)MmBadPointer, 0LL);
      *((_QWORD *)&v14 + 1) = v27;
      v3 = a1;
      v13 = v33;
    }
    if ( !MiDecrementAweMapCount(v15, *((__int64 *)&v14 + 1), (__int64 *)MmBadPointer, (_DWORD *)1) )
    {
      *v7++ = v13;
      _bittestandreset64(v29, v34);
    }
    v22 = ++v25;
    if ( v24 != 17
      && (v22 & 0x3F) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v6) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList((unsigned int *)v37, *((_KPROCESS **)&v14 + 1));
      MiUnlockPageTableInternal(v10, v6);
      MiUnlockWorkingSetShared(v10, v24);
      v6 = 0LL;
      v24 = 17;
    }
    v12 = v29;
    ++v4;
    v11 = v35;
    if ( (unsigned __int64)v4 >= v28 )
      goto LABEL_38;
  }
  v5 = -1073741800;
LABEL_38:
  if ( v6 )
  {
    MiFlushTbList((unsigned int *)v37, *((_KPROCESS **)&v14 + 1));
    MiUnlockPageTableInternal(v10, v6);
    MiUnlockWorkingSetShared(v10, v24);
  }
  CurrentThread = v30;
LABEL_41:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v26 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v5;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v7 - a2 - 48) >> 3;
  return result;
}
