/*
 * XREFs of sub_1800E9AE0 @ 0x1800E9AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010E78 @ 0x180010E78 (sub_180010E78.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800A4D5C @ 0x1800A4D5C (sub_1800A4D5C.c)
 *     sub_1800B23F0 @ 0x1800B23F0 (sub_1800B23F0.c)
 *     sub_1800E4434 @ 0x1800E4434 (sub_1800E4434.c)
 *     sub_1800E44F8 @ 0x1800E44F8 (sub_1800E44F8.c)
 *     sub_1800E459C @ 0x1800E459C (sub_1800E459C.c)
 *     sub_1800EFFFC @ 0x1800EFFFC (sub_1800EFFFC.c)
 *     sub_1800F0588 @ 0x1800F0588 (sub_1800F0588.c)
 *     sub_1800F05BC @ 0x1800F05BC (sub_1800F05BC.c)
 *     sub_180106458 @ 0x180106458 (sub_180106458.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall sub_1800E9AE0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // eax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rdx
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
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rbx
  volatile signed __int32 *v40; // rbx
  __m128 v41; // [rsp+58h] [rbp-A8h] BYREF
  __m128 v42; // [rsp+68h] [rbp-98h] BYREF
  __int128 v43; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-78h]
  __int128 v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int128 v47; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int128 v49; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int128 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int128 v53; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int128 v55; // [rsp+110h] [rbp+10h] BYREF
  __int64 v56; // [rsp+120h] [rbp+20h]
  __int128 v57; // [rsp+128h] [rbp+28h] BYREF
  __int128 v58; // [rsp+138h] [rbp+38h] BYREF
  __int64 v59; // [rsp+148h] [rbp+48h]
  __int128 v60; // [rsp+150h] [rbp+50h] BYREF
  __int64 v61; // [rsp+160h] [rbp+60h]
  _BYTE v62[48]; // [rsp+168h] [rbp+68h] BYREF

  v57 = 0LL;
  `eh vector constructor iterator'(
    v62,
    0x10uLL,
    3uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_96);
  v4 = *a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v4 + 64);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v5 = *(_QWORD *)(v4 + 56);
        v6 = *(volatile signed __int32 **)(v4 + 64);
        break;
      }
    }
  }
  v44 = 0LL;
  v9 = *(_QWORD *)(v5 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v44 = *(_OWORD *)(v5 + 72);
        break;
      }
    }
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v60 = 0LL;
  v61 = 0LL;
  sub_180010E78(v44, (__int64)&v60);
  v58 = 0LL;
  v59 = 0LL;
  sub_1800E4434(v44, (__int64 *)&v58);
  sub_180106458((unsigned int)&v60, (unsigned int)&v58, (_DWORD)a1 + 152, (unsigned int)&v57, (__int64)v62);
  v43 = 0LL;
  v11 = (volatile signed __int32 *)a1[8];
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = (volatile signed __int32 *)a1[8];
  }
  sub_1800A4D5C(a1[7], &v43, 9);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( (_QWORD)v43 )
  {
    sub_1800F0588(v43);
    sub_1800F0588(v43);
    sub_1800F0588(v43);
    v12 = v43;
    sub_1800B23F0(&v41, (__m128 *)(a1[27] + 240), (__m128 *)(a1[27] + 272));
    sub_1800F0588(v12);
    v13 = v43;
    sub_1800B23F0(&v42, (__m128 *)(a1[27] + 256), (__m128 *)(a1[27] + 272));
    sub_1800F0588(v13);
    sub_1800F0588(v43);
    sub_1800F0588(v43);
    sub_1800F0588(v43);
    sub_1800F0588(v43);
    if ( a1[27] == -336 )
      wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
    sub_1800F0588(v43);
    v56 = 0LL;
    v14 = a1[27];
    v55 = 0LL;
    v56 = 0LL;
    sub_1800E459C(&v55, (_OWORD *)(v14 + 496), (_OWORD *)(v14 + 544));
    sub_1800F05BC(v43, &qword_18020B8E0, &v55);
    v54 = 0LL;
    v15 = a1[27];
    v53 = 0LL;
    v54 = 0LL;
    sub_1800E459C(&v53, (_OWORD *)(v15 + 544), (_OWORD *)(v15 + 592));
    sub_1800F05BC(v43, &qword_18020B900, &v53);
    v52 = 0LL;
    v16 = a1[27];
    v51 = 0LL;
    v52 = 0LL;
    sub_1800E459C(&v51, (_OWORD *)(v16 + 448), (_OWORD *)(v16 + 496));
    sub_1800F05BC(v43, &qword_18020B980, &v51);
    v50 = 0LL;
    v17 = a1[27];
    v49 = 0LL;
    v50 = 0LL;
    sub_1800E459C(&v49, (_OWORD *)(v17 + 400), (_OWORD *)(v17 + 448));
    sub_1800F05BC(v43, &qword_18020B960, &v49);
    v48 = 0LL;
    v18 = a1[27];
    v47 = 0LL;
    v48 = 0LL;
    sub_1800E459C(&v47, (_OWORD *)(v18 + 352), (_OWORD *)(v18 + 400));
    sub_1800F05BC(v43, &qword_18020B940, &v47);
    v46 = 0LL;
    v19 = (char *)a1[27];
    v45 = 0LL;
    sub_1800E44F8(&v45, v19, v19 + 192);
    sub_1800EFFFC(v43, &qword_18020B920, &v45);
    v20 = v45;
    if ( (_QWORD)v45 )
    {
      v21 = (v46 - v45) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v21 >= 0x1000 )
      {
        v22 = v21 + 39;
        v20 = *(_QWORD *)(v45 - 8);
        if ( (unsigned __int64)(v45 - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, v22);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
      v45 = 0LL;
      v46 = 0LL;
    }
    v23 = v47;
    if ( (_QWORD)v47 )
    {
      v24 = (v48 - v47) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v24 >= 0x1000 )
      {
        v25 = v24 + 39;
        v23 = *(_QWORD *)(v47 - 8);
        if ( (unsigned __int64)(v47 - v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v25);
          __debugbreak();
        }
      }
      j_j__o_free(v23);
      v47 = 0LL;
      v48 = 0LL;
    }
    v26 = v49;
    if ( (_QWORD)v49 )
    {
      v27 = (v50 - v49) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v27 >= 0x1000 )
      {
        v28 = v27 + 39;
        v26 = *(_QWORD *)(v49 - 8);
        if ( (unsigned __int64)(v49 - v26 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v26, v28);
          __debugbreak();
        }
      }
      j_j__o_free(v26);
      v49 = 0LL;
      v50 = 0LL;
    }
    v29 = v51;
    if ( (_QWORD)v51 )
    {
      v30 = (v52 - v51) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v30 >= 0x1000 )
      {
        v31 = v30 + 39;
        v29 = *(_QWORD *)(v51 - 8);
        if ( (unsigned __int64)(v51 - v29 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v29, v31);
          __debugbreak();
        }
      }
      j_j__o_free(v29);
      v51 = 0LL;
      v52 = 0LL;
    }
    v32 = v53;
    if ( (_QWORD)v53 )
    {
      v33 = (v54 - v53) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v33 >= 0x1000 )
      {
        v34 = v33 + 39;
        v32 = *(_QWORD *)(v53 - 8);
        if ( (unsigned __int64)(v53 - v32 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v32, v34);
          __debugbreak();
        }
      }
      j_j__o_free(v32);
      v53 = 0LL;
      v54 = 0LL;
    }
    v35 = v55;
    if ( (_QWORD)v55 )
    {
      v36 = (v56 - v55) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v36 >= 0x1000 )
      {
        v37 = v36 + 39;
        v35 = *(_QWORD *)(v55 - 8);
        if ( (unsigned __int64)(v55 - v35 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v35, v37);
          __debugbreak();
        }
      }
      j_j__o_free(v35);
    }
  }
  v38 = (volatile signed __int32 *)*((_QWORD *)&v43 + 1);
  if ( *((_QWORD *)&v43 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
      if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
    }
  }
  sub_180012938((__int64 *)&v58);
  sub_180012938((__int64 *)&v60);
  if ( *((_QWORD *)&v44 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v39 = *((_QWORD *)&v44 + 1);
      (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
    }
  }
  `eh vector destructor iterator'(v62, 0x10uLL, 3uLL, (void (*)(void *))unknown_libname_96);
  v40 = (volatile signed __int32 *)*((_QWORD *)&v57 + 1);
  if ( *((_QWORD *)&v57 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v57 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
    if ( !_InterlockedDecrement(v40 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
  }
}
