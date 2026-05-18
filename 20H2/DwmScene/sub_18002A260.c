/*
 * XREFs of sub_18002A260 @ 0x18002A260
 * Callers:
 *     sub_18002A780 @ 0x18002A780 (sub_18002A780.c)
 * Callees:
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180028910 @ 0x180028910 (sub_180028910.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 *     sub_18002A788 @ 0x18002A788 (sub_18002A788.c)
 *     sub_18002AB0C @ 0x18002AB0C (sub_18002AB0C.c)
 *     sub_18002BCF8 @ 0x18002BCF8 (sub_18002BCF8.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002C16C (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180066D1C @ 0x180066D1C (sub_180066D1C.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002A260(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
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
    sub_180061A34(*a2);
    *((_BYTE *)a2 + 8) = 0;
  }
  v23 = *((_BYTE *)a3 + 8);
  if ( v23 )
  {
    if ( !*a3 )
    {
      v27 = *(_OWORD *)std::make_error_code(v32, 1LL);
      sub_180028910(v35, &v27);
      throw (std::system_error *)v35;
    }
    sub_180061A34(*a3);
    *((_BYTE *)a3 + 8) = 0;
  }
  v22 = *((_BYTE *)a4 + 8);
  if ( v22 )
  {
    if ( !*a4 )
    {
      v28 = *(_OWORD *)std::make_error_code(v33, 1LL);
      sub_180028910(pExceptionObject, &v28);
      throw (std::system_error *)pExceptionObject;
    }
    sub_180061A34(*a4);
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
      sub_180028910(v34, &v26);
      throw (std::system_error *)v34;
    }
  }
  v16 = Query_perf_frequency();
  v17 = Query_perf_counter();
  v18 = 1000000000 * (v17 % v16) / v16 + 1000000000 * (v17 / v16);
  QueryPerformanceCounter(v40);
  if ( v14 == -2005270523 )
  {
    sub_1801163DC(&unk_180208040, 3LL, "Present() returned DXGI_ERROR_DEVICE_REMOVED");
  }
  else if ( v14 == -2005270521 )
  {
    sub_1801163DC(&unk_180208040, 3LL, "Present() returned DXGI_ERROR_DEVICE_RESET");
  }
  else if ( v14 < 0 )
  {
    sub_1801163DC(&unk_180208040, 3LL, "Present() returned error %08x", v14);
  }
  v25 = 0LL;
  v19 = (_QWORD **)v26;
  sub_180029ED0(v26, &v25);
  if ( (_QWORD)v25 )
    sub_1800265A4(v25, v14);
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
  sub_18002AB0C(v19, v29);
  sub_18002A1BC(v19);
  sub_18002A788(v19);
  if ( v22 )
  {
    sub_18002BCF8(a4);
    sub_1800619A8(*a4);
    *((_BYTE *)a4 + 8) = 1;
  }
  if ( v23 )
  {
    sub_18002BCF8(a3);
    sub_1800619A8(*a3);
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( v24 )
  {
    sub_18002BCF8(a2);
    sub_1800619A8(*a2);
    *((_BYTE *)a2 + 8) = 1;
  }
  return sub_180066D1C(v19, v13, v18, v18 - v13);
}
