/*
 * XREFs of sub_1800C3600 @ 0x1800C3600
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007ABC4 @ 0x18007ABC4 (sub_18007ABC4.c)
 *     sub_18007AE8C @ 0x18007AE8C (sub_18007AE8C.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800AACF0 @ 0x1800AACF0 (sub_1800AACF0.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C6240 @ 0x1800C6240 (sub_1800C6240.c)
 *     sub_1800C6B94 @ 0x1800C6B94 (sub_1800C6B94.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800CAE68 @ 0x1800CAE68 (sub_1800CAE68.c)
 *     sub_1801140E0 @ 0x1801140E0 (sub_1801140E0.c)
 *     sub_1801142C8 @ 0x1801142C8 (sub_1801142C8.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C3600(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  char v15; // al
  char v16; // bl
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned int v19; // eax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  _QWORD v23[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-A8h]
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  size_t v30[4]; // [rsp+A0h] [rbp-60h] BYREF
  size_t v31[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v33; // [rsp+E8h] [rbp-18h]
  __int128 v34; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v35; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v36[64]; // [rsp+110h] [rbp+10h] BYREF

  memset(v36, 0, sizeof(v36));
  v25 = 0LL;
  v8 = *(_QWORD *)(a1 + 472);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v25 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v25 + 1) = v8;
  sub_1801140E0(
    (unsigned int)v36,
    (unsigned int)&v25,
    (unsigned int)"..\\Source\\Engine\\ViewerEngine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene",
    1);
  v28 = 0LL;
  v29 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 14LL;
  strcpy((char *)v23, "PreRenderScene");
  v9 = sub_18007ABC4(a1, &v32);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v26 = *v9;
  v27 = v10;
  sub_180076E98(&v28, &v26, (__int64)v23);
  if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  v11 = v33;
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v23[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v23[0] - 8LL);
      if ( (unsigned __int64)(v23[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v23[0]) = 0;
  v13 = sub_18007AB84(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_1800CAE68(a1, *a3, *a4, v13);
  LOBYTE(v14) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v13 + 64LL))(v13, &unk_1802120A8, v14);
  v16 = v15;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802120C8);
  LOBYTE(v17) = v16;
  sub_1800C3FC8(a1, a2, v17);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1457) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 64LL))(
                            v13,
                            &unk_180212068,
                            0LL);
  sub_1800C6B94(a1);
  sub_1800C6240(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_1800C8A84(a1, a3, a4, a2);
  v18 = sub_18007B2B4(a1);
  v35 = 0LL;
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_180020B7C(v30, (__int64)&qword_180214418);
  sub_1800A656C(v18, &v35, v30);
  sub_1800AACF0(v35, &qword_180213558, *(_BYTE *)(a1 + 1457));
  v34 = 0LL;
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_180020B7C(v31, (__int64)&qword_180214458);
  sub_1800A656C(v18, &v34, v31);
  sub_1800AACF0(v34, &qword_180213558, *(_BYTE *)(a1 + 1457));
  v19 = sub_18007AE8C(a1, a3);
  sub_1800C9D68(a1, a2, v19, a4);
  v20 = (volatile signed __int32 *)*((_QWORD *)&v34 + 1);
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  sub_180077C2C((__int64 *)&v28);
  return sub_1801142C8(v36);
}
