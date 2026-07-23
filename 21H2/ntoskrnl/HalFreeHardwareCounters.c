/*
 * XREFs of HalFreeHardwareCounters @ 0x140864530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpReleaseHalCounters @ 0x1404B9370 (HalpReleaseHalCounters.c)
 */

NTSTATUS __stdcall HalFreeHardwareCounters(HANDLE CounterSetHandle)
{
  __int64 v2; // rdx

  if ( CounterSetHandle == (HANDLE)HalpFullPmuHandle )
  {
    if ( (HalpPmuInUse & 1) != 0 )
    {
      _InterlockedDecrement(&HalpPmuInUse);
      return 0;
    }
  }
  else if ( (char *)CounterSetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && *((_QWORD *)HalpProfileInterface[0] + 14) )
  {
    HalpReleaseHalCounters();
    return (*((__int64 (__fastcall **)(__int64))HalpProfileInterface[0] + 14))(v2);
  }
  return -1073741811;
}
