/*
 * XREFs of sub_1800A4B30 @ 0x1800A4B30
 * Callers:
 *     sub_18008C298 @ 0x18008C298 (sub_18008C298.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800A2D84 @ 0x1800A2D84 (sub_1800A2D84.c)
 *     sub_1800A2E30 @ 0x1800A2E30 (sub_1800A2E30.c)
 *     sub_1800F1664 @ 0x1800F1664 (sub_1800F1664.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800A4B30(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 **v5; // r12
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *v16; // rax
  __int128 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v22[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+F0h] [rbp-10h] BYREF
  int v25; // [rsp+F8h] [rbp-8h] BYREF

  v24 = a2;
  v25 = a4;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000FD48(v22);
    v16 = sub_18000FD48(v21);
    sub_180027FF4(pExceptionObject, v16, 419, (__int64)v22, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v24 = (__int64 *)(*(_QWORD *)(a1 + 64) & a3);
  sub_1800A2D84((__int64 *)(a1 + 416), (__int64)&v18, &v25);
  v5 = (__int64 **)(v18 + 56);
  v6 = *(__int64 **)(v18 + 56);
  v7 = v6[1];
  v8 = v24;
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_9;
  do
  {
    if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)v24 )
    {
      v6 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v6 == *v5 || (unsigned __int64)v24 < v6[4] )
LABEL_9:
    v6 = *v5;
  if ( v6 != *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v14 = v6[6];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    *a2 = v6[5];
    v12 = v6[6];
LABEL_26:
    a2[1] = v12;
    return a2;
  }
  v9 = *(_QWORD **)(v18 + 40);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    while ( !(unsigned __int8)sub_1800F1664(v10[2], v8) )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        goto LABEL_18;
      v8 = v24;
    }
    sub_1800A2E30(v5, (__int64)&v19, &v24);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + 40), v10 + 2);
    *a2 = 0LL;
    a2[1] = 0LL;
    v11 = v10[3];
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *a2 = v10[2];
    v12 = v10[3];
    goto LABEL_26;
  }
LABEL_18:
  v17 = 0LL;
  sub_1800A2E30(v5, (__int64)&v20, &v24);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v20 + 40), (__int64 *)&v17);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return a2;
}
