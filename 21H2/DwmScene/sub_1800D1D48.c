/*
 * XREFs of sub_1800D1D48 @ 0x1800D1D48
 * Callers:
 *     sub_180046958 @ 0x180046958 (sub_180046958.c)
 *     sub_1800B7170 @ 0x1800B7170 (sub_1800B7170.c)
 *     sub_1800B79A0 @ 0x1800B79A0 (sub_1800B79A0.c)
 * Callees:
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800D1D48(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_1800D27A4(a1 + 14);
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180067BE8((__int64)a1);
}
