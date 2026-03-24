/*
 * XREFs of MiCopyToUserVa @ 0x14030E538
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406E9880 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14030FA6C (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052A904 (MiReserveLowPrioritySystemPtes.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, _DWORD *a4)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v5; // rdi
  int v6; // r12d
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // dl
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 ValidPte; // rax
  char v30; // di
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 i; // [rsp+30h] [rbp-68h]
  int v39; // [rsp+34h] [rbp-64h]
  int v40; // [rsp+38h] [rbp-60h]
  __int64 v41; // [rsp+40h] [rbp-58h] BYREF
  __int64 v42; // [rsp+48h] [rbp-50h]
  __int64 v43; // [rsp+50h] [rbp-48h]
  _QWORD *v44; // [rsp+58h] [rbp-40h]
  __int64 v45; // [rsp+60h] [rbp-38h]
  _KPROCESS *v46; // [rsp+68h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v46 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = v5;
  v6 = 0;
  v40 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x3F;
LABEL_2:
  v8 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a2, (__int64)a3, a4);
LABEL_3:
  v9 = v8;
  for ( i = v8; ; v9 = i )
  {
    v43 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v5, 0LL, v7, v9, 0);
    v41 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v41 & 1) == 0 )
    {
      MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v43, v10, v11);
      MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
      goto LABEL_2;
    }
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFLL;
    v45 = 48 * v12 - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v45) )
      break;
    v44 = 0LL;
    if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v13 + 8) <= 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
        v44 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 360) <= CloneAddress[12] )
          {
            v44 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v43, v15, v16);
            MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
            v18 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v18 < 0 )
              goto LABEL_39;
            v6 = 1;
            v40 = 1;
            v8 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v17, v19, v20);
            v5 = v42;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v42;
    LODWORD(v41) = MiCopyOnWrite(a1, (ULONG_PTR *)v42, -1LL, 0);
    if ( (int)v41 >= 0 )
    {
      v41 = MI_READ_PTE_LOCK_FREE(v5);
      v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFLL;
      v45 = 48 * v12 - 0x58000000000LL;
      if ( v44 )
        v6 = 0;
      v40 = v6;
      break;
    }
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v43, v21, v22);
    MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessorsPadding[6], (unsigned int)v41);
    MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v26, v27, v28);
  }
  v24 = MiReserveLowPrioritySystemPtes(1LL);
  if ( v24 )
  {
    v42 = v24 << 25 >> 16;
    ValidPte = MiMakeValidPte(v24, v12, 2684354564LL);
    v30 = ValidPte;
    v41 = ValidPte;
    v39 = 0;
    v31 = ValidPte;
    if ( (unsigned int)MiPteInShadowRange(v24, v32) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v39 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
LABEL_28:
          if ( (v30 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_28;
      }
    }
    *(_QWORD *)v24 = v31;
    if ( v39 )
      MiWritePteShadow(v24, v31, v33);
    v25 = v42;
    goto LABEL_33;
  }
  v25 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL, v23);
LABEL_33:
  memmove((void *)(v25 + (a1 & 0xFFF)), a3, (size_t)a4);
  if ( v24 )
  {
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v24, 1u);
  }
  else
  {
    LOBYTE(v34) = 17;
    MiUnmapPageInHyperSpaceWorker(v25, v34, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v45, 1LL);
  if ( v43 )
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v43, v35, v36);
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
  v18 = 0;
  v6 = v40;
LABEL_39:
  if ( v6 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v18;
}
