/*
 * XREFs of sub_180095A24 @ 0x180095A24
 * Callers:
 *     sub_1800EF160 @ 0x1800EF160 (sub_1800EF160.c)
 *     sub_1800EFF10 @ 0x1800EFF10 (sub_1800EFF10.c)
 * Callees:
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180095A24(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v7; // [rsp+30h] [rbp-30h]
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF

  v7 = a2;
  v8 = 0LL;
  sub_1800A565C(a1, &v8, 8LL);
  sub_1800F1B44(v8, &qword_1802134B8, 7LL, 256LL);
  sub_1800F27BC(v8);
  v6 = 0LL;
  if ( *((_QWORD *)&v8 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
  v6 = v8;
  result = sub_1800AAE44(*a2, &v6);
  v4 = (volatile signed __int32 *)*((_QWORD *)&v8 + 1);
  if ( *((_QWORD *)&v8 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
