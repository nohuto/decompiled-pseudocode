/*
 * XREFs of sub_18001821C @ 0x18001821C
 * Callers:
 *     sub_180018544 @ 0x180018544 (sub_180018544.c)
 *     sub_180021338 @ 0x180021338 (sub_180021338.c)
 *     sub_1800213B8 @ 0x1800213B8 (sub_1800213B8.c)
 *     sub_180021438 @ 0x180021438 (sub_180021438.c)
 *     sub_1800214B8 @ 0x1800214B8 (sub_1800214B8.c)
 *     sub_180021538 @ 0x180021538 (sub_180021538.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001821C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 72);
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
      v5 = *(volatile signed __int32 **)(a2 + 72);
      *(_QWORD *)(a2 + 64) = a2;
      *(_QWORD *)(a2 + 72) = v4;
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
