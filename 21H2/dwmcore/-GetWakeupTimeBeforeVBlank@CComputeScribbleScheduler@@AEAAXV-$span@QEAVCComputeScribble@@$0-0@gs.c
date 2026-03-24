/*
 * XREFs of ?GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x1801A48F4
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801A53C8 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V-$span@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank(
        __int64 a1,
        unsigned __int64 *a2,
        float *a3,
        float *a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  float v6; // xmm10_4
  float v10; // xmm8_4
  __int64 v11; // rdi
  float v13; // xmm6_4
  float i; // xmm7_4
  __int64 v15; // rcx
  __m128i v16; // xmm0
  float v17; // [rsp+30h] [rbp-A8h] BYREF
  char v18[4]; // [rsp+38h] [rbp-A0h] BYREF
  int v19; // [rsp+3Ch] [rbp-9Ch]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = *a2;
  v6 = *(float *)(a1 + 40) * 0.1;
  v10 = *(float *)(a1 + 40) - *(float *)(a1 + 44);
  v11 = *a2 - 1;
  v13 = 0.0;
  for ( i = 0.0;
        v11 >= 0;
        v13 = fmaxf(
                (float)((float)((float)((float)(1.0 - (float)((float)(int)result / _mm_cvtepi32_ps(v16).m128_f32[0]))
                                      * v10)
                              + v6)
                      + v17)
              + *(float *)(a1 + 44),
                v17 + v13) )
  {
    if ( v11 >= v5 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v15 = *(_QWORD *)(a2[1] + 8 * v11);
    (*(void (__fastcall **)(__int64, unsigned __int64 *, char *, float *))(*(_QWORD *)v15 + 24LL))(v15, a2, v18, &v17);
    result = (unsigned int)v19;
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 36));
    if ( v19 < 0 )
      result = 0LL;
    --v11;
    i = i + v17;
  }
  *a3 = v13 + *(float *)a1;
  *a4 = i + *(float *)a1;
  return result;
}
