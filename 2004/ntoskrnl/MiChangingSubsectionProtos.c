/*
 * XREFs of MiChangingSubsectionProtos @ 0x14053A448
 * Callers:
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C8A4 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14053D104 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // r14d
  unsigned int v5; // ebx
  volatile LONG *v8; // r12
  unsigned __int64 v9; // rdi
  bool v10; // zf
  int v11; // edx
  __int64 **v12; // r14
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v23; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  int v28; // eax
  _DWORD *v29; // r8
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // edx
  _DWORD *v34; // r9
  __int64 v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  int v39; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 0x10;
  v36 = *BugCheckParameter2;
  v5 = 0;
  v39 = v4;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( v4 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v10 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v10 )
        break;
    }
    v11 = a2 & 8;
    *(_DWORD *)(a3 + 8) = v11 != 0 ? 0x40 : 0;
    if ( (a2 & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) |= 0x100u;
    if ( v4 )
      *(_DWORD *)(a3 + 8) |= 0x80u;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      v5 = -1073741302;
      goto LABEL_68;
    }
    v37 = 0LL;
    v12 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      v12 = (*(_DWORD *)(v3 + 56) & 0x20) != 0 ? *(__int64 ***)(v3 + 80) : (__int64 **)BugCheckParameter2[3];
      if ( v12 )
      {
        do
        {
          if ( ((_DWORD)v12[1] & 0x40) == 0 )
            break;
          v12 = (__int64 **)*v12;
        }
        while ( v12 );
        if ( v12 )
        {
          v37 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
          if ( v37 )
            KeAbPreWait(v37);
          v11 = a2 & 8;
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v36 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v36 + 80);
      *(_QWORD *)(v36 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( v11 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags )
        goto LABEL_68;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_68;
      v31 = KeGetCurrentIrql();
      if ( v31 > 0xFu )
        goto LABEL_68;
      if ( (unsigned __int8)v9 > 0xFu )
        goto LABEL_68;
      if ( v31 < 2u )
        goto LABEL_68;
      v32 = KeGetCurrentPrcb();
      v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v34 = v32->SchedulerAssist;
      v10 = (v33 & v34[5]) == 0;
      v34[5] &= v33;
      if ( !v10 )
        goto LABEL_68;
      v30 = (__int64)v32;
      goto LABEL_67;
    }
    if ( !v12 )
    {
      v25 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags )
        goto LABEL_68;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_68;
      v26 = KeGetCurrentIrql();
      if ( v26 > 0xFu )
        goto LABEL_68;
      if ( (unsigned __int8)v9 > 0xFu )
        goto LABEL_68;
      if ( v26 < 2u )
        goto LABEL_68;
      v27 = KeGetCurrentPrcb();
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v29 = v27->SchedulerAssist;
      v10 = (v28 & v29[5]) == 0;
      v29[5] &= v28;
      if ( !v10 )
        goto LABEL_68;
      v30 = (__int64)v27;
LABEL_67:
      KiRemoveSystemWorkPriorityKick(v30);
      goto LABEL_68;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v10 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
    }
    __writecr8(v9);
    KeWaitForGate(a3 + 16, 0x12u);
    v3 = v36;
    v4 = v39;
    if ( v37 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, v37, 0);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v37);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v20 = v18->SchedulerAssist;
        v10 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
  }
  v5 = -1073740748;
LABEL_68:
  __writecr8(v9);
  return v5;
}
