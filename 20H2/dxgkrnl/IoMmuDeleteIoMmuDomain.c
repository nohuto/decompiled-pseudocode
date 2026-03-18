/*
 * XREFs of IoMmuDeleteIoMmuDomain @ 0x1C02D0814
 * Callers:
 *     DpiResetIoMmuContext @ 0x1C0056C08 (DpiResetIoMmuContext.c)
 *     DpiDestroyIoMmuContext @ 0x1C02D09EC (DpiDestroyIoMmuContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IoMmuDeleteIoMmuDomain(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = ((__int64 (*)(void))qword_1C00B1030)();
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
