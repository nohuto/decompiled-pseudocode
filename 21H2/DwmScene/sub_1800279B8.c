/*
 * XREFs of sub_1800279B8 @ 0x1800279B8
 * Callers:
 *     sub_180028A30 @ 0x180028A30 (sub_180028A30.c)
 *     sub_18002C150 @ 0x18002C150 (sub_18002C150.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800279B8(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::RenderState::`vftable';
  sub_1800258BC(a1 + 16, (__int64)(a1 + 16));
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180027A54(a1);
}
