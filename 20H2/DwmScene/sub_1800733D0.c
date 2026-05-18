/*
 * XREFs of sub_1800733D0 @ 0x1800733D0
 * Callers:
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180070478 @ 0x180070478 (sub_180070478.c)
 *     sub_180070EC0 @ 0x180070EC0 (sub_180070EC0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800733D0(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-30h] BYREF
  __int128 v11; // [rsp+58h] [rbp-28h] BYREF
  __int128 v12; // [rsp+68h] [rbp-18h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a2;
  v12 = 0LL;
  sub_1800615B4(a1 + 8, (__int64)&v12);
  v7 = 0LL;
  if ( v13 )
  {
    sub_180070478((__int64 **)(a1 + 1080), (__int64)&v8, &v13);
    std::shared_ptr<__ExceptionPtr>::operator=(&v7, (_QWORD *)(v8 + 40));
  }
  v10 = *(_DWORD *)(a1 + 1096);
  *(_DWORD *)(a1 + 1096) = v10 + 1;
  v11 = 0LL;
  sub_180070EC0((__int64)&v11, &v10, &v7);
  sub_180070478((__int64 **)(a1 + 1080), (__int64)&v9, &v10);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + 40), &v11);
  v3 = v10;
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v7 + 1);
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  if ( BYTE8(v12) )
    sub_180061A34(v12);
  return v3;
}
