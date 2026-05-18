/*
 * XREFs of sub_18007EAF8 @ 0x18007EAF8
 * Callers:
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_180082188 @ 0x180082188 (sub_180082188.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18007EAF8(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  volatile signed __int32 *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 result; // rax

  sub_180083A6C(a1);
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
    sub_180082188(v6, a2);
    v7 = *a2;
    sub_180083A6C(*a2);
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
    return sub_180010F3C(a1 + 4, v9, a2);
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
