/*
 * XREFs of MiCopyToUserVa @ 0x14028DF40
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140700460 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r13
  unsigned __int64 v5; // r15
  int v6; // r12d
  int v7; // ebx
  char v8; // al
  int v9; // r9d
  char v10; // dl
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 ValidPte; // rax
  char v17; // di
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // edi
  int v24; // eax
  _QWORD *CloneAddress; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  char i; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+34h] [rbp-54h]
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h]
  __int64 v34; // [rsp+50h] [rbp-38h]
  _KPROCESS *v35; // [rsp+58h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
LABEL_2:
  v8 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
LABEL_3:
  v10 = v8;
  for ( i = v8; ; v10 = i )
  {
    v32 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v9) = v10;
    MiMakeSystemAddressValid(v5, 0, v7, v9, 0);
    v31 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v31 & 1) == 0 )
    {
      MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v32);
      LOBYTE(v28) = i;
      MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v28);
      goto LABEL_2;
    }
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v31) >> 12) & 0xFFFFFFFFFFLL;
    v12 = 48 * v11 - 0x220000000000LL;
    v34 = v12;
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 >= 0 )
      goto LABEL_6;
    v33 = 0LL;
    if ( (v13 & 0x10000000000LL) != 0 || *(__int64 *)(v12 + 8) <= 0 )
    {
      if ( Process[1].Affinity.StaticBitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        v33 = (__int64)CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 344) <= CloneAddress[12] )
          {
            v33 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v32);
            LOBYTE(v26) = i;
            MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v26);
            v22 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v22 < 0 )
              goto LABEL_16;
            v6 = 1;
            v8 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
            goto LABEL_3;
          }
        }
      }
    }
    LODWORD(v31) = MiCopyOnWrite(a1);
    if ( (int)v31 >= 0 )
      break;
    MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v32);
    LOBYTE(v27) = i;
    MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v27);
    MiCopyOnWriteCheckConditions(&Process[1].ActiveProcessors.StaticBitmap[26], (unsigned int)v31);
    MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  }
  v31 = MI_READ_PTE_LOCK_FREE(v5);
  v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v31) >> 12) & 0xFFFFFFFFFFLL;
  v34 = 48 * v11 - 0x220000000000LL;
  v24 = 0;
  if ( !v33 )
    v24 = v6;
  v6 = v24;
LABEL_6:
  v14 = MiReservePtes(&qword_140C534C0, 1LL);
  v15 = (_QWORD *)v14;
  if ( v14 )
  {
    v33 = v14 << 25 >> 16;
    ValidPte = MiMakeValidPte(v14, v11, 2684354564LL);
    v17 = ValidPte;
    v31 = ValidPte;
    v30 = 0;
    v18 = ValidPte;
    if ( !(unsigned int)MiPteInShadowRange(v15) )
    {
LABEL_8:
      *v15 = v18;
      if ( v30 )
        MiWritePteShadow((__int64)v15, v18);
      v19 = v33;
      goto LABEL_11;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v30 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( (v17 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_8;
  }
  v19 = MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000LL);
LABEL_11:
  memmove((void *)(v19 + (a1 & 0xFFF)), a3, a4);
  if ( v15 )
  {
    MiReleasePtes(&qword_140C534C0, v15, 1LL);
  }
  else
  {
    LOBYTE(v20) = 17;
    MiUnmapPageInHyperSpaceWorker(v19, v20, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v34, 1LL);
  v21 = v32;
  if ( v32 )
    MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v32);
  LOBYTE(v21) = i;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v21);
  v22 = 0;
LABEL_16:
  if ( v6 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v22;
}
