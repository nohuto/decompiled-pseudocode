/*
 * XREFs of sub_1800701A0 @ 0x1800701A0
 * Callers:
 *     sub_18006FB40 @ 0x18006FB40 (sub_18006FB40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800701A0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx

  if ( a2 != a1 )
  {
    v5 = a2 - 1;
    do
    {
      v6 = *v5;
      a3 -= 2;
      *v5 = 0LL;
      v7 = *(v5 - 1);
      *(v5 - 1) = 0LL;
      v8 = (volatile signed __int32 *)a3[1];
      *a3 = v7;
      a3[1] = v6;
      if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      v5 -= 2;
    }
    while ( v5 + 1 != a1 );
  }
  return a3;
}
