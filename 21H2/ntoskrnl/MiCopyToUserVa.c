/*
 * XREFs of MiCopyToUserVa @ 0x140319288
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140700C60 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052AB44 (MiReserveLowPrioritySystemPtes.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
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
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  __int64 ValidPte; // rax
  char v29; // di
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 i; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+48h] [rbp-50h]
  __int64 v40; // [rsp+50h] [rbp-48h]
  _QWORD *v41; // [rsp+58h] [rbp-40h]
  __int64 v42; // [rsp+60h] [rbp-38h]
  _KPROCESS *v43; // [rsp+68h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v43 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = v5;
  v6 = 0;
  v37 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x3F;
LABEL_2:
  v8 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a2, (__int64)a3, a4);
LABEL_3:
  v9 = v8;
  for ( i = v8; ; v9 = i )
  {
    v40 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v5, 0LL, v7, v9, 0);
    v38 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v38 & 1) == 0 )
    {
      MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v40, v10, v11);
      MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
      goto LABEL_2;
    }
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v38) >> 12) & 0xFFFFFFFFFLL;
    v42 = 48 * v12 - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v42) )
      break;
    v41 = 0LL;
    if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v13 + 8) <= 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
        v41 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 360) <= CloneAddress[12] )
          {
            v41 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v40, v15, v16);
            MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
            v18 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v18 < 0 )
              goto LABEL_39;
            v6 = 1;
            v37 = 1;
            v8 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v17, v19, v20);
            v5 = v39;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v39;
    LODWORD(v38) = MiCopyOnWrite(a1, (ULONG_PTR *)v39, -1LL, 0);
    if ( (int)v38 >= 0 )
    {
      v38 = MI_READ_PTE_LOCK_FREE(v5);
      v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v38) >> 12) & 0xFFFFFFFFFLL;
      v42 = 48 * v12 - 0x58000000000LL;
      if ( v41 )
        v6 = 0;
      v37 = v6;
      break;
    }
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v40, v21, v22);
    MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessorsPadding[6], (unsigned int)v38);
    MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v25, v26, v27);
  }
  v23 = MiReserveLowPrioritySystemPtes(1LL);
  if ( v23 )
  {
    v39 = v23 << 25 >> 16;
    ValidPte = MiMakeValidPte(v23, v12, 2684354564LL);
    v29 = ValidPte;
    v38 = ValidPte;
    v36 = 0;
    v30 = ValidPte;
    if ( (unsigned int)MiPteInShadowRange(v23) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v36 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
LABEL_28:
          if ( (v29 & 1) != 0 )
            v30 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_28;
      }
    }
    *(_QWORD *)v23 = v30;
    if ( v36 )
      MiWritePteShadow(v23, v30);
    v24 = v39;
    goto LABEL_33;
  }
  v24 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
LABEL_33:
  memmove((void *)(v24 + (a1 & 0xFFF)), a3, (size_t)a4);
  if ( v23 )
  {
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v23, 1u);
  }
  else
  {
    LOBYTE(v31) = 17;
    MiUnmapPageInHyperSpaceWorker(v24, v31, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v42, 1LL);
  if ( v40 )
    MiUnlockPageTable(&Process[1].ActiveProcessorsPadding[6], v40, v32, v33);
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], i);
  v18 = 0;
  v6 = v37;
LABEL_39:
  if ( v6 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v18;
}
