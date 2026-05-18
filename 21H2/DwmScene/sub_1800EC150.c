/*
 * XREFs of sub_1800EC150 @ 0x1800EC150
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 *     sub_1800A575C @ 0x1800A575C (sub_1800A575C.c)
 *     sub_1800A95F0 @ 0x1800A95F0 (sub_1800A95F0.c)
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 *     sub_1800A9FE8 @ 0x1800A9FE8 (sub_1800A9FE8.c)
 *     sub_1800AA224 @ 0x1800AA224 (sub_1800AA224.c)
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 *     sub_1800D22AC @ 0x1800D22AC (sub_1800D22AC.c)
 *     sub_1800D25F4 @ 0x1800D25F4 (sub_1800D25F4.c)
 *     sub_1800D2634 @ 0x1800D2634 (sub_1800D2634.c)
 *     sub_1800EBE4C @ 0x1800EBE4C (sub_1800EBE4C.c)
 *     sub_1800EBED8 @ 0x1800EBED8 (sub_1800EBED8.c)
 *     sub_1800F1F98 @ 0x1800F1F98 (sub_1800F1F98.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     sub_1800F83D4 @ 0x1800F83D4 (sub_1800F83D4.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 *     sub_1800F8FE0 @ 0x1800F8FE0 (sub_1800F8FE0.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800EC150(__int64 a1, __int128 *a2, int **a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r12
  int *v13; // rsi
  int *v14; // r15
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
  int v34; // [rsp+130h] [rbp+30h] BYREF
  __int64 v35; // [rsp+138h] [rbp+38h]
  __int128 v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+50h]
  __int64 v38; // [rsp+158h] [rbp+58h]
  __int128 *v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h] BYREF
  volatile signed __int32 *v41; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v43; // [rsp+180h] [rbp+80h]
  _BYTE pExceptionObject[24]; // [rsp+188h] [rbp+88h] BYREF
  __int128 v45; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v46[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v47[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  v39 = &v22;
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
  sub_180020B7C(v28, (__int64)aFont);
  v8 = sub_1800A575C(a2, &v40, v28, &v22);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v8);
  v9 = v41;
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v24[3] = 15LL;
  v24[2] = 4LL;
  strcpy((char *)v24, "Font");
  sub_1800EBE4C(*(_QWORD *)(a1 + 56), v24);
  sub_1800EBED8(*(_QWORD *)(a1 + 56), (__int64)a3);
  v10 = sub_1800D22AC(4, 4, 0LL);
  v11 = sub_1800D25F4(0, 3, 0LL) | v10;
  v12 = v11 | sub_1800D2634(0, 2, 0LL);
  v21 = 0LL;
  v13 = *a3;
  v14 = a3[1];
  while ( v13 != v14 )
  {
    sub_1800A95F0(*(_QWORD *)(a1 + 56), *v13);
    v15 = sub_1800A99A4(*(_QWORD *)(a1 + 56), &v42, 0LL, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v21, v15);
    v16 = v43;
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
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
    v26 = 4LL;
    strcpy(v25, "Font");
    v17 = v21;
    sub_1800F87B8(v21, v25, 0LL, v29);
    sub_1800F83D4(v17, 8, 2, 0, 1);
    v34 = 0;
    v35 = v12;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    sub_1800F8FE0(v17, &v34);
    sub_1800AA224(*(_QWORD *)(a1 + 56));
    ++v13;
  }
  v45 = 0LL;
  sub_1800A565C(a2, &v45, 2u);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_180020B7C(v32, (__int64)&qword_180213FF8);
  sub_180093020((__int64)v46, v32, 5);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_180020B7C(v33, (__int64)&qword_180214018);
  sub_180093020((__int64)v47, v33, 8);
  sub_1800F1F98(v45, v46, 2LL, 0LL);
  sub_1800F27BC(v45);
  v23 = 0LL;
  if ( *((_QWORD *)&v45 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL));
  v23 = v45;
  sub_1800AAE44(*(_QWORD *)(a1 + 56), (__int64 *)&v23);
  `eh vector destructor iterator'(v46, 0x40uLL, 2uLL, (void (*)(void *))sub_180093600);
  v18 = (volatile signed __int32 *)*((_QWORD *)&v45 + 1);
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  result = sub_1800A9FE8(*(_QWORD *)(a1 + 56));
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
