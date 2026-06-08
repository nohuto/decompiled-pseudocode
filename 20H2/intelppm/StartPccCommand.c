/*
 * XREFs of StartPccCommand @ 0x1C003297C
 * Callers:
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002EA88 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002ED44 (CpcHighestNotifyWorker.c)
 *     AcquirePccSubspace @ 0x1C0032430 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
