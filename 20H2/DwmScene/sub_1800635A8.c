/*
 * XREFs of sub_1800635A8 @ 0x1800635A8
 * Callers:
 *     sub_180062F50 @ 0x180062F50 (sub_180062F50.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 * Callees:
 *     sub_18000F54C @ 0x18000F54C (sub_18000F54C.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18003264C @ 0x18003264C (sub_18003264C.c)
 *     sub_180062550 @ 0x180062550 (sub_180062550.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_180062744 @ 0x180062744 (sub_180062744.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_180099BB8 @ 0x180099BB8 (sub_180099BB8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800635A8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r14d
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rcx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v37; // [rsp+90h] [rbp-70h]
  _BYTE pExceptionObject[24]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v39[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v40[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v41[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v42; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v43; // [rsp+120h] [rbp+20h] BYREF

  result = sub_18006AB3C(a2);
  v5 = result;
  if ( (_DWORD)result )
  {
    v30 = 0LL;
    v6 = *(_QWORD *)(a2 + 16);
    if ( !v6 )
    {
LABEL_46:
      std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
      throw (std::bad_weak_ptr *)pExceptionObject;
    }
    do
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_46;
    }
    while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
    v30 = *(_OWORD *)(a2 + 8);
    sub_180062550(a1, &v30);
    v8 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
    if ( *((_QWORD *)&v30 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v42 = 0LL;
    sub_18000F54C(a2, &v42);
    v9 = sub_180062688(a1, v39);
    sub_1800628C4(v42, v9);
    v10 = *(_QWORD *)(a1 + 136);
    if ( v10 && (v11 = *(_QWORD *)(v10 + 128)) != 0 )
      v12 = *(unsigned int *)(v11 + 16);
    else
      v12 = 0LL;
    if ( v10 && (v13 = *(_QWORD *)(v10 + 128)) != 0 )
      v14 = *(unsigned int *)(v13 + 4);
    else
      v14 = 0LL;
    if ( v10 && (v15 = *(unsigned int **)(v10 + 128)) != 0LL )
      v16 = *v15;
    else
      v16 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD))(*(_QWORD *)v42 + 40LL))(
      v42,
      v16,
      v14,
      v12,
      *(_DWORD *)(a1 + 112));
    v43 = v5;
    sub_18003264C((__int64 **)(a1 + 120), (__int64)&v33, &v43);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v33 + 40), &v42);
    v17 = *(_QWORD *)(a1 + 136);
    if ( v17 )
    {
      v18 = v42;
      v31 = 0LL;
      v19 = *(_QWORD *)(v42 + 104);
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v17 = *(_QWORD *)(a1 + 136);
      }
      v31 = *(_OWORD *)(v18 + 96);
      sub_180099BB8(v17, &v31);
      v20 = sub_180062688(*(_QWORD *)(a1 + 136), v40);
      v21 = v42;
      v22 = *(volatile signed __int32 **)(v42 + 104);
      if ( v22 )
      {
        _InterlockedIncrement(v22 + 2);
        v22 = *(volatile signed __int32 **)(v21 + 104);
      }
      v34 = *(_QWORD *)(v21 + 96);
      v35 = v22;
      sub_1800628C4(v34, v20);
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        }
      }
    }
    v23 = *(_QWORD *)(a1 + 152);
    if ( v23 )
    {
      v24 = v42;
      v32 = 0LL;
      v25 = *(_QWORD *)(v42 + 120);
      if ( v25 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
        v23 = *(_QWORD *)(a1 + 152);
      }
      v32 = *(_OWORD *)(v24 + 112);
      sub_180099BB8(v23, &v32);
      v26 = sub_180062688(*(_QWORD *)(a1 + 152), v41);
      v27 = v42;
      v28 = *(volatile signed __int32 **)(v42 + 120);
      if ( v28 )
      {
        _InterlockedIncrement(v28 + 2);
        v28 = *(volatile signed __int32 **)(v27 + 120);
      }
      v36 = *(_QWORD *)(v27 + 112);
      v37 = v28;
      sub_1800628C4(v36, v26);
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
    }
    result = sub_180062744(a1, v5);
    v29 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        result = (unsigned int)_InterlockedDecrement(v29 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
  }
  return result;
}
