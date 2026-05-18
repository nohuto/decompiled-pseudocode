/*
 * XREFs of sub_18002FB30 @ 0x18002FB30
 * Callers:
 *     sub_180030050 @ 0x180030050 (sub_180030050.c)
 * Callees:
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002E1E0 @ 0x18002E1E0 (sub_18002E1E0.c)
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_18002FA8C @ 0x18002FA8C (sub_18002FA8C.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_1800303DC @ 0x1800303DC (sub_1800303DC.c)
 *     sub_1800315C8 @ 0x1800315C8 (sub_1800315C8.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x180031A3C (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006C5EC @ 0x18006C5EC (sub_18006C5EC.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002FB30(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v13; // rdi
  int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD **v19; // r14
  __int64 v20; // rsi
  char v22; // [rsp+20h] [rbp-E0h]
  char v23; // [rsp+21h] [rbp-DFh]
  char v24; // [rsp+22h] [rbp-DEh]
  __int128 v25; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v29[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v32[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v33[16]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v34[5]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v35[5]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD pExceptionObject[5]; // [rsp+130h] [rbp+30h] BYREF
  _Mtx_t v37[2]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v38; // [rsp+168h] [rbp+68h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+178h] [rbp+78h] BYREF
  LARGE_INTEGER v40[2]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v41; // [rsp+198h] [rbp+98h]

  *(_QWORD *)&v26 = a1;
  v24 = *((_BYTE *)a2 + 8);
  if ( v24 )
  {
    if ( !*a2 )
      goto LABEL_33;
    sub_180067304(*a2);
    *((_BYTE *)a2 + 8) = 0;
  }
  v23 = *((_BYTE *)a3 + 8);
  if ( v23 )
  {
    if ( !*a3 )
    {
      v27 = *(_OWORD *)std::make_error_code(v32, 1LL);
      sub_18002E1E0(v35, &v27);
      throw (std::system_error *)v35;
    }
    sub_180067304(*a3);
    *((_BYTE *)a3 + 8) = 0;
  }
  v22 = *((_BYTE *)a4 + 8);
  if ( v22 )
  {
    if ( !*a4 )
    {
      v28 = *(_OWORD *)std::make_error_code(v33, 1LL);
      sub_18002E1E0(pExceptionObject, &v28);
      throw (std::system_error *)pExceptionObject;
    }
    sub_180067304(*a4);
    *((_BYTE *)a4 + 8) = 0;
  }
  v8 = *(_DWORD *)(a1 + 512);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 312LL))(a1);
  v10 = v9;
  *(_QWORD *)&v25 = __PAIR64__(v8, v9);
  *((_QWORD *)&v38 + 1) = __PAIR64__(v8, v9);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v41) = 0;
  *(_QWORD *)&v38 = *(_QWORD *)(a1 + 480);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v13 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  QueryPerformanceCounter(&PerformanceCount[1]);
  *(_OWORD *)v37 = 0LL;
  (*(void (__fastcall **)(_QWORD, _Mtx_t *))(*(_QWORD *)v26 + 320LL))(v26, v37);
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v26 + 504) + 64LL))(
          *(_QWORD *)(v26 + 504),
          v10,
          v8);
  if ( LOBYTE(v37[1]) )
  {
    v15 = Mtx_unlock(v37[0]);
    if ( v15 )
    {
      std::_Throw_C_error(v15);
LABEL_33:
      v26 = *(_OWORD *)std::make_error_code(v31, 1LL);
      sub_18002E1E0(v34, &v26);
      throw (std::system_error *)v34;
    }
  }
  v16 = Query_perf_frequency();
  v17 = Query_perf_counter();
  v18 = 1000000000 * (v17 % v16) / v16 + 1000000000 * (v17 / v16);
  QueryPerformanceCounter(v40);
  if ( v14 == -2005270523 )
  {
    sub_18011BCAC(&unk_18020F0B8, 3LL, "Present() returned DXGI_ERROR_DEVICE_REMOVED");
  }
  else if ( v14 == -2005270521 )
  {
    sub_18011BCAC(&unk_18020F0B8, 3LL, "Present() returned DXGI_ERROR_DEVICE_RESET");
  }
  else if ( v14 < 0 )
  {
    sub_18011BCAC(&unk_18020F0B8, 3LL, "Present() returned error %08x", v14);
  }
  v25 = 0LL;
  v19 = (_QWORD **)v26;
  sub_18002F7A0(v26, &v25);
  if ( (_QWORD)v25 )
    sub_18002BE74(v25, v14);
  if ( *((_QWORD *)&v25 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v20 = *((_QWORD *)&v25 + 1);
      (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
    }
  }
  (*(void (__fastcall **)(_QWORD *, LARGE_INTEGER *))(*v19[63] + 136LL))(v19[63], PerformanceCount);
  v29[0] = v38;
  v29[1] = *(_OWORD *)&PerformanceCount[0].LowPart;
  v29[2] = *(_OWORD *)&v40[0].LowPart;
  v30 = v41;
  sub_1800303DC(v19, v29);
  sub_18002FA8C(v19);
  sub_180030058(v19);
  if ( v22 )
  {
    sub_1800315C8(a4);
    sub_180067278(*a4);
    *((_BYTE *)a4 + 8) = 1;
  }
  if ( v23 )
  {
    sub_1800315C8(a3);
    sub_180067278(*a3);
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( v24 )
  {
    sub_1800315C8(a2);
    sub_180067278(*a2);
    *((_BYTE *)a2 + 8) = 1;
  }
  return sub_18006C5EC(v19, v13, v18, v18 - v13);
}
