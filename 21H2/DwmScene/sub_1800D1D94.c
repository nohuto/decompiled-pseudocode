/*
 * XREFs of sub_1800D1D94 @ 0x1800D1D94
 * Callers:
 *     sub_1800D1F00 @ 0x1800D1F00 (sub_1800D1F00.c)
 *     sub_1800F9210 @ 0x1800F9210 (sub_1800F9210.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D1D94(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = (volatile signed __int32 *)a1[21];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_1800258BC(a1 + 18, (__int64)(a1 + 18));
  sub_1800D27A4(a1 + 14);
  return sub_180027A54((__int64)a1);
}
