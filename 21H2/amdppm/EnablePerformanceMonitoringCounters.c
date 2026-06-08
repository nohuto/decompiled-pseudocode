/*
 * XREFs of EnablePerformanceMonitoringCounters @ 0x1C00351B8
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00354E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall EnablePerformanceMonitoringCounters(__int64 a1)
{
  __int64 v1; // rdx
  char *v3; // rdx
  unsigned int v4; // esi
  int v5; // ebx
  __int64 i; // r8
  int v7; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 368);
  v12 = 0LL;
  v3 = (char *)&unk_1C00149F0 + 256 * v1;
  v4 = *((_DWORD *)v3 + 10);
  if ( v4 )
  {
    if ( v4 > 4 )
      return (unsigned int)-1073741670;
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v7 = *(_DWORD *)&v3[12 * i + 44];
      v13[i] = v7;
      if ( (unsigned int)(v7 - 2) > 0x15 )
        return (unsigned int)-1073741637;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      v10 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 360) = v9;
      v5 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *))HalPrivateDispatchTable[72])(
             v10,
             v13,
             v4,
             &v12);
      if ( v5 < 0 )
      {
        ExFreePoolWithTag(v9, 0x72637250u);
        *(_QWORD *)(a1 + 360) = 0LL;
      }
      else
      {
        v9[1] = v12;
        *(_DWORD *)v9 = v4;
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
  return (unsigned int)v5;
}
