/*
 * XREFs of sub_1800D7CAC @ 0x1800D7CAC
 * Callers:
 *     sub_1800D6AD0 @ 0x1800D6AD0 (sub_1800D6AD0.c)
 * Callees:
 *     sub_18008CFC4 @ 0x18008CFC4 (sub_18008CFC4.c)
 *     sub_180097B58 @ 0x180097B58 (sub_180097B58.c)
 *     sub_18009AD5C @ 0x18009AD5C (sub_18009AD5C.c)
 *     sub_1800ABF20 @ 0x1800ABF20 (sub_1800ABF20.c)
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     sub_1800AC6CC @ 0x1800AC6CC (sub_1800AC6CC.c)
 *     sub_1800F00AC @ 0x1800F00AC (sub_1800F00AC.c)
 *     sub_1800F0318 @ 0x1800F0318 (sub_1800F0318.c)
 *     sub_18010529C @ 0x18010529C (sub_18010529C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D7CAC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp-48h]
  __int128 v28; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v29; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v32; // [rsp+100h] [rbp+0h] BYREF
  __int128 v33; // [rsp+110h] [rbp+10h] BYREF
  __int128 v34; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v35[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int128 v37; // [rsp+140h] [rbp+40h] BYREF
  __int64 v38; // [rsp+150h] [rbp+50h] BYREF
  __int128 v39; // [rsp+160h] [rbp+60h] BYREF

  v37 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v35);
  v37 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v37 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v9 = v36;
  if ( v36 && _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  v10 = *(_QWORD *)(a1 + 272);
  v28 = 0LL;
  if ( *((_QWORD *)&v37 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
  v28 = v37;
  (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v10 + 88LL))(v10, &v28, v6);
  v20 = 0LL;
  v11 = a3[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a3[1];
  }
  *(_QWORD *)&v20 = *a3;
  *((_QWORD *)&v20 + 1) = v11;
  v29 = 0LL;
  sub_18010529C(*(_QWORD *)(a1 + 272), (unsigned int)&v37, (unsigned int)&v29, (unsigned int)&v20, -1);
  v30 = 0LL;
  sub_1800AC348(*(_QWORD *)(a1 + 272), (__int64 *)&v30);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  v39 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v39);
  v31 = v39;
  v39 = 0uLL;
  sub_1800AC570(*(_QWORD *)(a1 + 272), (__int64 *)&v31);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    sub_18009AD5C(*a3, &v38);
    *(_QWORD *)&v21 = 0LL;
    DWORD2(v21) = (int)*(float *)&v38;
    HIDWORD(v21) = (int)*((float *)&v38 + 1);
    sub_1800AC6CC(*(_QWORD *)(a1 + 272), &v21);
  }
  v22 = 0LL;
  v12 = a3[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a3[1];
  }
  *(_QWORD *)&v22 = *a3;
  *((_QWORD *)&v22 + 1) = v12;
  sub_1800F00AC(*(_QWORD *)(a1 + 416), &qword_18020D148, &v22);
  v23 = 0LL;
  v13 = *(_QWORD *)(a1 + 312);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *(_QWORD *)(a1 + 312);
  }
  *(_QWORD *)&v23 = *(_QWORD *)(a1 + 304);
  *((_QWORD *)&v23 + 1) = v13;
  sub_1800F0318(*(_QWORD *)(a1 + 416), &qword_18020D148, &v23);
  sub_18008CFC4(*(_QWORD **)(a1 + 400), *(_DWORD *)(a1 + 448), 0, 2);
  v24 = 0LL;
  v14 = *(_QWORD *)(a1 + 408);
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = *(_QWORD *)(a1 + 408);
  }
  *(_QWORD *)&v24 = *(_QWORD *)(a1 + 400);
  *((_QWORD *)&v24 + 1) = v14;
  sub_180097B58(*(_QWORD *)(a1 + 336), &v24);
  v27 = 15LL;
  v26[2] = 7LL;
  v26[0] = 0x79616C70736944LL;
  (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD *, __int64, _QWORD *))(**(_QWORD **)(a1 + 272) + 208LL))(
    *(_QWORD *)(a1 + 272),
    &v37,
    a2,
    a1 + 336,
    v26);
  if ( v27 >= 0x10 )
  {
    v15 = v26[0];
    if ( v27 + 1 >= 0x1000 )
    {
      v15 = *(_QWORD *)(v26[0] - 8LL);
      if ( (unsigned __int64)(v26[0] - v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v27 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v15);
  }
  sub_1800ABF20(*(_QWORD *)(a1 + 272));
  v32 = 0LL;
  sub_1800F00AC(*(_QWORD *)(a1 + 416), &qword_18020D148, &v32);
  v33 = 0LL;
  sub_1800F0318(*(_QWORD *)(a1 + 416), &qword_18020D148, &v33);
  v25 = 0LL;
  v16 = a3[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a3[1];
  }
  *(_QWORD *)&v25 = *a3;
  *((_QWORD *)&v25 + 1) = v16;
  v34 = 0LL;
  result = sub_18010529C(*(_QWORD *)(a1 + 272), (unsigned int)&v37, (unsigned int)&v34, (unsigned int)&v25, -1);
  v18 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      result = (unsigned int)_InterlockedDecrement(v18 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)*((_QWORD *)&v37 + 1);
  if ( *((_QWORD *)&v37 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v19 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return result;
}
