/*
 * XREFs of sub_180029190 @ 0x180029190
 * Callers:
 *     sub_1800293C0 @ 0x1800293C0 (sub_1800293C0.c)
 * Callees:
 *     sub_18000F7C8 @ 0x18000F7C8 (sub_18000F7C8.c)
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_180062F8C @ 0x180062F8C (sub_180062F8C.c)
 *     sub_180066DE0 @ 0x180066DE0 (sub_180066DE0.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180029190(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13[6]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+70h] [rbp+7h] BYREF
  __int128 v15; // [rsp+80h] [rbp+17h] BYREF
  __int128 v16; // [rsp+90h] [rbp+27h] BYREF

  v13[4] = (__int64)a2;
  v15 = 0LL;
  result = sub_180029ED0(a1, &v15);
  if ( (_QWORD)v15 )
  {
    v16 = 0LL;
    *(_QWORD *)&v12 = v13;
    v13[2] = 0LL;
    v13[3] = 15LL;
    LOBYTE(v13[0]) = 0;
    sub_18000FB34(v13, 0x18uLL, 0LL, "RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_18002CC84((unsigned int)&v16, (unsigned int)&v15, v6, v5, (__int64)a2, (__int64)v13);
    v7 = sub_18006AB04(v15);
    v14 = 0LL;
    sub_18000F7C8(v7, &v14, 0);
    sub_180062F8C(v14, &v16);
    v12 = v14;
    v14 = 0uLL;
    result = sub_180066DE0(a1, &v12);
    v8 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        result = (unsigned int)_InterlockedDecrement(v8 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
    if ( *((_QWORD *)&v16 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        result = (unsigned int)_InterlockedDecrement(v9 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return result;
}
