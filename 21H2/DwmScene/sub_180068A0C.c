/*
 * XREFs of sub_180068A0C @ 0x180068A0C
 * Callers:
 *     sub_18006885C @ 0x18006885C (sub_18006885C.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_1800FA9C0 @ 0x1800FA9C0 (sub_1800FA9C0.c)
 *     sub_1800FAE90 @ 0x1800FAE90 (sub_1800FAE90.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_180068E78 @ 0x180068E78 (sub_180068E78.c)
 *     sub_180069368 @ 0x180069368 (sub_180069368.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180068A0C(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
{
  int v6; // r12d
  int v7; // r15d
  _QWORD *v9; // r13
  __int64 *v10; // rsi
  volatile signed __int32 *v11; // rbx
  _BYTE *v12; // rbx
  char v13; // bl
  __int64 *v14; // rsi
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  char result; // al
  _QWORD *i; // rsi
  _QWORD *v21; // r14
  volatile signed __int32 *v22; // rbx
  void *v23; // rcx
  size_t Size; // [rsp+40h] [rbp-C0h]
  size_t Sizea; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int64 v32[4]; // [rsp+90h] [rbp-70h] BYREF
  const void *Src; // [rsp+B0h] [rbp-50h] BYREF
  void *v34[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v36; // [rsp+E8h] [rbp-18h]
  __int128 v37; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v38; // [rsp+100h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  if ( !a2 )
    v7 = 1;
  if ( !a3 )
    v6 = 1;
  *(_DWORD *)(a1 + 112) = a5;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_180017984(v9, &v27, 1u);
  v10 = (__int64 *)(a1 + 136);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 136), &v27);
  v11 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  sub_180067F58(a1, v34);
  if ( !v35 )
  {
    if ( v36 < 0x11 )
    {
      sub_18000FC14((__int64 *)v34, 0x11uLL, 0LL, "RenderTargetD3D11");
    }
    else
    {
      v12 = v34[0];
      v35 = 17LL;
      memmove(v34[0], "RenderTargetD3D11", 0x11uLL);
      v12[17] = 0;
    }
  }
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_180020B7C(v32, (__int64)v34);
  sub_180068194(*v10, v32);
  sub_18006821C(*v10, 1, 0);
  sub_18006821C(*v10, 2, 0);
  sub_18006821C(*v10, 4, 0);
  sub_18006821C(*v10, 8, 0);
  v13 = a5 & 0x7C | 3;
  LODWORD(Size) = 0;
  sub_18009FAA4(*v10, v7, v6, 0, a4, 0, v13, 0LL, Size, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v14 = (__int64 *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      sub_180017984(v9, &v29, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 152), &v29);
      v15 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
      v13 = a5 & 0x7C | 3;
    }
    v16 = (__int64 *)sub_180031B44(&Src, v34, " (staging)");
    sub_180068194(*v14, v16);
    sub_18006821C(*v14, 1, 0);
    sub_18006821C(*v14, 2, 0);
    sub_18006821C(*v14, 4, 0);
    sub_18006821C(*v14, 8, 0);
    LODWORD(Sizea) = 0;
    sub_18009FAA4(*v14, v7, v6, 0, a4, 3, v13 & 0x7C | 0x80, 0LL, Sizea, 0LL);
  }
  v17 = 0LL;
  v17.m128_f32[0] = (float)v6;
  v18 = 0LL;
  v18.m128_f32[0] = (float)v7;
  sub_180069368(a1, _mm_unpacklo_ps(v18, v17).m128_u64[0]);
  if ( a6 )
    sub_18006821C(a1, 1, 1);
  result = sub_180067F88(a1, 1);
  if ( result )
  {
    if ( a6 )
    {
      sub_180068E78(a1, a6);
      sub_18006821C(a1, 2, 0);
      result = sub_18006821C(a1, 4, 0);
    }
    else
    {
      v37 = 0LL;
      v38 = 0LL;
      sub_18007E228(v9, &v37);
      v21 = (_QWORD *)*((_QWORD *)&v37 + 1);
      for ( i = (_QWORD *)v37; i != v21; i += 2 )
      {
        v31 = 0LL;
        v22 = (volatile signed __int32 *)i[1];
        if ( v22 )
        {
          _InterlockedIncrement(v22 + 2);
          v22 = (volatile signed __int32 *)i[1];
        }
        *(_QWORD *)&v31 = *i;
        *((_QWORD *)&v31 + 1) = v22;
        sub_180068E78(a1, v31);
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
      result = sub_180012A18((__int64 *)&v37);
    }
  }
  if ( v36 >= 0x10 )
  {
    v23 = v34[0];
    if ( v36 + 1 >= 0x1000 )
    {
      v23 = (void *)*((_QWORD *)v34[0] - 1);
      if ( (unsigned __int64)((char *)v34[0] - (char *)v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, v36 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v23);
  }
  return result;
}
