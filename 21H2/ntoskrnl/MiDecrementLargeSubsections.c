/*
 * XREFs of MiDecrementLargeSubsections @ 0x140540410
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiReferenceDataSubsections @ 0x1402FD12C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x140554E28 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CFCB0 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408D9528 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x140357480 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFC70 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  volatile LONG *v3; // r12
  unsigned __int64 v4; // rsi
  __int64 *v5; // rax
  __int64 v6; // r8
  _DWORD *v7; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v10; // zf
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  __int64 *v13; // r13
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v16; // r10
  int v17; // edx
  unsigned __int8 v18; // cl
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
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
          v10 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
          SchedulerAssist[5] &= 0xFFFF0007;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(2uLL);
      v11 = *((_DWORD *)v2 + 11);
      v12 = 0;
      v13 = (__int64 *)v2[1];
      if ( v11 )
      {
        do
        {
          v14 = MiLockLeafPage(v13, 0, v6, (__int64)v7);
          MiDecrementShareCount(v14);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v12 & 0xF) == 0 && v12 != v11 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
                {
                  v16 = KeGetCurrentPrcb();
                  v7 = v16->SchedulerAssist;
                  v17 = ~(unsigned __int16)(-1LL << v29);
                  v10 = (v17 & v7[5]) == 0;
                  v6 = (unsigned int)v17 & v7[5];
                  v7[5] = v6;
                  if ( v10 )
                    KiRemoveSystemWorkPriorityKick((__int64)v16);
                }
              }
            }
            __writecr8(v4);
            v18 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
            {
              v7 = KeGetCurrentPrcb()->SchedulerAssist;
              v6 = (-1 << (v18 + 1)) & 4u | v7[5];
              v7[5] = v6;
            }
          }
          ++v13;
        }
        while ( v12 < v11 );
        v2 = v27;
        v3 = v30;
      }
      MiChargeLargeProtoSubsection(v2, 0LL);
      ExAcquireSpinLockExclusive(v3);
      --*((_DWORD *)v2 + 27);
      v19 = MiBuildWakeList(v26, 512);
      MiReleaseControlAreaWaiters(v19, v20, v21, v22);
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
        v10 = ((unsigned int)result & v25[5]) == 0;
        v25[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
  }
  __writecr8(v4);
  return result;
}
