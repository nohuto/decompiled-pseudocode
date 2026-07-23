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
  ULONG_PTR v19; // r15
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  int v30; // eax
  _DWORD *v31; // r8
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  int v34; // eax
  _DWORD *v35; // r8
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r9
  int v38; // eax
  _DWORD *v39; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v42; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v44; // [rsp+20h] [rbp-30h] BYREF
  __int128 v45; // [rsp+30h] [rbp-20h] BYREF
  char *v46; // [rsp+40h] [rbp-10h]
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v3 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v46 = 0LL;
  v6 = *(struct _FILE_OBJECT **)(a1 + 56);
  v44 = 0LL;
  FileObject = v6;
  v45 = 0LL;
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
      v17 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0);
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
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v3 = (v42 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v42;
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
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v3 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v21);
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
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v27 = v25->SchedulerAssist;
          v3 = (v26 & v27[5]) == 0;
          v27[5] &= v26;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v25);
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
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v35 = v33->SchedulerAssist;
              v3 = (v34 & v35[5]) == 0;
              v35[5] &= v34;
              if ( v3 )
                KiRemoveSystemWorkPriorityKick(v33);
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
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v39 = v37->SchedulerAssist;
            v3 = (v38 & v39[5]) == 0;
            v39[5] &= v38;
            if ( v3 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v13);
      MiReleaseControlAreaWaiters(active);
      *a3 = v12;
      return 0LL;
    }
    v18 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0);
    v19 = v18;
    if ( v18 )
      KeAbPreWait(v18);
    DWORD1(v45) = 0;
    v46 = (char *)&v45 + 8;
    LOWORD(v45) = 263;
    *((_QWORD *)&v45 + 1) = (char *)&v45 + 8;
    BYTE2(v45) = 6;
    DWORD2(v44) = 1;
    *(_QWORD *)&v44 = *(_QWORD *)(v12 + 80);
    *(_QWORD *)(v12 + 80) = &v44;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v31 = v29->SchedulerAssist;
          v3 = (v30 & v31[5]) == 0;
          v31[5] &= v30;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v29);
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
    KeWaitForGate(&v45, 18LL);
    if ( v19 )
    {
      KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, v19, 0);
      KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer, v19);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
