/*
 * XREFs of sub_18009F15C @ 0x18009F15C
 * Callers:
 *     sub_18001A4A0 @ 0x18001A4A0 (sub_18001A4A0.c)
 *     sub_180020CF0 @ 0x180020CF0 (sub_180020CF0.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009F15C(_QWORD *a1)
{
  __int64 *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v2 = a1 + 14;
  *a1 = &Spectre::Engine::Texture::`vftable';
  sub_1800693F8(a1 + 14);
  v3 = (void (__fastcall ***)(_QWORD, __int64))a1[17];
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = a1[16];
  if ( v4 )
    j__o_free(v4);
  sub_1800258BC(v2, (__int64)v2);
  v5 = (volatile signed __int32 *)a1[13];
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_180027A54((__int64)a1);
}
