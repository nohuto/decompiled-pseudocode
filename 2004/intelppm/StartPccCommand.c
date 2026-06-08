/*
 * XREFs of StartPccCommand @ 0x1C003161C
 * Callers:
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002D728 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002D9E4 (CpcHighestNotifyWorker.c)
 *     AcquirePccSubspace @ 0x1C00310D0 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
