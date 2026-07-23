/*
 * XREFs of MiReferenceControlArea @ 0x140281B54
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveControlArea @ 0x14028164C (MiReferenceActiveControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiValidateControlAreaPartition @ 0x140281884 (MiValidateControlAreaPartition.c)
 *     MiControlAreaRequiresCharge @ 0x1402A41F8 (MiControlAreaRequiresCharge.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
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
  int v15; // edx
  _QWORD *active; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r9
  int v27; // eax
  _DWORD *v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  int v35; // eax
  _DWORD *v36; // r8
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r9
  int v39; // eax
  _DWORD *v40; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v43; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v45; // [rsp+20h] [rbp-30h] BYREF
  __int128 v46; // [rsp+30h] [rbp-20h] BYREF
  char *v47; // [rsp+40h] [rbp-10h]
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v3 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v47 = 0LL;
  v6 = *(struct _FILE_OBJECT **)(a1 + 56);
  v45 = 0LL;
  FileObject = v6;
  v46 = 0LL;
  SectionObjectPointer = (__int64 *)v6->SectionObjectPointer;
  if ( !v3 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140C4C8C0);
    v12 = *SectionObjectPointer;
    v13 = v8;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a2;
      v18 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v3 = (v43 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v43;
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v3 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    __writecr8(v13);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  v14 = MiValidateControlAreaPartition(a1, v12);
  if ( v14 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v28 = v26->SchedulerAssist;
          v3 = (v27 & v28[5]) == 0;
          v28[5] &= v27;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v26);
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
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        v15 = *(_DWORD *)(a1 + 20);
        if ( (v15 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v12, ((v15 & 0x200000) == 0) | 2u) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v33 = KeGetCurrentIrql();
              if ( v33 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v33 >= 2u )
              {
                v34 = KeGetCurrentPrcb();
                v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                v36 = v34->SchedulerAssist;
                v3 = (v35 & v36[5]) == 0;
                v36[5] &= v35;
                if ( v3 )
                  KiRemoveSystemWorkPriorityKick(v34);
              }
            }
          }
          v14 = -1073740277;
          goto LABEL_55;
        }
      }
      active = (_QWORD *)MiReferenceActiveControlArea((_DWORD *)a1, v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v40 = v38->SchedulerAssist;
            v3 = (v39 & v40[5]) == 0;
            v40[5] &= v39;
            if ( v3 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(v13);
      MiReleaseControlAreaWaiters(active);
      *a3 = v12;
      return 0LL;
    }
    v19 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 0);
    v20 = v19;
    if ( v19 )
      KeAbPreWait(v19);
    DWORD1(v46) = 0;
    v47 = (char *)&v46 + 8;
    LOWORD(v46) = 263;
    *((_QWORD *)&v46 + 1) = (char *)&v46 + 8;
    BYTE2(v46) = 6;
    DWORD2(v45) = 1;
    *(_QWORD *)&v45 = *(_QWORD *)(v12 + 80);
    *(_QWORD *)(v12 + 80) = &v45;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v32 = v30->SchedulerAssist;
          v3 = (v31 & v32[5]) == 0;
          v32[5] &= v31;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v30);
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
    KeWaitForGate(&v46, 18LL);
    if ( v20 )
    {
      KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, v20, 0);
      KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
