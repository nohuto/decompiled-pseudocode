/*
 * XREFs of sub_1800321A0 @ 0x1800321A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010534 @ 0x180010534 (sub_180010534.c)
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_1800329B4 @ 0x1800329B4 (sub_1800329B4.c)
 *     sub_180036B88 @ 0x180036B88 (sub_180036B88.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_1800692A8 @ 0x1800692A8 (sub_1800692A8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800321A0(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // r13d
  int v7; // r12d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  bool v13; // di
  int v14; // edx
  __int64 v15; // r14
  __int64 **v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128 v21; // xmm2
  __m128 v22; // xmm0
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int128 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v34[3]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h]
  _DWORD v40[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+DCh] [rbp-24h]
  _BYTE v42[20]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+FCh] [rbp-4h]

  v6 = a3;
  v7 = a2;
  if ( !a2 )
    v7 = 1;
  if ( !a3 )
    v6 = 1;
  sub_1800329B4(a1, v7, v6, a4, a5);
  v39 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v39 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v31 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 1u);
  v33 = v39;
  sub_180018B88(&v31, (__int64 *)&v33);
  v38 = 0LL;
  v11 = v31;
  sub_180029F64(v31, &v38);
  v30 = 0LL;
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    v12 = *(_QWORD *)(a1 + 104);
    v11 = v31;
  }
  v32[0] = *(_QWORD *)(a1 + 96);
  v32[1] = v12;
  sub_180018B88(&v30, v32);
  v37 = 0LL;
  sub_180036B88(v30, &v37);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v37 + 80LL))(v37, v42);
  v13 = v43 > 1;
  v41 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v14 = 2;
  else
    v14 = (a5 & 8) != 0;
  v40[0] = sub_18002F66C(a4, v14);
  v40[1] = 2 * v13 + 4;
  v40[2] = 0;
  v36 = 0LL;
  sub_180036B88(v30, &v36);
  v15 = v38;
  v16 = (__int64 **)(a1 + 128);
  v17 = *(_QWORD *)(a1 + 128);
  if ( v17 )
  {
    *v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v15 + 72LL))(
          v15,
          v36,
          v40,
          a1 + 128);
  sub_18002BE74(v11, v18);
  v19 = sub_180067F58(a1, v34);
  if ( *(_QWORD *)(v19 + 24) >= 0x10uLL )
    v19 = *(_QWORD *)v19;
  sub_180010534(*v16, (const char *)v19);
  if ( v35 >= 0x10 )
  {
    v20 = v34[0];
    if ( v35 + 1 >= 0x1000 )
    {
      v20 = *(_QWORD *)(v34[0] - 8LL);
      if ( (unsigned __int64)(v34[0] - v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v35 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v20);
  }
  v21 = 0LL;
  v21.m128_f32[0] = (float)v6;
  v22 = 0LL;
  v22.m128_f32[0] = (float)v7;
  result = sub_1800692A8(a1, _mm_unpacklo_ps(v22, v21).m128_u64[0]);
  v24 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( *((_QWORD *)&v30 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v26 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  v27 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( *((_QWORD *)&v31 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v28 = *((_QWORD *)&v31 + 1);
      (***((void (__fastcall ****)(_QWORD))&v31 + 1))(*((_QWORD *)&v31 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v31 + 1) + 8LL))(*((_QWORD *)&v31 + 1));
    }
  }
  if ( *((_QWORD *)&v39 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v29 = *((_QWORD *)&v39 + 1);
      (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
    }
  }
  return result;
}
