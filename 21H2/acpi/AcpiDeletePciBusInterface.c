/*
 * XREFs of AcpiDeletePciBusInterface @ 0x1C00A21D8
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CC90 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsPciDevice @ 0x1C0017E30 (IsPciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiDeletePciBusInterface(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  memset(Event, 0, sizeof(Event));
  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) != 0 || !*(_QWORD *)(a1 + 80) )
    return 0LL;
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  v3 = *(volatile signed __int32 **)(a1 + 720);
  *(_DWORD *)&Event[24] = -1073741275;
  result = IsPciDevice(v3, (__int64)AmlisuppCompletePassive, (__int64)Event, &v5);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    result = *(unsigned int *)&Event[24];
  }
  if ( (int)result >= 0 && v5 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 88), 0xFFFFFEFF);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 80) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x46706341u);
    *(_QWORD *)(a1 + 80) = 0LL;
    return 0LL;
  }
  return result;
}
