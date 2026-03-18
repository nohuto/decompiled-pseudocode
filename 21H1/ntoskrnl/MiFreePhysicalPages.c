/*
 * XREFs of MiFreePhysicalPages @ 0x140546424
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDecrementAweMapCount @ 0x140545EC8 (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x1405474E0 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405484D8 (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x140548514 (MiUpdateAwePageTable.c)
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
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 result; // rax
  unsigned __int8 v29; // [rsp+20h] [rbp-168h]
  int v30; // [rsp+28h] [rbp-160h]
  int v31; // [rsp+2Ch] [rbp-15Ch]
  __int64 v32; // [rsp+30h] [rbp-158h]
  unsigned __int64 v33; // [rsp+38h] [rbp-150h]
  signed __int64 *v34; // [rsp+40h] [rbp-148h]
  struct _KTHREAD *v35; // [rsp+48h] [rbp-140h]
  unsigned __int64 v36; // [rsp+50h] [rbp-138h]
  __int64 v38; // [rsp+60h] [rbp-128h]
  unsigned __int64 v39; // [rsp+68h] [rbp-120h]
  unsigned __int64 v40; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  _QWORD v42[24]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a1;
  memset(v42, 0, 0xB8uLL);
  LODWORD(v42[0]) = 1;
  WORD2(v42[0]) = 0;
  v4 = (__int64 *)(a2 + 48);
  v42[2] = 0LL;
  v5 = 0;
  v42[3] = 0LL;
  v6 = 0LL;
  v30 = 0;
  v7 = (_QWORD *)(a2 + 48);
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  LODWORD(v42[1]) = 20;
  CurrentThread = KeGetCurrentThread();
  v29 = 17;
  v35 = CurrentThread;
  v33 = a2 + 48 + 8 * v8;
  v36 = *(_QWORD *)(v3 + 8);
  v10 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v31 = *(_DWORD *)v3 & 1;
  if ( v31 )
    MiLockAweVadsExclusive(CurrentThread);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v3 + 56;
  ExAcquireAutoExpandPushLockExclusive(v3 + 56, 0LL);
  v11 = *(_QWORD *)(v3 + 16);
  v12 = *(const signed __int64 **)(v3 + 24);
  v40 = v11;
  v34 = (signed __int64 *)v12;
  if ( (unsigned __int64)v4 >= v33 )
    goto LABEL_41;
  while ( 1 )
  {
    v38 = *v4;
    v13 = *v4;
    *(_QWORD *)&v14 = *v4 / v36;
    *((_QWORD *)&v14 + 1) = *v4 % v36;
    v39 = v14;
    if ( v14 >= v11 )
      break;
    if ( !_bittest64(v12, v14) )
      break;
    *((_QWORD *)&v14 + 1) = 48 * v38 - 0x58000000000LL;
    v32 = *((_QWORD *)&v14 + 1);
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
          MiFlushTbList((__int64)v42, *((_KPROCESS **)&v14 + 1));
          MiUnlockPageTableInternal(v10, v6, v18);
        }
        v6 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v29 == 17 )
          v29 = MiLockWorkingSetShared(v10);
        MiLockPageTableInternal(v10, v17, 0LL);
      }
      v19 = ZeroPte;
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
            v19 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_24;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v19 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v20 = 0;
LABEL_24:
      *(_QWORD *)v16 = v19;
      if ( v20 )
        MiWritePteShadow(v16, v19);
      MiUpdateAwePageTable(v6, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)v42, (__int64)(v16 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v21, v32, (__int64 *)MmBadPointer, 0LL);
      *((_QWORD *)&v14 + 1) = v32;
      v3 = a1;
      v13 = v38;
    }
    if ( !MiDecrementAweMapCount(v15, *((__int64 *)&v14 + 1), (__int64 *)MmBadPointer, (_DWORD *)1) )
    {
      *v7++ = v13;
      _bittestandreset64(v34, v39);
    }
    v22 = ++v30;
    if ( v29 != 17
      && (v22 & 0x3F) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v6) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList((__int64)v42, *((_KPROCESS **)&v14 + 1));
      MiUnlockPageTableInternal(v10, v6, v23);
      MiUnlockWorkingSetShared(v10, v29);
      v6 = 0LL;
      v29 = 17;
    }
    v12 = v34;
    ++v4;
    v11 = v40;
    if ( (unsigned __int64)v4 >= v33 )
      goto LABEL_38;
  }
  v5 = -1073741800;
LABEL_38:
  if ( v6 )
  {
    MiFlushTbList((__int64)v42, *((_KPROCESS **)&v14 + 1));
    MiUnlockPageTableInternal(v10, v6, v24);
    MiUnlockWorkingSetShared(v10, v29);
  }
  CurrentThread = v35;
LABEL_41:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v25, v26, v27);
  if ( v31 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v5;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v7 - a2 - 48) >> 3;
  return result;
}
