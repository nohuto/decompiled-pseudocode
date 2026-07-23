/*
 * XREFs of MiAttemptPageFileReduction @ 0x140542B48
 * Callers:
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 * Callees:
 *     MiQueueSyncModifiedWriterApc @ 0x140251F9C (MiQueueSyncModifiedWriterApc.c)
 *     MiOkToShrinkPageFiles @ 0x140273DC4 (MiOkToShrinkPageFiles.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 */

int __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KIRQL v4; // al
  unsigned __int64 v5; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rax
  int *v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v17[24]; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  FileInformation = 0LL;
  memset(v17, 0, 0x58uLL);
  memset(Object, 0, 0x68uLL);
  Object[1] = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 16LL;
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v2;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) == 0 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
LABEL_12:
    MiQueueSyncModifiedWriterApc(v2, (__int64)v17, (__int64)MiAttemptPageFileReductionApc, (__int64)Object, Object);
    v12 = &Object[10];
    v13 = (__int64 *)(v2 + 6944);
    do
    {
      v11 = (unsigned int)*v12;
      if ( (_DWORD)v11 )
      {
        v14 = *v13;
        FileInformation = v11 << 12;
        LODWORD(v11) = IoSetInformation(*(PFILE_OBJECT *)(v14 + 56), FileAllocationInformation, 8u, &FileInformation);
      }
      ++v13;
      ++v12;
      --v3;
    }
    while ( v3 );
    return v11;
  }
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1344));
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  LODWORD(v11) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 7464), *(_QWORD *)(v2 + 7592));
  if ( (_DWORD)v11 )
  {
    Object[8] = 16;
    goto LABEL_12;
  }
  return v11;
}
