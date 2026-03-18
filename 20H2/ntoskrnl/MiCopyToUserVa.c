/*
 * XREFs of MiCopyToUserVa @ 0x140234540
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140629C60 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiLockPageAndSetDirty @ 0x14029F10C (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(unsigned __int64 a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v5; // rdi
  int v6; // r12d
  char v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 CloneAddress; // rax
  __int64 v12; // rdx
  int v13; // edi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 ValidPte; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  char v25; // [rsp+30h] [rbp-68h]
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
  v7 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
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
      LOBYTE(v8) = v25;
      MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v8);
      goto LABEL_2;
    }
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFLL;
    v32 = 48 * v9 - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v32) )
      break;
    v31 = 0LL;
    if ( (*(_QWORD *)(v10 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v10 + 8) <= 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
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
            LOBYTE(v12) = v25;
            MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v12);
            v13 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v13 < 0 )
              goto LABEL_39;
            v6 = 1;
            v27 = 1;
            v7 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
            v5 = v29;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v29;
    LODWORD(v28) = MiCopyOnWrite(a1, v29, -1LL, 0LL);
    if ( (int)v28 >= 0 )
    {
      v28 = MI_READ_PTE_LOCK_FREE(v5);
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFLL;
      v32 = 48 * v9 - 0x58000000000LL;
      if ( v31 )
        v6 = 0;
      v27 = v6;
      break;
    }
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v30);
    LOBYTE(v16) = v25;
    MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v16);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessorsPadding[6], (unsigned int)v28);
    MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  }
  v14 = MiReservePtes(&qword_140C4EDC0, 1LL);
  if ( v14 )
  {
    v29 = (__int64)(v14 << 25) >> 16;
    ValidPte = MiMakeValidPte(v14, v9, 2684354564LL);
    v28 = ValidPte;
    v26 = 0;
    v18 = ValidPte;
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
      {
        v26 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
LABEL_28:
          if ( (ValidPte & 1) != 0 )
            v18 = ValidPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_28;
      }
    }
    *(_QWORD *)v14 = v18;
    if ( v26 )
      MiWritePteShadow(v14, v18);
    v15 = v29;
    goto LABEL_33;
  }
  v15 = MiMapPageInHyperSpaceWorker(v9, 0LL, 0x80000000LL);
LABEL_33:
  memmove((void *)(v15 + (a1 & 0xFFF)), a3, a4);
  if ( v14 )
    MiReleasePtes(&qword_140C4EDC0, v14, 1LL);
  else
    MiUnmapPageInHyperSpaceWorker(v15, 0x11u, 0x80000000);
  MiLockPageAndSetDirty(v32, 1LL);
  v23 = v30;
  if ( v30 )
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v30);
  LOBYTE(v23) = v25;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v23);
  v13 = 0;
  v6 = v27;
LABEL_39:
  if ( v6 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v13;
}
