/*
 * XREFs of sub_180107024 @ 0x180107024
 * Callers:
 *     sub_180106458 @ 0x180106458 (sub_180106458.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18007E5D0 @ 0x18007E5D0 (sub_18007E5D0.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800B3A2C @ 0x1800B3A2C (sub_1800B3A2C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180107024(_QWORD *a1, __int64 a2, __int64 a3)
{
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  __int64 *v9; // rax
  _OWORD *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  _OWORD *v13; // rax
  __int64 v14; // r14
  volatile signed __int32 *v15; // rdi
  __int64 v16; // r8
  signed __int32 v17; // eax
  __m128 *v18; // rax
  __m128 *v19; // rax
  float *v20; // rcx
  __m128 v22; // [rsp+48h] [rbp-59h] BYREF
  __int128 v23; // [rsp+58h] [rbp-49h] BYREF
  __m128 v24; // [rsp+68h] [rbp-39h] BYREF
  __int64 v25[2]; // [rsp+78h] [rbp-29h] BYREF

  *(_OWORD *)a1 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = *(float *)&xmmword_18020DC60;
  v6 = *((float *)&xmmword_18020DC60 + 1);
  v7 = *((float *)&xmmword_18020DC60 + 2);
  v8 = *((float *)&xmmword_18020DC60 + 3);
  v9 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) )
  {
    v10 = *(_OWORD **)(a3 + 64);
    v10[12] = xmmword_18021AB60;
    v10[13] = xmmword_18021AB60;
    v10[14] = xmmword_18021AB60;
    v10[15] = xmmword_18021AB60;
    v10[16] = xmmword_18021AB60;
    v10[17] = xmmword_18021AB60;
    v10[18] = xmmword_18021AB60;
    v10[19] = xmmword_18021AB60;
    v10[20] = xmmword_18021AB60;
  }
  else
  {
    v11 = (volatile signed __int32 *)v9[1];
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 2);
      v11 = (volatile signed __int32 *)v9[1];
    }
    v12 = *v9;
    v25[0] = v12;
    v25[1] = (__int64)v11;
    v13 = *(_OWORD **)(a3 + 64);
    v13[12] = *(_OWORD *)(v12 + 256);
    v13[13] = *(_OWORD *)(v12 + 272);
    v13[14] = *(_OWORD *)(v12 + 288);
    v13[15] = *(_OWORD *)(v12 + 304);
    v13[16] = *(_OWORD *)(v12 + 320);
    v13[17] = *(_OWORD *)(v12 + 336);
    v13[18] = *(_OWORD *)(v12 + 352);
    v13[19] = *(_OWORD *)(v12 + 368);
    v13[20] = *(_OWORD *)(v12 + 384);
    v14 = 0LL;
    v15 = 0LL;
    v16 = *(_QWORD *)(v12 + 64);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v14 = *(_QWORD *)(v12 + 56);
          v15 = *(volatile signed __int32 **)(v12 + 64);
          break;
        }
      }
    }
    sub_1800839A4(v14);
    v22 = *(__m128 *)(v14 + 156);
    v18 = (__m128 *)sub_1800B3A2C(v25[0], &v23);
    v19 = sub_18007E5D0(&v24, v18, &v22);
    v5 = v19->m128_f32[0];
    v6 = v19->m128_f32[1];
    v7 = v19->m128_f32[2];
    v8 = v19->m128_f32[3];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    std::shared_ptr<__ExceptionPtr>::operator=(a1, v25);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  v20 = *(float **)(a3 + 64);
  v20[84] = v5 * 1.4142135;
  v20[85] = v6 * 1.4142135;
  v20[86] = v7 * 1.4142135;
  v20[87] = v8 * 1.4142135;
  return a1;
}
