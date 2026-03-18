/*
 * XREFs of MiCopyToUserVa @ 0x1402AD900
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14063C8B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(unsigned __int64 a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v5; // rdi
  int v6; // r12d
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 CloneAddress; // rax
  int v13; // edi
  __int64 v14; // r9
  ULONG_PTR v15; // r12
  ULONG_PTR *v16; // rbx
  unsigned __int64 ValidPte; // rax
  char v18; // di
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int8 v25; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+34h] [rbp-64h]
  int v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  __int64 v32; // [rsp+60h] [rbp-38h]
  _KPROCESS *v33; // [rsp+68h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = v5;
  v6 = 0;
  v27 = 0;
LABEL_2:
  v7 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
LABEL_3:
  v25 = v7;
  while ( 1 )
  {
    v30 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v5, 0);
    v28 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v28 & 1) == 0 )
    {
      MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v30);
      MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v25);
      goto LABEL_2;
    }
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
    v32 = 48 * v8 - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v32, v9, v10) )
      break;
    v31 = 0LL;
    if ( (*(_QWORD *)(v11 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v11 + 8) <= 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
        v31 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 360) <= *(_QWORD *)(CloneAddress + 96) )
          {
            v31 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v30);
            MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v25);
            v13 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v13 < 0 )
              goto LABEL_39;
            v6 = 1;
            v27 = 1;
            v7 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
            v5 = v29;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v29;
    LODWORD(v28) = MiCopyOnWrite(a1, (ULONG_PTR *)v29, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( (int)v28 >= 0 )
    {
      v28 = MI_READ_PTE_LOCK_FREE(v5);
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
      v32 = 48 * v8 - 0x58000000000LL;
      if ( v31 )
        v6 = 0;
      v27 = v6;
      break;
    }
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v30);
    MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v25);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessorsPadding[6], (unsigned int)v28);
    MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  }
  v15 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  if ( v15 )
  {
    v29 = (__int64)(v15 << 25) >> 16;
    ValidPte = MiMakeValidPte(v15, v8, 2684354564LL, v14);
    v18 = ValidPte;
    v28 = ValidPte;
    v26 = 0;
    v19 = ValidPte;
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow(v21, v20) )
      {
        v26 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
LABEL_28:
          if ( (v18 & 1) != 0 )
            v19 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_28;
      }
    }
    *(_QWORD *)v15 = v19;
    if ( v26 )
      MiWritePteShadow(v15, v19);
    v16 = (ULONG_PTR *)v29;
    goto LABEL_33;
  }
  v16 = (ULONG_PTR *)MiMapPageInHyperSpaceWorker(v8, 0LL, 0x80000000LL, v14);
LABEL_33:
  memmove((char *)v16 + (a1 & 0xFFF), a3, a4);
  if ( v15 )
  {
    MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v15, 1u);
  }
  else
  {
    LOBYTE(v22) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, v22, 0x80000000);
  }
  MiLockPageAndSetDirty(v32, 1LL, v23);
  if ( v30 )
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v30);
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v25);
  v13 = 0;
  v6 = v27;
LABEL_39:
  if ( v6 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v13;
}
