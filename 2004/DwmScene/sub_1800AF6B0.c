/*
 * XREFs of sub_1800AF6B0 @ 0x1800AF6B0
 * Callers:
 *     sub_1800AEF5C @ 0x1800AEF5C (sub_1800AEF5C.c)
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800AF6B0(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r9
  volatile signed __int32 *v6; // rdi
  __int64 v7; // r8
  signed __int32 v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // eax

  v3 = *(__int64 **)(a1 + 40);
  if ( v3 == *(__int64 **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v4 = *v3;
    v5 = 0LL;
    v6 = 0LL;
    v7 = *(_QWORD *)(v4 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v5 = *(_QWORD *)(v4 + 56);
          v6 = *(volatile signed __int32 **)(v4 + 64);
          break;
        }
      }
    }
    *(_OWORD *)a2 = 0LL;
    *a2 = 0LL;
    a2[1] = 0LL;
    v9 = *(_QWORD *)(v5 + 80);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          *a2 = *(_QWORD *)(v5 + 72);
          a2[1] = *(_QWORD *)(v5 + 80);
          break;
        }
      }
    }
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
  }
  return a2;
}
