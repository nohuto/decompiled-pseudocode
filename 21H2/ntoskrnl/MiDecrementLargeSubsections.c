/*
 * XREFs of MiDecrementLargeSubsections @ 0x14059DF58
 * Callers:
 *     MiReferenceDataSubsections @ 0x14026CF88 (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x14059F23C (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x1405C48E0 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiCloneLargeFileOnlyVad @ 0x14096FEDC (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x140287B04 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiChargeLargeProtoSubsection @ 0x14096FE9C (MiChargeLargeProtoSubsection.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // edx
  unsigned __int8 v20; // cl
  _DWORD *v21; // r9
  __int64 *v22; // rax
  __int64 result; // rax
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 *v27; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+90h] [rbp+18h]
  volatile LONG *v30; // [rsp+98h] [rbp+20h]

  v27 = a1;
  v2 = a1;
  v26 = *a1;
  v3 = (volatile LONG *)(*a1 + 72);
  v30 = v3;
  v4 = ExAcquireSpinLockExclusive(v3);
  v5 = a2;
  v29 = v4 + 1;
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
          MiDecrementShareCount(v12, v13, v14, v15);
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
                  v17 = KeGetCurrentPrcb();
                  v18 = v17->SchedulerAssist;
                  v19 = ~(unsigned __int16)(-1LL << v29);
                  v8 = (v19 & v18[5]) == 0;
                  v18[5] &= v19;
                  if ( v8 )
                    KiRemoveSystemWorkPriorityKick((__int64)v17);
                }
              }
            }
            __writecr8(v4);
            v20 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
            {
              v21 = KeGetCurrentPrcb()->SchedulerAssist;
              v21[5] |= (-1 << (v20 + 1)) & 4;
            }
          }
          ++v11;
        }
        while ( v10 < v9 );
        v2 = v27;
        v3 = v30;
      }
      MiChargeLargeProtoSubsection(v2, 0LL);
      ExAcquireSpinLockExclusive(v3);
      --*((_DWORD *)v2 + 27);
      v22 = MiBuildWakeList(v26, 512);
      MiReleaseControlAreaWaiters(v22);
      v5 = a2;
    }
    if ( v2 == v5 )
      break;
    v2 = (__int64 *)v2[2];
    v27 = v2;
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
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << v29);
        v8 = ((unsigned int)result & v25[5]) == 0;
        v25[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
  }
  __writecr8(v4);
  return result;
}
