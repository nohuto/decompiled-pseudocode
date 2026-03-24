/*
 * XREFs of HalpIommuSetupMessageInterruptRouting @ 0x1409A761C
 * Callers:
 *     HalpIommuConfigureInterrupt @ 0x1404CBC80 (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 264))(
           *(_QWORD *)(a1 + 16),
           a2,
           *(_QWORD *)(a1 + 480),
           *(unsigned int *)(a1 + 488));
}
