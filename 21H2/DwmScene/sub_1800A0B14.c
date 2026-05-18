/*
 * XREFs of sub_1800A0B14 @ 0x1800A0B14
 * Callers:
 *     sub_18001A3B0 @ 0x18001A3B0 (sub_18001A3B0.c)
 *     sub_180020CE0 @ 0x180020CE0 (sub_180020CE0.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A0B14(_QWORD *a1)
{
  __int64 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx

  v2 = a1 + 16;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_1800693F8(a1 + 16);
  sub_1800258BC(v2, (__int64)v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  return sub_180027A54((__int64)a1);
}
