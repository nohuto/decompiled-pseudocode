/*
 * XREFs of StartPccCommand @ 0x1C002585C
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0022D5C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0023004 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x1C0025370 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
