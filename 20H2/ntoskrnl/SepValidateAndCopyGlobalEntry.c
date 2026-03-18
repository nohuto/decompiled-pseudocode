/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x140595FBC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022B610 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402E2770 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402E3574 (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140595CE8 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // esi
  _DWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 SingletonEntryFromIndexNumber; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  unsigned int v22; // [rsp+48h] [rbp+10h] BYREF
  __int64 v23; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v22 = 0;
  v23 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v22, &v23);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      PoolWithTag[6] = 0;
      v6 = PoolWithTag + 2;
      v7 = v22;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) == v23 )
      {
        v15 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
        if ( v15 )
        {
          v16 = AuthzBasepDuplicateSecurityAttributes(v15, v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v16;
          v5 = 0LL;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v20 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v20;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v10 = KeGetCurrentIrql();
            if ( v10 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v10 >= 2u )
            {
              v11 = KeGetCurrentPrcb();
              v12 = v11->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v13 & v12[5]) == 0;
              v12[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v11);
            }
          }
        }
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
      __writecr8(v9);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
