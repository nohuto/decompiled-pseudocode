/*
 * XREFs of DisableEnergyEstimation @ 0x1C0038D08
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002440C (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DisableEnergyEstimation(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 360);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( v1 )
  {
    if ( qword_1C001C5E8 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      ((void (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C001C5E8)(v4, v3, v5, v6);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v1, 0x72637250u);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
}
