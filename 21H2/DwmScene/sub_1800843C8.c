/*
 * XREFs of sub_1800843C8 @ 0x1800843C8
 * Callers:
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_180087A58 @ 0x180087A58 (sub_180087A58.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800843C8(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  volatile signed __int32 *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 result; // rax

  sub_18008933C(a1);
  v4 = a1[5];
  if ( (v4 - a1[4]) >> 4 )
  {
    v5 = *(volatile signed __int32 **)(v4 - 8);
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = *(volatile signed __int32 **)(v4 - 8);
    }
    v6 = *(_QWORD *)(v4 - 16);
    sub_180087A58(v6, a2);
    v7 = *a2;
    sub_18008933C(*a2);
    if ( v5 )
      _InterlockedIncrement(v5 + 3);
    *(_QWORD *)(v7 + 112) = v6;
    v8 = *(volatile signed __int32 **)(v7 + 120);
    *(_QWORD *)(v7 + 120) = v5;
    if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  v9 = (_QWORD *)a1[5];
  if ( (_QWORD *)a1[6] == v9 )
    return sub_18001101C(a1 + 4, v9, a2);
  *v9 = 0LL;
  v9[1] = 0LL;
  v10 = a2[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *v9 = *a2;
  result = a2[1];
  v9[1] = result;
  a1[5] += 16LL;
  return result;
}
