/*
 * XREFs of MiSectionCreated @ 0x140267074
 * Callers:
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceControlAreaPfn @ 0x14025F72C (MiReferenceControlAreaPfn.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiReturnPfnReferenceCount @ 0x14035CB94 (MiReturnPfnReferenceCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v15; // rdx
  __int64 *v16; // r13
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int16 v22; // ax
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // edx
  unsigned int v34; // [rsp+20h] [rbp-68h]
  unsigned int v35; // [rsp+24h] [rbp-64h]
  int v36; // [rsp+28h] [rbp-60h]
  int v37; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+40h] [rbp-48h]
  __int64 *v42; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v43; // [rsp+A8h] [rbp+20h] BYREF

  v42 = a3;
  v3 = (volatile LONG *)(a2 + 72);
  v43 = 0;
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
    v25 = *(_QWORD *)(v9 + 80);
    v40 = 0LL;
    *(_QWORD *)(v6 + 80) = v25;
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v40 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(v6 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C780);
  v11 = *(__int64 **)(a1 + 40);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    v11[2] = v6;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
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
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v24 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    v13 = *(_QWORD *)(v6 + 136);
    v14 = *(_DWORD *)(v6 + 172);
    v39 = v13;
    v34 = v14;
    while ( 1 )
    {
      if ( !v5 )
        return v40;
      if ( (*((_BYTE *)v5 + 10) & 4) != 0 )
        goto LABEL_31;
      MmUnmapLockedPages((PVOID)v5[3], (PMDL)v5);
      v16 = v5 + 6;
      v17 = 0LL;
      v35 = *((_DWORD *)v5 + 4);
      v15 = v35;
      v36 = *((_DWORD *)v5 + 10) >> 12;
      v18 = v13 + 8LL * v35;
      v43 = 17;
      v38 = 0LL;
      if ( !v36 )
        goto LABEL_31;
      do
      {
        v19 = *v16;
        v20 = 48 * *v16 - 0x58000000000LL;
        if ( (unsigned int)v15 < v14 )
        {
          if ( (v18 & 0xFFFFFFFFFFFFF000uLL) != v17 )
          {
            if ( v17 )
            {
              LOBYTE(v15) = v43;
              MiUnlockProtoPoolPage(v38, v15);
            }
            while ( 1 )
            {
              v38 = MiLockProtoPoolPage(v18, &v43);
              if ( v38 )
                break;
              MmAccessFault(2uLL, v18);
            }
            v6 = a2;
            v17 = v18 & 0xFFFFFFFFFFFFF000uLL;
          }
          v21 = MiLockLeafPage(v18, 0LL);
          v22 = MI_READ_PTE_LOCK_FREE(v18);
          if ( v21 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v22 & 0x400) != 0 )
          {
            v37 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v37, v23);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            MiInitializeTransitionPfn(v19, v18, -1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
              MiReferenceControlAreaPfn(v6, 0LL, 1u);
            goto LABEL_26;
          }
          MiReturnPfnReferenceCount(v20);
          *v16 = -1LL;
LABEL_26:
          v14 = v34;
          goto LABEL_27;
        }
        MiReturnPfnReferenceCount(48 * *v16 - 0x58000000000LL);
        *v16 = -1LL;
LABEL_27:
        v18 += 8LL;
        v15 = v35 + 1;
        ++v16;
        v24 = v36-- == 1;
        ++v35;
      }
      while ( !v24 );
      v5 = v42;
      if ( v17 )
      {
        LOBYTE(v15) = v43;
        MiUnlockProtoPoolPage(v38, v15);
      }
      v13 = v39;
LABEL_31:
      v5 = (__int64 *)*v5;
      v42 = v5;
    }
  }
  *v11 = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  *(_DWORD *)(v6 + 56) &= ~2u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v24 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v7);
  KeAbPostRelease((ULONG_PTR)v11);
  return v40;
}
