/*
 * XREFs of sub_180088464 @ 0x180088464
 * Callers:
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180084D18 @ 0x180084D18 (sub_180084D18.c)
 *     sub_1800853C8 @ 0x1800853C8 (sub_1800853C8.c)
 *     sub_18008A270 @ 0x18008A270 (sub_18008A270.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180088464(__int64 a1, _QWORD *a2)
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
    sub_18000FD48(v18);
    v9 = sub_18000FD48(v17);
    sub_180027FF4(v21, v9, 920, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v21;
  }
  if ( *(_QWORD *)(*a2 + 368LL) )
  {
    v11 = *(_QWORD *)(*a2 + 368LL);
    sub_18008A270(a1 + 120, &v10, &v11);
    if ( v10 != *(_QWORD *)(a1 + 128) )
    {
      sub_18000FD48(v20);
      v8 = sub_18000FD48(v19);
      sub_180027FF4(pExceptionObject, v8, 926, (__int64)v20, 0);
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
  sub_180084D18(a1 + 128, **(_QWORD **)(a1 + 128), v12);
  v23 = **(__int64 ***)(a1 + 128);
  result = sub_1800853C8((_QWORD *)(a1 + 120), (__int64)v16, v23 + 2, v23);
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
