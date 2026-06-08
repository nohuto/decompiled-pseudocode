/*
 * XREFs of EnableEnergyEstimation @ 0x1C00262B0
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00257B0 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 */

__int64 __fastcall EnableEnergyEstimation(__int64 a1)
{
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( qword_1C001C5B8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x72637250u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      v4 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 360) = v3;
      KeProcessorGroupAffinity(&Affinity, v4);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C001C5B8)(v6, v5, v7, v8);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag(v3, 0x72637250u);
        *(_QWORD *)(a1 + 360) = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v9;
}
