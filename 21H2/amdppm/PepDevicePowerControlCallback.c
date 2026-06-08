/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C000DC60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     PepProcessorIdleVeto @ 0x1C000CFA4 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x1C000D0CC (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C000D1F4 (PepUpdatePlatformState.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000DBAC (PepUpdatePerformanceConstraint.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     PepGetParkingPageInfo @ 0x1C0036794 (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  *a7 = 0LL;
  v7 = *a2 - *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_PPM_PERF_CONSTRAINT_CHANGE.Data4;
  if ( !v7 )
    return PepUpdatePerformanceConstraint(a1);
  v9 = *a2 - PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE;
  if ( *a2 == PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE )
    v9 = a2[1] + 0xC20B498CB535555LL;
  if ( v9 )
  {
    v10 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1;
    if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1 )
      v10 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4;
    if ( !v10 )
    {
      if ( a4 >= 0xC )
        return PepProcessorIdleVeto(a1, a3);
      return -1073741789;
    }
    v11 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1;
    if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1 )
      v11 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4;
    if ( !v11 )
    {
      if ( a4 < 0xC )
        return -1073741789;
      if ( Src || qword_1C00149A8 || qword_1C00149B0 )
      {
        v12 = *(_DWORD *)a3;
        v15 = 0LL;
        DWORD1(v15) = v12;
        DWORD2(v15) = *(_DWORD *)(a3 + 4);
        BYTE12(v15) = *(_BYTE *)(a3 + 8);
        LODWORD(v15) = 62;
        return ((__int64 (__fastcall *)(__int128 *))qword_1C0014668)(&v15);
      }
      return -1073741637;
    }
    v13 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1;
    if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1 )
      v13 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4;
    if ( v13 )
    {
      v14 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1;
      if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1 )
        v14 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4;
      if ( v14 )
        return -1073741637;
      if ( a4 >= 0xC )
        return PepUpdatePlatformState(a1, (unsigned int *)a3);
    }
    else if ( a4 >= 0xC )
    {
      return PepUpdateIdleState(a1, (unsigned int *)a3);
    }
    return -1073741789;
  }
  if ( a6 >= 0x10 )
  {
    result = PepGetParkingPageInfo(a1, a5);
    if ( result < 0 )
      *a7 = 0LL;
  }
  else
  {
    *a7 = 16LL;
    return -1073741670;
  }
  return result;
}
