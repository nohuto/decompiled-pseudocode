/*
 * XREFs of StartPccCommand @ 0x1C002438C
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C002188C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0021B34 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x1C0023EA0 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
