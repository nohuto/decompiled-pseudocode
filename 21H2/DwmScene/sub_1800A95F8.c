/*
 * XREFs of sub_1800A95F8 @ 0x1800A95F8
 * Callers:
 *     sub_18001A8B0 @ 0x18001A8B0 (sub_18001A8B0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800FA540 @ 0x1800FA540 (sub_1800FA540.c)
 *     sub_1801128F0 @ 0x1801128F0 (sub_1801128F0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180091F5C @ 0x180091F5C (sub_180091F5C.c)
 *     sub_1800A5C5C @ 0x1800A5C5C (sub_1800A5C5C.c)
 *     sub_1800A76CC @ 0x1800A76CC (sub_1800A76CC.c)
 *     sub_1800A8520 @ 0x1800A8520 (sub_1800A8520.c)
 *     sub_1800F2CF8 @ 0x1800F2CF8 (sub_1800F2CF8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800A95F8(__int64 a1, __int64 *a2)
{
  __int128 v2; // rcx
  __int128 *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rax
  char v19; // [rsp+30h] [rbp-D0h]
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+58h] [rbp-A8h]
  __int128 v24; // [rsp+68h] [rbp-98h]
  __int64 *v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[24]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v28[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v29[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v30[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v31[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v32[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v34[12]; // [rsp+180h] [rbp+80h] BYREF

  *(_QWORD *)&v2 = a1;
  v4 = (__int128 *)v2;
  v25 = a2;
  if ( *(_DWORD *)(v2 + 432) != 1 )
  {
    sub_18000FE28(v30);
    v17 = sub_18000FE28(v29);
    sub_18002D8C4(pExceptionObject, v17, 240, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v24 = 0LL;
  *((_QWORD *)&v2 + 1) = *(_QWORD *)(v2 + 136);
  if ( *((_QWORD *)&v2 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL));
    *((_QWORD *)&v2 + 1) = *(_QWORD *)(v2 + 136);
  }
  *(_QWORD *)&v2 = *(_QWORD *)(v2 + 128);
  v24 = v2;
  if ( !(_QWORD)v2 || !(unsigned __int8)sub_1800F2CF8() )
  {
    sub_18000FE28(v32);
    v18 = sub_18000FE28(v31);
    sub_18002D8C4(v34, v18, 244, (__int64)v32, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v34;
  }
  v5 = (_QWORD *)sub_1800A5C5C(*((_QWORD *)v4 + 55));
  *(_OWORD *)a2 = 0LL;
  sub_1800A76CC(v5, a2, 1);
  if ( *a2 )
  {
    v20 = 0LL;
    v6 = *((_QWORD *)v4 + 1);
    if ( !v6 )
    {
LABEL_38:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v26);
      throw (std::bad_weak_ptr *)v26;
    }
    do
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_38;
    }
    while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
    v20 = *v4;
    sub_180091F5C((_QWORD *)*a2, &v20);
    v23 = (unsigned __int64)v4 + 472;
    sub_180067278((__int64)v4 + 472);
    BYTE8(v23) = 1;
    v8 = (volatile signed __int32 *)a2[1];
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 3);
      v8 = (volatile signed __int32 *)a2[1];
    }
    v21 = *a2;
    v22 = v8;
    sub_1800A8520((__int64 **)v4 + 60, (__int64)v28, 0, &v21, v19);
    if ( v22 && _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    sub_180067304(v23);
  }
  v9 = *a2;
  v10 = *(_QWORD *)(*a2 + 104);
  if ( !v10 )
  {
LABEL_39:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v27);
    throw (std::bad_weak_ptr *)v27;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_39;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v12 = *(_QWORD *)(v9 + 96);
  v13 = *(volatile signed __int32 **)(v9 + 104);
  v14 = *a2;
  if ( v13 )
    _InterlockedIncrement(v13 + 3);
  *(_QWORD *)(v14 + 216) = v12;
  v15 = *(volatile signed __int32 **)(v14 + 224);
  *(_QWORD *)(v14 + 224) = v13;
  if ( v15 && _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *((_QWORD *)&v2 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v2 + 1))(*((_QWORD *)&v2 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v2 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v2 + 1) + 8LL))(*((_QWORD *)&v2 + 1));
    }
  }
  return a2;
}
