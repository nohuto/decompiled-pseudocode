/*
 * XREFs of MiFreePhysicalPages @ 0x1405AAA4C
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDecrementAweMapCount @ 0x1405AA4C8 (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x1405AB9B8 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405AC950 (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x1405AC9A0 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiFreePhysicalPages(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r15
  _QWORD *v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  const signed __int64 *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // al
  bool v24; // zf
  __int64 result; // rax
  unsigned __int8 v26; // [rsp+20h] [rbp-168h]
  int v27; // [rsp+28h] [rbp-160h]
  int v28; // [rsp+2Ch] [rbp-15Ch]
  __int64 v29; // [rsp+38h] [rbp-150h]
  unsigned __int64 v30; // [rsp+40h] [rbp-148h]
  signed __int64 *v31; // [rsp+48h] [rbp-140h]
  unsigned __int64 v32; // [rsp+50h] [rbp-138h]
  __int64 v34; // [rsp+60h] [rbp-128h]
  unsigned __int64 v35; // [rsp+68h] [rbp-120h]
  unsigned __int64 v36; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  _QWORD v38[24]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a1;
  memset(v38, 0, 0xB8uLL);
  v4 = (__int64 *)(a2 + 48);
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  WORD2(v38[0]) = 0;
  v6 = 0;
  v38[2] = 0LL;
  v7 = 0LL;
  LODWORD(v38[1]) = 20;
  v8 = (_QWORD *)(a2 + 48);
  v38[3] = 0LL;
  v30 = a2 + 48 + 8 * v5;
  LODWORD(v38[0]) = 1;
  CurrentThread = KeGetCurrentThread();
  v32 = *(_QWORD *)(v3 + 16);
  v10 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v27 = 0;
  v26 = 17;
  if ( (*(_DWORD *)(v3 + 8) & 1) != 0 )
  {
    v28 = 1;
    MiLockAweVadsExclusive(CurrentThread);
  }
  else
  {
    v28 = 0;
  }
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v3 + 64;
  ExAcquireAutoExpandPushLockExclusive(v3 + 64, 0LL);
  v11 = *(_QWORD *)(v3 + 24);
  v12 = *(const signed __int64 **)(v3 + 32);
  v36 = v11;
  v31 = (signed __int64 *)v12;
  if ( (unsigned __int64)v4 >= v30 )
    goto LABEL_43;
  v13 = 0xFFFFF68000000000uLL;
  while ( 1 )
  {
    v34 = *v4;
    v14 = *v4;
    v15 = *v4 / v32;
    v35 = v15;
    if ( *v4 % v32 )
      break;
    if ( v15 >= v11 )
      break;
    if ( !_bittest64(v12, v15) )
      break;
    v16 = 48 * v34 - 0x220000000000LL;
    v29 = v16;
    if ( (*(_QWORD *)(v16 + 24) & 0x4000000000000000LL) != 0 )
      break;
    v17 = *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v17 != 1 && (*(_DWORD *)(v3 + 8) & 1) != 0 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v7 != v19 )
      {
        if ( v7 )
        {
          MiFlushTbList((__int64)v38);
          MiUnlockPageTableInternal(v10, v7);
        }
        v7 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v26 == 17 )
          v26 = MiLockWorkingSetShared(v10);
        MiLockPageTableInternal(v10, v19, 0LL, v13);
      }
      v20 = ZeroPte;
      if ( MiPteInShadowRange(v18) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
            v20 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_27;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v20 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v21 = 0;
LABEL_27:
      *(_QWORD *)v18 = v20;
      if ( v21 )
        MiWritePteShadow(v18, v20);
      MiUpdateAwePageTable(v7, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)v38, (__int64)(v18 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v22, v29, (__int64 *)MmBadPointer, 0);
      v16 = v29;
      v3 = a1;
      v14 = v34;
    }
    if ( !MiDecrementAweMapCount(v17, v16, (__int64 *)MmBadPointer, 1) )
    {
      *v8++ = v14;
      _bittestandreset64(v31, v35);
    }
    v23 = ++v27;
    if ( v26 != 17
      && (v23 & 0x3F) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v7) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList((__int64)v38);
      MiUnlockPageTableInternal(v10, v7);
      MiUnlockWorkingSetShared(v10, v26);
      v7 = 0LL;
      v26 = 17;
    }
    v12 = v31;
    ++v4;
    v11 = v36;
    v13 = 0xFFFFF68000000000uLL;
    if ( (unsigned __int64)v4 >= v30 )
    {
      v6 = 0;
      goto LABEL_41;
    }
  }
  v6 = -1073741800;
LABEL_41:
  if ( v7 )
  {
    MiFlushTbList((__int64)v38);
    MiUnlockPageTableInternal(v10, v7);
    MiUnlockWorkingSetShared(v10, v26);
  }
LABEL_43:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v28 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v6;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v8 - a2 - 48) >> 3;
  return result;
}
