/*
 * XREFs of sub_18007016C @ 0x18007016C
 * Callers:
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180070B8C @ 0x180070B8C (sub_180070B8C.c)
 *     sub_1800714AC @ 0x1800714AC (sub_1800714AC.c)
 *     sub_1800D6414 @ 0x1800D6414 (sub_1800D6414.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18007016C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r14
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  signed __int32 v9; // eax
  bool v10; // zf
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = (volatile signed __int32 *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = 0LL;
  sub_180070B8C(a1, &v13);
  v12 = 0LL;
  sub_180066E84(a1 + 24, (__int64)&v12);
  result = *(_QWORD *)(a1 + 256);
  v6 = a1 + 248;
  for ( i = *(_QWORD **)(a1 + 248); i != (_QWORD *)result && *i != v3; i += 2 )
    ;
  if ( i != (_QWORD *)result )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_1800D6414(*v8, 500LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    result = sub_1800714AC(v6, v11, i);
  }
  if ( BYTE8(v12) )
    result = sub_180067304(v12);
  if ( BYTE8(v13) )
    result = sub_180067304(v13);
  if ( v4 )
  {
    v9 = _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
