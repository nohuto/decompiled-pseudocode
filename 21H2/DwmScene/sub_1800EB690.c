/*
 * XREFs of sub_1800EB690 @ 0x1800EB690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F58 @ 0x180010F58 (sub_180010F58.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_1800AA62C @ 0x1800AA62C (sub_1800AA62C.c)
 *     sub_1800E9D04 @ 0x1800E9D04 (sub_1800E9D04.c)
 *     sub_1800E9DC8 @ 0x1800E9DC8 (sub_1800E9DC8.c)
 *     sub_1800E9E6C @ 0x1800E9E6C (sub_1800E9E6C.c)
 *     sub_1800F58CC @ 0x1800F58CC (sub_1800F58CC.c)
 *     sub_1800F5E8C @ 0x1800F5E8C (sub_1800F5E8C.c)
 *     sub_18010BD28 @ 0x18010BD28 (sub_18010BD28.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall sub_1800EB690(__int64 *a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  char *v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int128 v34; // [rsp+48h] [rbp-B8h]
  __int128 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int128 v42; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int128 v44; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int128 v49; // [rsp+108h] [rbp+8h] BYREF
  __int64 v50; // [rsp+118h] [rbp+18h]
  _BYTE v51[48]; // [rsp+120h] [rbp+20h] BYREF

  v35 = 0LL;
  v4 = (volatile signed __int32 *)a1[8];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a1[8];
  }
  sub_1800AA62C(a1[7], &v35, 9);
  if ( v4 )
  {
    if ( !_InterlockedDecrement(v4 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  if ( (_QWORD)v35 )
  {
    v46 = 0LL;
    `eh vector constructor iterator'(
      v51,
      0x10uLL,
      3uLL,
      (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
      (void (*)(void *))unknown_libname_98);
    v5 = *a2;
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(*a2 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(v5 + 56);
          v7 = *(volatile signed __int32 **)(v5 + 64);
          break;
        }
      }
    }
    v34 = 0LL;
    v10 = *(_QWORD *)(v6 + 80);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v10 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
        {
          v34 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v49 = 0LL;
    v50 = 0LL;
    sub_180010F58(v34, (__int64)&v49);
    v47 = 0LL;
    v48 = 0LL;
    sub_1800E9D04(v34, (__int64 *)&v47);
    sub_18010BD28((unsigned int)&v49, (unsigned int)&v47, (_DWORD)a1 + 112, (unsigned int)&v46, (__int64)v51);
    v45 = 0LL;
    v12 = a1[22];
    v44 = 0LL;
    v45 = 0LL;
    sub_1800E9E6C(&v44, (_OWORD *)(v12 + 496), (_OWORD *)(v12 + 544));
    sub_1800F5E8C(v35, &qword_180212958, &v44);
    v43 = 0LL;
    v13 = a1[22];
    v42 = 0LL;
    v43 = 0LL;
    sub_1800E9E6C(&v42, (_OWORD *)(v13 + 544), (_OWORD *)(v13 + 592));
    sub_1800F5E8C(v35, &qword_180212978, &v42);
    v41 = 0LL;
    v14 = a1[22];
    v40 = 0LL;
    v41 = 0LL;
    sub_1800E9E6C(&v40, (_OWORD *)(v14 + 448), (_OWORD *)(v14 + 496));
    sub_1800F5E8C(v35, &qword_1802129F8, &v40);
    v39 = 0LL;
    v15 = a1[22];
    v38 = 0LL;
    v39 = 0LL;
    sub_1800E9E6C(&v38, (_OWORD *)(v15 + 352), (_OWORD *)(v15 + 400));
    sub_1800F5E8C(v35, &qword_1802129B8, &v38);
    v37 = 0LL;
    v16 = (char *)a1[22];
    v36 = 0LL;
    sub_1800E9DC8(&v36, v16, v16 + 192);
    sub_1800F58CC(v35, &qword_180212998, &v36);
    v17 = v36;
    if ( (_QWORD)v36 )
    {
      v18 = (v37 - v36) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v18 >= 0x1000 )
      {
        v19 = v18 + 39;
        v17 = *(_QWORD *)(v36 - 8);
        if ( (unsigned __int64)(v36 - v17 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v17, v19);
          __debugbreak();
        }
      }
      j_j__o_free(v17);
      v36 = 0LL;
      v37 = 0LL;
    }
    v20 = v38;
    if ( (_QWORD)v38 )
    {
      v21 = (v39 - v38) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v21 >= 0x1000 )
      {
        v22 = v21 + 39;
        v20 = *(_QWORD *)(v38 - 8);
        if ( (unsigned __int64)(v38 - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, v22);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
      v38 = 0LL;
      v39 = 0LL;
    }
    v23 = v40;
    if ( (_QWORD)v40 )
    {
      v24 = (v41 - v40) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v24 >= 0x1000 )
      {
        v25 = v24 + 39;
        v23 = *(_QWORD *)(v40 - 8);
        if ( (unsigned __int64)(v40 - v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v25);
          __debugbreak();
        }
      }
      j_j__o_free(v23);
      v40 = 0LL;
      v41 = 0LL;
    }
    v26 = v42;
    if ( (_QWORD)v42 )
    {
      v27 = (v43 - v42) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v27 >= 0x1000 )
      {
        v28 = v27 + 39;
        v26 = *(_QWORD *)(v42 - 8);
        if ( (unsigned __int64)(v42 - v26 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v26, v28);
          __debugbreak();
        }
      }
      j_j__o_free(v26);
      v42 = 0LL;
      v43 = 0LL;
    }
    v29 = v44;
    if ( (_QWORD)v44 )
    {
      v30 = (v45 - v44) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v30 >= 0x1000 )
      {
        v31 = v30 + 39;
        v29 = *(_QWORD *)(v44 - 8);
        if ( (unsigned __int64)(v44 - v29 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v29, v31);
          __debugbreak();
        }
      }
      j_j__o_free(v29);
      v44 = 0LL;
      v45 = 0LL;
    }
    sub_180012A18((__int64 *)&v47);
    sub_180012A18((__int64 *)&v49);
    if ( *((_QWORD *)&v34 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
      }
    }
    `eh vector destructor iterator'(v51, 0x10uLL, 3uLL, (void (*)(void *))unknown_libname_98);
    v32 = (volatile signed __int32 *)*((_QWORD *)&v46 + 1);
    if ( *((_QWORD *)&v46 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
        if ( !_InterlockedDecrement(v32 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
  }
  v33 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
    if ( !_InterlockedDecrement(v33 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
  }
}
