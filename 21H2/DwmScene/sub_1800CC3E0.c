/*
 * XREFs of sub_1800CC3E0 @ 0x1800CC3E0
 * Callers:
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_1800CC430 @ 0x1800CC430 (sub_1800CC430.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800CC3E0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180067BE8((__int64)a1);
}
