/*
 * XREFs of IoMmuDeleteIoMmuDomain @ 0x1C02D1B10
 * Callers:
 *     DpiResetIoMmuContext @ 0x1C0057B18 (DpiResetIoMmuContext.c)
 *     DpiDestroyIoMmuContext @ 0x1C02D1CE8 (DpiDestroyIoMmuContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IoMmuDeleteIoMmuDomain(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = ((__int64 (*)(void))qword_1C00B3030)();
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
