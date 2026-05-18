/*
 * XREFs of sub_1800A47E8 @ 0x1800A47E8
 * Callers:
 *     sub_1800A4B90 @ 0x1800A4B90 (sub_1800A4B90.c)
 *     sub_1800A73D0 @ 0x1800A73D0 (sub_1800A73D0.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A47E8(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::Shader::`vftable';
  sub_1800258BC(a1 + 17, (__int64)(a1 + 17));
  v2 = (volatile signed __int32 *)a1[16];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180027A54((__int64)a1);
}
