/*
 * XREFs of sub_18008DD34 @ 0x18008DD34
 * Callers:
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18008A5E8 @ 0x18008A5E8 (sub_18008A5E8.c)
 *     sub_18008AC98 @ 0x18008AC98 (sub_18008AC98.c)
 *     sub_18008FB40 @ 0x18008FB40 (sub_18008FB40.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008DD34(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v13; // [rsp+50h] [rbp-B0h]
  _QWORD *v14; // [rsp+58h] [rbp-A8h]
  __int128 v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v17[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v19[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v20[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v21[8]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+180h] [rbp+80h]

  v14 = a2;
  if ( !*a2 )
  {
    sub_18000FE28(v18);
    v9 = sub_18000FE28(v17);
    sub_18002D8C4(v21, v9, 920, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v21;
  }
  if ( *(_QWORD *)(*a2 + 368LL) )
  {
    v11 = *(_QWORD *)(*a2 + 368LL);
    sub_18008FB40(a1 + 120, &v10, &v11);
    if ( v10 != *(_QWORD *)(a1 + 128) )
    {
      sub_18000FE28(v20);
      v8 = sub_18000FE28(v19);
      sub_18002D8C4(pExceptionObject, v8, 926, (__int64)v20, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v5 = *a2;
  v12[0] = *(_QWORD *)(*a2 + 368LL);
  v12[1] = v5;
  v13 = v4;
  v15 = 0LL;
  sub_18008A5E8(a1 + 128, **(_QWORD **)(a1 + 128), v12);
  v23 = **(__int64 ***)(a1 + 128);
  result = sub_18008AC98((_QWORD *)(a1 + 120), (__int64)v16, v23 + 2, v23);
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
