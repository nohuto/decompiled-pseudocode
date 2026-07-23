/*
 * XREFs of MiFreePhysicalPages @ 0x14054C184
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14021F710 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDecrementAweMapCount @ 0x14054BC28 (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x14054D240 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054E238 (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x14054E274 (MiUpdateAwePageTable.c)
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
  __int64 v11; // r8
  const signed __int64 *v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // rbx
  unsigned __int128 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
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
  __int64 v35; // [rsp+70h] [rbp-118h]
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
    goto LABEL_42;
  v13 = (_DWORD *)0xFFFFF68000000000LL;
  while ( 1 )
  {
    v33 = *v4;
    v14 = *v4;
    *(_QWORD *)&v15 = *v4 / v31;
    *((_QWORD *)&v15 + 1) = *v4 % v31;
    v34 = v15;
    if ( v15 >= (unsigned __int64)v11 )
      break;
    if ( !_bittest64(v12, v15) )
      break;
    *((_QWORD *)&v15 + 1) = 48 * v33 - 0x58000000000LL;
    v27 = *((_QWORD *)&v15 + 1);
    if ( (*(_QWORD *)(*((_QWORD *)&v15 + 1) + 24LL) & 0x4000000000000000LL) != 0 )
      break;
    v16 = *(_QWORD *)(*((_QWORD *)&v15 + 1) + 24LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v16 != 1 && (*(_DWORD *)v3 & 1) != 0 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL);
      v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v6 != v18 )
      {
        if ( v6 )
        {
          MiFlushTbList((__int64)v37, *((_KPROCESS **)&v15 + 1));
          MiUnlockPageTableInternal(v10, v6);
        }
        v6 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v24 == 17 )
          v24 = MiLockWorkingSetShared(v10, *((__int64 *)&v15 + 1), v11, v13);
        MiLockPageTableInternal(v10, v18, 0);
      }
      v19 = ZeroPte;
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
            v19 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v19 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v20 = 0;
LABEL_25:
      *(_QWORD *)v17 = v19;
      if ( v20 )
        MiWritePteShadow(v17, v19);
      MiUpdateAwePageTable(v6, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)v37, (__int64)(v17 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v21, v27, (__int64 *)MmBadPointer, 0LL);
      *((_QWORD *)&v15 + 1) = v27;
      v3 = a1;
      v14 = v33;
    }
    if ( !MiDecrementAweMapCount(v16, *((__int64 *)&v15 + 1), (__int64 *)MmBadPointer, (_DWORD *)1) )
    {
      *v7++ = v14;
      _bittestandreset64(v29, v34);
    }
    v22 = ++v25;
    if ( v24 != 17
      && (v22 & 0x3F) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v6) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList((__int64)v37, *((_KPROCESS **)&v15 + 1));
      MiUnlockPageTableInternal(v10, v6);
      MiUnlockWorkingSetShared(v10, v24);
      v6 = 0LL;
      v24 = 17;
    }
    v12 = v29;
    ++v4;
    v11 = v35;
    v13 = (_DWORD *)0xFFFFF68000000000LL;
    if ( (unsigned __int64)v4 >= v28 )
      goto LABEL_39;
  }
  v5 = -1073741800;
LABEL_39:
  if ( v6 )
  {
    MiFlushTbList((__int64)v37, *((_KPROCESS **)&v15 + 1));
    MiUnlockPageTableInternal(v10, v6);
    MiUnlockWorkingSetShared(v10, v24);
  }
  CurrentThread = v30;
LABEL_42:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v26 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v5;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v7 - a2 - 48) >> 3;
  return result;
}
