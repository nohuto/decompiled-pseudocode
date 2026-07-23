/*
 * XREFs of HalAllocateHardwareCounters @ 0x1408643E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpAllocateHalCounters @ 0x1404B92F4 (HalpAllocateHalCounters.c)
 *     HalpGetFullPmuOwnership @ 0x1404B9324 (HalpGetFullPmuOwnership.c)
 *     HalpReleaseHalCounters @ 0x1404B9370 (HalpReleaseHalCounters.c)
 */

NTSTATUS __stdcall HalAllocateHardwareCounters(
        PGROUP_AFFINITY GroupAffinty,
        ULONG GroupCount,
        PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
        PHANDLE CounterSetHandle)
{
  __int64 v5; // rsi
  char v8; // di
  NTSTATUS HalCounters; // ecx
  int FullPmuOwnership; // eax
  __int64 v11; // rdx
  __int64 Group; // rcx
  unsigned __int64 Mask; // r8
  unsigned int v14; // ebx
  ULONG ActiveProcessorCount; // esi
  __int64 (__fastcall *v16)(_QWORD *, PPHYSICAL_COUNTER_RESOURCE_LIST, PHANDLE); // rax
  _QWORD v18[22]; // [rsp+20h] [rbp-E8h] BYREF

  v5 = GroupCount;
  memset(v18, 0, 0xA8uLL);
  v8 = 0;
  if ( !CounterSetHandle )
    return -1073741811;
  *CounterSetHandle = 0LL;
  if ( GroupAffinty || ResourceList )
  {
    HalCounters = HalpAllocateHalCounters();
    if ( HalCounters < 0 )
      return HalCounters;
    LODWORD(v18[0]) = 1310721;
    v8 = 1;
    memset((char *)v18 + 4, 0, 0xA4uLL);
    if ( GroupAffinty )
    {
      if ( (_DWORD)v5 )
      {
        v11 = v5;
        do
        {
          Group = GroupAffinty->Group;
          Mask = GroupAffinty->Mask;
          if ( LOWORD(v18[0]) <= (unsigned __int16)Group )
            LOWORD(v18[0]) = Group + 1;
          v18[Group + 1] |= Mask;
          ++GroupAffinty;
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v14 = 0;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        do
          KeAddProcessorAffinityEx(v18, v14++);
        while ( v14 < ActiveProcessorCount );
      }
    }
    v16 = (__int64 (__fastcall *)(_QWORD *, PPHYSICAL_COUNTER_RESOURCE_LIST, PHANDLE))*((_QWORD *)HalpProfileInterface[0]
                                                                                      + 13);
    if ( !v16 )
    {
LABEL_20:
      HalpReleaseHalCounters();
      return HalCounters;
    }
    FullPmuOwnership = v16(v18, ResourceList, CounterSetHandle);
  }
  else
  {
    FullPmuOwnership = HalpGetFullPmuOwnership((__int64 *)CounterSetHandle);
  }
  HalCounters = FullPmuOwnership;
  if ( FullPmuOwnership < 0 && v8 )
    goto LABEL_20;
  return HalCounters;
}
