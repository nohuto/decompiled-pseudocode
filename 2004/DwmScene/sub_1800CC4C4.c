/*
 * XREFs of sub_1800CC4C4 @ 0x1800CC4C4
 * Callers:
 *     sub_1800CC630 @ 0x1800CC630 (sub_1800CC630.c)
 *     sub_1800F3940 @ 0x1800F3940 (sub_1800F3940.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CC4C4(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = (volatile signed __int32 *)a1[21];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_18001FFEC(a1 + 18, (__int64)(a1 + 18));
  sub_1800CCED4(a1 + 14);
  return sub_180022184((__int64)a1);
}
