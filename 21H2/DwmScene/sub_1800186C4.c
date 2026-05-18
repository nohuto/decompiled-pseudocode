/*
 * XREFs of sub_1800186C4 @ 0x1800186C4
 * Callers:
 *     sub_1800189EC @ 0x1800189EC (sub_1800189EC.c)
 *     sub_180026C08 @ 0x180026C08 (sub_180026C08.c)
 *     sub_180026C88 @ 0x180026C88 (sub_180026C88.c)
 *     sub_180026D08 @ 0x180026D08 (sub_180026D08.c)
 *     sub_180026D88 @ 0x180026D88 (sub_180026D88.c)
 *     sub_180026E08 @ 0x180026E08 (sub_180026E08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800186C4(__int64 a1, __int64 a2)
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
