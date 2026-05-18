/*
 * XREFs of sub_180095690 @ 0x180095690
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1800EF770 @ 0x1800EF770 (sub_1800EF770.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180095690(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rbp
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx

  result = sub_18006AB3C(*a2);
  v5 = result;
  v6 = *(_QWORD **)(a1 + 112);
  for ( i = *(_QWORD **)(a1 + 104); i != v6; i += 11 )
  {
    v8 = i[3];
    if ( v8 )
      result = sub_1800EF770(v8, v5);
    v9 = i[5];
    if ( v9 )
      result = sub_1800EF770(v9, v5);
    v10 = i[7];
    if ( v10 )
      result = sub_1800EF770(v10, v5);
    v11 = i[9];
    if ( v11 )
      result = sub_1800EF770(v11, v5);
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = (volatile signed __int32 *)a2[1];
  }
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (volatile signed __int32 *)a2[1];
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
