/*
 * XREFs of sub_18007F998 @ 0x18007F998
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_18000F450 @ 0x18000F450 (sub_18000F450.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18007ABC4 @ 0x18007ABC4 (sub_18007ABC4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007F998(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm6_4
  __int64 *v9; // rdx
  __int64 result; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  signed __int32 v13; // eax
  bool v14; // zf
  volatile signed __int32 *v15; // rbx
  __int64 v16[2]; // [rsp+20h] [rbp-50h] BYREF
  __m128i si128; // [rsp+30h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v20; // [rsp+50h] [rbp-20h]

  sub_18007ABC4(a1, &v19);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = v19;
  v5 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
     + 1000000000 * (perf_counter / perf_frequency)
     - *sub_18000F450(v19, &v18);
  v6 = *(_QWORD *)(v4 + 280);
  if ( *(_QWORD *)(v4 + 272) == v6 )
    v7 = -3.4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  v8 = (float)((float)(int)v5 / 1000000.0) - v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
  LOWORD(v16[0]) = 0;
  std::wstring::assign((char *)v16, L"CPU", 3uLL);
  if ( (__int64 *)(a1 + 1392) != v16 )
  {
    v9 = v16;
    if ( si128.m128i_i64[1] >= 8uLL )
      v9 = (__int64 *)v16[0];
    std::wstring::assign((char *)(a1 + 1392), v9, si128.m128i_u64[0]);
  }
  result = unknown_libname_103(v16);
  if ( v8 > 0.0 )
  {
    v11 = *(float *)(a1 + 1368);
    if ( v8 > v11 )
      v11 = v8;
    *(float *)(a1 + 1368) = v11;
    v12 = *(float *)(a1 + 1372);
    if ( v12 > v8 )
      v12 = v8;
    *(float *)(a1 + 1372) = v12;
    *(float *)(a1 + 1376) = v8 + *(float *)(a1 + 1376);
    ++*(_QWORD *)(a1 + 1384);
  }
  if ( v20 )
  {
    v13 = _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      v15 = v20;
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return result;
}
