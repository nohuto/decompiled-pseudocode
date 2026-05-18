/*
 * XREFs of sub_1800D4E38 @ 0x1800D4E38
 * Callers:
 *     sub_1800D3C70 @ 0x1800D3C70 (sub_1800D3C70.c)
 *     sub_18012D7F0 @ 0x18012D7F0 (sub_18012D7F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D4E38(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a2 + 48);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return j_j__o_free(a2);
}
