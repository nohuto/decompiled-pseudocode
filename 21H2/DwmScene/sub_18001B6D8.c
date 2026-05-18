/*
 * XREFs of sub_18001B6D8 @ 0x18001B6D8
 * Callers:
 *     sub_180011BB0 @ 0x180011BB0 (sub_180011BB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001B6D8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // eax
  __int64 *i; // rax
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0LL;
  v4 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v5 + 1, v5) )
      {
        v3 = *(_QWORD *)(a2 + 72);
        v4 = *(volatile signed __int32 **)(a2 + 80);
        break;
      }
    }
  }
  for ( i = *(__int64 **)(a1 + 112); i != *(__int64 **)(a1 + 120); ++i )
  {
    v7 = *i;
    if ( *(_QWORD *)(*i + 16) == v3 )
      goto LABEL_12;
  }
  v7 = 0LL;
LABEL_12:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return v7;
}
