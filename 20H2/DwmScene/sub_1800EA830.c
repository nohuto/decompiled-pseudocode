/*
 * XREFs of sub_1800EA830 @ 0x1800EA830
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18008D750 @ 0x18008D750 (sub_18008D750.c)
 *     sub_18008DD30 @ 0x18008DD30 (sub_18008DD30.c)
 *     sub_18009FD8C @ 0x18009FD8C (sub_18009FD8C.c)
 *     sub_18009FE8C @ 0x18009FE8C (sub_18009FE8C.c)
 *     sub_1800A3D20 @ 0x1800A3D20 (sub_1800A3D20.c)
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800A4718 @ 0x1800A4718 (sub_1800A4718.c)
 *     sub_1800A4954 @ 0x1800A4954 (sub_1800A4954.c)
 *     sub_1800A5574 @ 0x1800A5574 (sub_1800A5574.c)
 *     sub_1800CC9DC @ 0x1800CC9DC (sub_1800CC9DC.c)
 *     sub_1800CCD24 @ 0x1800CCD24 (sub_1800CCD24.c)
 *     sub_1800CCD44 @ 0x1800CCD44 (sub_1800CCD44.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 *     sub_1800E6608 @ 0x1800E6608 (sub_1800E6608.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     sub_1800F2B04 @ 0x1800F2B04 (sub_1800F2B04.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     sub_1800F3710 @ 0x1800F3710 (sub_1800F3710.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800EA830(__int64 a1, __int128 *a2, int **a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r15
  int *v13; // rsi
  int *v14; // r14
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  volatile signed __int32 *v18; // rbx
  __int64 result; // rax
  __int64 v20; // rbx
  __int128 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24[4]; // [rsp+70h] [rbp-90h] BYREF
  char v25[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  size_t v28[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v33[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v34[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v35[4]; // [rsp+150h] [rbp+50h] BYREF
  int v36; // [rsp+170h] [rbp+70h] BYREF
  __int64 v37; // [rsp+178h] [rbp+78h]
  __int128 v38; // [rsp+180h] [rbp+80h]
  __int64 v39; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]
  __int128 *v41; // [rsp+1A0h] [rbp+A0h]
  __int64 v42; // [rsp+1A8h] [rbp+A8h] BYREF
  volatile signed __int32 *v43; // [rsp+1B0h] [rbp+B0h]
  __int64 v44; // [rsp+1B8h] [rbp+B8h] BYREF
  volatile signed __int32 *v45; // [rsp+1C0h] [rbp+C0h]
  _BYTE pExceptionObject[24]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v47[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v48[8]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v49[8]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v50[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v51; // [rsp+2E0h] [rbp+1E0h] BYREF

  v41 = &v22;
  v22 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
LABEL_28:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_28;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v22 = *(_OWORD *)(a1 + 8);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18001CDF8(v28, (__int64)&qword_18020D428);
  v8 = sub_18009FE8C(a2, &v42, v28, &v22);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v8);
  v9 = v43;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v24[3] = 15LL;
  v24[2] = 6LL;
  strcpy((char *)v24, "Symbol");
  sub_1800E657C(*(_QWORD *)(a1 + 56), v24);
  sub_1800E6608(*(_QWORD *)(a1 + 56), (__int64)a3);
  v10 = sub_1800CC9DC(4, 4, 0LL);
  v11 = sub_1800CCD44(0, 4, 0LL) | v10;
  v12 = v11 | sub_1800CCD24(0, 3, 0LL);
  v21 = 0LL;
  v13 = *a3;
  v14 = a3[1];
  while ( v13 != v14 )
  {
    sub_1800A3D20(*(_QWORD *)(a1 + 56), *v13);
    v15 = sub_1800A40D4(*(_QWORD *)(a1 + 56), &v44, 0LL, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v21, v15);
    v16 = v45;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v31 = 15LL;
    v30 = 0LL;
    v29[0] = 0;
    v27 = 15LL;
    v26 = 6LL;
    strcpy(v25, "Symbol");
    v17 = v21;
    sub_1800F2EE8(v21, v25, 0LL, v29);
    sub_1800F2B04(v17, 8, 2, 0, 1);
    v36 = 0;
    v37 = v12;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    sub_1800F3710(v17, &v36);
    sub_1800A4954(*(_QWORD *)(a1 + 56));
    ++v13;
  }
  v51 = 0LL;
  sub_18009FD8C(a2, &v51, 4u);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18001CDF8(v32, (__int64)&qword_18020D448);
  sub_18008D750((__int64)v47, v32, 7);
  sub_1800EC774(v51, v47, 0LL);
  sub_18008DD30(v47);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18001CDF8(v33, (__int64)&qword_18020D468);
  sub_18008D750((__int64)v48, v33, 5);
  sub_1800EC774(v51, v48, 0LL);
  sub_18008DD30(v48);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18001CDF8(v34, (__int64)&qword_18020D488);
  sub_18008D750((__int64)v49, v34, 2);
  sub_1800EC774(v51, v49, 0LL);
  sub_18008DD30(v49);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18001CDF8(v35, (__int64)&qword_18020D4A8);
  sub_18008D750((__int64)v50, v35, 2);
  sub_1800EC774(v51, v50, 0LL);
  sub_18008DD30(v50);
  sub_1800ECEEC(v51);
  v23 = 0LL;
  if ( *((_QWORD *)&v51 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL));
  v23 = v51;
  sub_1800A5574(*(_QWORD *)(a1 + 56), (__int64 *)&v23);
  v18 = (volatile signed __int32 *)*((_QWORD *)&v51 + 1);
  if ( *((_QWORD *)&v51 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  result = sub_1800A4718(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v21 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v20 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  return result;
}
