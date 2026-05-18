/*
 * XREFs of sub_1800FCB14 @ 0x1800FCB14
 * Callers:
 *     sub_1800FC120 @ 0x1800FC120 (sub_1800FC120.c)
 *     sub_1800FDF20 @ 0x1800FDF20 (sub_1800FDF20.c)
 *     sub_1800FE2C0 @ 0x1800FE2C0 (sub_1800FE2C0.c)
 *     sub_18012F55E @ 0x18012F55E (sub_18012F55E.c)
 *     unknown_libname_82 @ 0x18012F65B (unknown_libname_82.c)
 *     sub_18012F667 @ 0x18012F667 (sub_18012F667.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FCB14(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx

  v2 = a1 + 15;
  v4 = (_QWORD *)a1[22];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, a2);
    v2[7] = 0LL;
  }
  v6 = (_QWORD *)a1[14];
  if ( v6 )
  {
    LOBYTE(a2) = v6 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, a2);
    a1[14] = 0LL;
  }
  v7 = (volatile signed __int32 *)a1[3];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a1[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
