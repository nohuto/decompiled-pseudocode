/*
 * XREFs of MiDecrementLargeSubsections @ 0x140540650
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiReferenceDataSubsections @ 0x140307E7C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x140555068 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CFE10 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x1403621D0 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFDD0 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  volatile LONG *v3; // r12
  unsigned __int64 v4; // rsi
  __int64 *v5; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v8; // zf
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned __int64 *v11; // r13
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // edx
  unsigned __int8 v17; // cl
  _DWORD *v18; // r9
  __int64 *v19; // rax
  __int64 result; // rax
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 *v24; // [rsp+80h] [rbp+8h]
  char v26; // [rsp+90h] [rbp+18h]
  volatile LONG *v27; // [rsp+98h] [rbp+20h]

  v24 = a1;
  v2 = a1;
  v23 = *a1;
  v3 = (volatile LONG *)(*a1 + 72);
  v27 = v3;
  v4 = ExAcquireSpinLockExclusive(v3);
  v5 = a2;
  v26 = v4 + 1;
  while ( 1 )
  {
    if ( --*((_DWORD *)v2 + 27) == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
          SchedulerAssist[5] &= 0xFFFF0007;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(2uLL);
      v9 = *((_DWORD *)v2 + 11);
      v10 = 0;
      v11 = (unsigned __int64 *)v2[1];
      if ( v9 )
      {
        do
        {
          v12 = MiLockLeafPage(v11, 0LL);
          MiDecrementShareCount(v12);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v10 & 0xF) == 0 && v10 != v9 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
                {
                  v14 = KeGetCurrentPrcb();
                  v15 = v14->SchedulerAssist;
                  v16 = ~(unsigned __int16)(-1LL << v26);
                  v8 = (v16 & v15[5]) == 0;
                  v15[5] &= v16;
                  if ( v8 )
                    KiRemoveSystemWorkPriorityKick((__int64)v14);
                }
              }
            }
            __writecr8(v4);
            v17 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
            {
              v18 = KeGetCurrentPrcb()->SchedulerAssist;
              v18[5] |= (-1 << (v17 + 1)) & 4;
            }
          }
          ++v11;
        }
        while ( v10 < v9 );
        v2 = v24;
        v3 = v27;
      }
      MiChargeLargeProtoSubsection(v2, 0LL);
      ExAcquireSpinLockExclusive(v3);
      --*((_DWORD *)v2 + 27);
      v19 = MiBuildWakeList(v23, 512);
      MiReleaseControlAreaWaiters(v19);
      v5 = a2;
    }
    if ( v2 == v5 )
      break;
    v2 = (__int64 *)v2[2];
    v24 = v2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << v26);
        v8 = ((unsigned int)result & v22[5]) == 0;
        v22[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
  }
  __writecr8(v4);
  return result;
}
