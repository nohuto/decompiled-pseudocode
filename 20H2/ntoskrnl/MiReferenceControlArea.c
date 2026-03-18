/*
 * XREFs of MiReferenceControlArea @ 0x14029FAA4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveControlArea @ 0x14029F474 (MiReferenceActiveControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     MiValidateControlAreaPartition @ 0x14029F6AC (MiValidateControlAreaPartition.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  bool v3; // zf
  struct _FILE_OBJECT *v6; // rax
  __int64 *SectionObjectPointer; // r14
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  int v14; // r15d
  _QWORD *active; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  ULONG_PTR v21; // r15
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // r9
  int v28; // eax
  _DWORD *v29; // r8
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  int v32; // eax
  _DWORD *v33; // r8
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  int v36; // eax
  _DWORD *v37; // r8
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r9
  int v40; // eax
  _DWORD *v41; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v44; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v46; // [rsp+20h] [rbp-30h] BYREF
  __int128 v47; // [rsp+30h] [rbp-20h] BYREF
  char *v48; // [rsp+40h] [rbp-10h]
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v3 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v48 = 0LL;
  v6 = *(struct _FILE_OBJECT **)(a1 + 56);
  v46 = 0LL;
  FileObject = v6;
  v47 = 0LL;
  SectionObjectPointer = (__int64 *)v6->SectionObjectPointer;
  if ( !v3 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140C4C800);
    v12 = *SectionObjectPointer;
    v13 = v8;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a2;
      v17 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0LL);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v3 = (v44 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v44;
            if ( v3 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v12 + 72, v9, v10, v11) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v3 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(v13);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  v14 = MiValidateControlAreaPartition(a1, v12);
  if ( v14 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v29 = v27->SchedulerAssist;
          v3 = (v28 & v29[5]) == 0;
          v29[5] &= v28;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
LABEL_55:
    __writecr8(v13);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v14;
  }
  else
  {
    if ( !(*(_DWORD *)(v12 + 56) & 1 | ((*(_DWORD *)(v12 + 56) & 2) != 0)) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
        && (*(_DWORD *)(a1 + 20) & 0x100000) != 0
        && !(unsigned int)MiControlAreaRequiresCharge(v12) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v37 = v35->SchedulerAssist;
              v3 = (v36 & v37[5]) == 0;
              v37[5] &= v36;
              if ( v3 )
                KiRemoveSystemWorkPriorityKick(v35);
            }
          }
        }
        v14 = -1073740277;
        goto LABEL_55;
      }
      active = (_QWORD *)MiReferenceActiveControlArea((_DWORD *)a1, v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v41 = v39->SchedulerAssist;
            v3 = (v40 & v41[5]) == 0;
            v41[5] &= v40;
            if ( v3 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v13);
      MiReleaseControlAreaWaiters(active);
      *a3 = v12;
      return 0LL;
    }
    v18 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0LL);
    v21 = v18;
    if ( v18 )
      KeAbPreWait(v18, v19, v20);
    DWORD1(v47) = 0;
    v48 = (char *)&v47 + 8;
    LOWORD(v47) = 263;
    *((_QWORD *)&v47 + 1) = (char *)&v47 + 8;
    BYTE2(v47) = 6;
    DWORD2(v46) = 1;
    *(_QWORD *)&v46 = *(_QWORD *)(v12 + 80);
    *(_QWORD *)(v12 + 80) = &v46;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v33 = v31->SchedulerAssist;
          v3 = (v32 & v33[5]) == 0;
          v33[5] &= v32;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(v13);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate(&v47, 18LL);
    if ( v21 )
    {
      KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, v21, 0LL);
      KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer, v21);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
