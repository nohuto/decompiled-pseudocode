/*
 * XREFs of ExecutePccCommand @ 0x1C0022CAC
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0020548 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 *     ExecutePccWrite @ 0x1C0022CE0 (ExecutePccWrite.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutePccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
