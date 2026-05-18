/*
 * XREFs of sub_18006CC9C @ 0x18006CC9C
 * Callers:
 *     sub_180070D38 @ 0x180070D38 (sub_180070D38.c)
 *     sub_180070F74 @ 0x180070F74 (sub_180070F74.c)
 *     sub_18008553C @ 0x18008553C (sub_18008553C.c)
 *     sub_18009E844 @ 0x18009E844 (sub_18009E844.c)
 *     sub_18009E96C @ 0x18009E96C (sub_18009E96C.c)
 *     sub_1800A2FD8 @ 0x1800A2FD8 (sub_1800A2FD8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18006CC9C(__int64 a1, _QWORD *a2)
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
