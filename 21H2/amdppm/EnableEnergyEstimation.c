/*
 * XREFs of EnableEnergyEstimation @ 0x1C00350A0
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00354E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall EnableEnergyEstimation(__int64 a1)
{
  int v2; // ebx
  PVOID PoolWithTag; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( qword_1C00145C8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x72637250u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      v5 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 360) = v4;
      KeProcessorGroupAffinity(&Affinity, v5);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C00145C8)(v7, v6, v8, v9);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(v4, 0x72637250u);
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
  return (unsigned int)v2;
}
