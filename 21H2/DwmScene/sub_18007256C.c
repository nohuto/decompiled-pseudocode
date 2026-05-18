/*
 * XREFs of sub_18007256C @ 0x18007256C
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_180076844 @ 0x180076844 (sub_180076844.c)
 *     sub_18008AE0C @ 0x18008AE0C (sub_18008AE0C.c)
 *     sub_1800A4114 @ 0x1800A4114 (sub_1800A4114.c)
 *     sub_1800A423C @ 0x1800A423C (sub_1800A423C.c)
 *     sub_1800A88A8 @ 0x1800A88A8 (sub_1800A88A8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18007256C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = a2[1];
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      v5 = (volatile signed __int32 *)a2[1];
      *a2 = a2;
      a2[1] = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
