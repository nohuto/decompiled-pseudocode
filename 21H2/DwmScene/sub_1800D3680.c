/*
 * XREFs of sub_1800D3680 @ 0x1800D3680
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180027A54 @ 0x180027A54 (sub_180027A54.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800D3680(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_1800258BC(a1 + 14, (__int64)(a1 + 14));
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180027A54((__int64)a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
