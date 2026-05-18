/*
 * XREFs of sub_180078270 @ 0x180078270
 * Callers:
 *     sub_180080DE0 @ 0x180080DE0 (sub_180080DE0.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180078270(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 144);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  sub_180012A18((__int64 *)(a1 + 24));
  return sub_180012A18((__int64 *)a1);
}
