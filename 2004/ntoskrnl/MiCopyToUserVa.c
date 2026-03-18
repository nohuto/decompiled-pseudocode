/*
 * XREFs of MiCopyToUserVa @ 0x1402548D0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140607760 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
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
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 CloneAddress; // rax
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // r9
  ULONG_PTR v17; // r12
  ULONG_PTR *v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 ValidPte; // rax
  char v21; // di
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  char v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+34h] [rbp-64h]
  int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h]
  __int64 v35; // [rsp+58h] [rbp-40h]
  __int64 v36; // [rsp+60h] [rbp-38h]
  _KPROCESS *v37; // [rsp+68h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = v5;
  v6 = 0;
  v31 = 0;
LABEL_2:
  v7 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
LABEL_3:
  v29 = v7;
  while ( 1 )
  {
    v34 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v5, 0);
    v32 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v32 & 1) == 0 )
    {
      MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v34);
      LOBYTE(v8) = v29;
      MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v8);
      goto LABEL_2;
    }
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
    v36 = 48 * v9 - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v36) )
      break;
    v35 = 0LL;
    if ( (*(_QWORD *)(v10 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v10 + 8) <= 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
        v35 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 360) <= *(_QWORD *)(CloneAddress + 96) )
          {
            v35 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v34);
            LOBYTE(v14) = v29;
            MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v14);
            v15 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v15 < 0 )
              goto LABEL_39;
            v6 = 1;
            v31 = 1;
            v7 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
            v5 = v33;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v33;
    LODWORD(v32) = MiCopyOnWrite(a1, (ULONG_PTR *)v33, -1LL, 0);
    if ( (int)v32 >= 0 )
    {
      v32 = MI_READ_PTE_LOCK_FREE(v5);
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
      v36 = 48 * v9 - 0x58000000000LL;
      if ( v35 )
        v6 = 0;
      v31 = v6;
      break;
    }
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v34);
    LOBYTE(v19) = v29;
    MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v19);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessorsPadding[6], (unsigned int)v32);
    MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  }
  v17 = MiReservePtes((__int64)&qword_140C4ED40, 1u, v11, v12);
  if ( v17 )
  {
    v33 = (__int64)(v17 << 25) >> 16;
    ValidPte = MiMakeValidPte(v17, v9, 2684354564LL, v16);
    v21 = ValidPte;
    v32 = ValidPte;
    v30 = 0;
    v22 = ValidPte;
    if ( MiPteInShadowRange(v17) )
    {
      if ( (unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
      {
        v30 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
LABEL_28:
          if ( (v21 & 1) != 0 )
            v22 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_28;
      }
    }
    *(_QWORD *)v17 = v22;
    if ( v30 )
      MiWritePteShadow(v17, v22);
    v18 = (ULONG_PTR *)v33;
    goto LABEL_33;
  }
  v18 = (ULONG_PTR *)MiMapPageInHyperSpaceWorker(v9, 0LL, 0x80000000LL);
LABEL_33:
  memmove((char *)v18 + (a1 & 0xFFF), a3, a4);
  if ( v17 )
    MiReleasePtes(&qword_140C4ED40, v17, 1LL);
  else
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, 0x11u, 0x80000000);
  MiLockPageAndSetDirty(v36, 1LL);
  v27 = v34;
  if ( v34 )
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v34);
  LOBYTE(v27) = v29;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v27);
  v15 = 0;
  v6 = v31;
LABEL_39:
  if ( v6 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v15;
}
