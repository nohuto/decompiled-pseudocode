/*
 * XREFs of sub_1800F99EC @ 0x1800F99EC
 * Callers:
 *     sub_1800FA540 @ 0x1800FA540 (sub_1800FA540.c)
 *     sub_1800FAC40 @ 0x1800FAC40 (sub_1800FAC40.c)
 * Callees:
 *     sub_18001851C @ 0x18001851C (sub_18001851C.c)
 *     sub_1800F9AC8 @ 0x1800F9AC8 (sub_1800F9AC8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800F99EC(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  *(_OWORD *)a2 = 0LL;
  sub_1800F9AC8(a2);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  v10 = *a2;
  v11 = v4;
  v6 = (_QWORD *)a1[20];
  if ( (_QWORD *)a1[21] == v6 )
  {
    sub_18001851C(a1 + 19, v6, &v10);
    v7 = v11;
  }
  else
  {
    *v6 = v5;
    v6[1] = v4;
    v7 = 0LL;
    v11 = 0LL;
    a1[20] += 16LL;
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v8 = v11;
      (**(void (__fastcall ***)(__int64))v11)(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a2;
}
