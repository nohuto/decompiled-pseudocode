/*
 * XREFs of sub_1800CC478 @ 0x1800CC478
 * Callers:
 *     sub_180041088 @ 0x180041088 (sub_180041088.c)
 *     sub_1800B18A0 @ 0x1800B18A0 (sub_1800B18A0.c)
 *     sub_1800B20D0 @ 0x1800B20D0 (sub_1800B20D0.c)
 * Callees:
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800CC478(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_1800CCED4(a1 + 14);
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180062318((__int64)a1);
}
