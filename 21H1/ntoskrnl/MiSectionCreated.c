/*
 * XREFs of MiSectionCreated @ 0x1402C00A4
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceControlAreaPfn @ 0x1402B875C (MiReferenceControlAreaPfn.c)
 *     MiReturnPfnReferenceCount @ 0x14031F084 (MiReturnPfnReferenceCount.c)
 *     MiInitializeTransitionPfn @ 0x14034BD4C (MiInitializeTransitionPfn.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 *a3)
{
  volatile LONG *v3; // r14
  __int64 *v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rdi
  volatile LONG *v10; // rbp
  __int64 *v11; // rdi
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // r13
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  __int64 v29; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // edx
  unsigned int v38; // [rsp+20h] [rbp-68h]
  unsigned int v39; // [rsp+24h] [rbp-64h]
  int v40; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  __int64 *v46; // [rsp+A0h] [rbp+18h]
  char v47; // [rsp+A8h] [rbp+20h] BYREF

  v46 = a3;
  v3 = (volatile LONG *)(a2 + 72);
  v47 = 0;
  v5 = a3;
  v6 = a2;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(v6 + 56) |= 0x200u;
  v8 = *(__int64 **)(a1 + 40);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    v9 = v8[2];
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v29 = *(_QWORD *)(v9 + 80);
    v44 = 0LL;
    *(_QWORD *)(v6 + 80) = v29;
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v44 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(v6 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C8C0);
  v11 = *(__int64 **)(a1 + 40);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    v11[2] = v6;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v28 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    v13 = *(_QWORD *)(v6 + 136);
    v14 = *(_DWORD *)(v6 + 172);
    v43 = v13;
    v38 = v14;
    while ( 1 )
    {
      if ( !v5 )
        return v44;
      if ( (*((_BYTE *)v5 + 10) & 4) != 0 )
        goto LABEL_31;
      MmUnmapLockedPages((PVOID)v5[3], (PMDL)v5);
      v18 = v5 + 6;
      v19 = 0LL;
      v39 = *((_DWORD *)v5 + 4);
      v17 = v39;
      v40 = *((_DWORD *)v5 + 10) >> 12;
      v20 = v13 + 8LL * v39;
      v47 = 17;
      v42 = 0LL;
      if ( !v40 )
        goto LABEL_31;
      do
      {
        v21 = *v18;
        v22 = 48 * *v18 - 0x58000000000LL;
        if ( (unsigned int)v17 < v14 )
        {
          if ( (v20 & 0xFFFFFFFFFFFFF000uLL) != v19 )
          {
            if ( v19 )
            {
              LOBYTE(v17) = v47;
              MiUnlockProtoPoolPage(v42, v17, v15, v16);
            }
            while ( 1 )
            {
              v42 = MiLockProtoPoolPage(v20, (__int64)&v47);
              if ( v42 )
                break;
              MmAccessFault(2uLL, v20, 0, 0LL);
            }
            v6 = a2;
            v19 = v20 & 0xFFFFFFFFFFFFF000uLL;
          }
          v23 = MiLockLeafPage(v20, 0LL);
          v24 = MI_READ_PTE_LOCK_FREE(v20);
          if ( v23 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v24 & 0x400) != 0 )
          {
            v41 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v41, v25, v26, v27);
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
            MiInitializeTransitionPfn(v21, v20, -1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
              MiReferenceControlAreaPfn(v6, 0LL, 1u);
            goto LABEL_26;
          }
          MiReturnPfnReferenceCount(v22);
          *v18 = -1LL;
LABEL_26:
          v14 = v38;
          goto LABEL_27;
        }
        MiReturnPfnReferenceCount(48 * *v18 - 0x58000000000LL);
        *v18 = -1LL;
LABEL_27:
        v20 += 8LL;
        v17 = v39 + 1;
        ++v18;
        v28 = v40-- == 1;
        ++v39;
      }
      while ( !v28 );
      v5 = v46;
      if ( v19 )
      {
        LOBYTE(v17) = v47;
        MiUnlockProtoPoolPage(v42, v17, v15, v16);
      }
      v13 = v43;
LABEL_31:
      v5 = (__int64 *)*v5;
      v46 = v5;
    }
  }
  *v11 = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  *(_DWORD *)(v6 + 56) &= ~2u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v28 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  __writecr8(v7);
  KeAbPostRelease((ULONG_PTR)v11);
  return v44;
}
