/*
 * XREFs of sub_1800C32D0 @ 0x1800C32D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_1800B1E18 @ 0x1800B1E18 (sub_1800B1E18.c)
 *     sub_1800B1EC0 @ 0x1800B1EC0 (sub_1800B1EC0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C32D0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __m128 v4; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r10
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  signed __int32 v12; // eax
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rbx
  __m128 v16; // xmm8
  __m128 v17; // xmm7
  __m128 v18; // xmm6
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rcx
  __m128 v26; // xmm6
  __int64 v27; // rbx
  _BYTE v28[32]; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+48h] [rbp-80h]
  __m128 v30; // [rsp+58h] [rbp-70h]

  v8 = *a2;
  v9 = 0LL;
  v10 = 0LL;
  v11 = *(_QWORD *)(v8 + 64);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      if ( !v12 )
        break;
      if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) )
      {
        v9 = *(_QWORD *)(v8 + 56);
        v10 = *(volatile signed __int32 **)(v8 + 64);
        break;
      }
    }
  }
  v29 = 0LL;
  v13 = *(_QWORD *)(v9 + 80);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
      {
        v29 = *(_OWORD *)(v9 + 72);
        break;
      }
    }
  }
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v15 = sub_18007AB84(a1, *(_DWORD *)(v29 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v15 + 64LL))(v15, &unk_18020F8A8, 0LL) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_18020F828);
    v16 = v4;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_18020F848);
    v17 = v4;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_18020F868);
    v18 = v4;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_18020F888);
    v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v18), _mm_unpacklo_ps(v17, v4));
    v20 = _mm_mul_ps(
            _mm_or_ps(
              _mm_and_ps(_mm_shuffle_ps(v19, v19, 255), (__m128)xmmword_18013FC80),
              _mm_andnot_ps((__m128)xmmword_18013FC80, (__m128)xmmword_18013FB20)),
            v19);
    v30 = v20;
    v21 = (_DWORD *)*a2;
    v21[74] = v20.m128_i32[0];
    v4 = _mm_shuffle_ps(v20, v20, 85);
    v21[75] = v4.m128_i32[0];
    v21[76] = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v21[77] = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  }
  v22 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 8LL))(*a4, v28) == 2;
  v23 = *a2;
  if ( v22 )
  {
    v4.m128_u64[1] = *((_QWORD *)&xmmword_180221EA0 + 1);
    *(_OWORD *)(v23 + 296) = xmmword_180221EA0;
  }
  if ( (*(_DWORD *)(v23 + 440) & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(v23 + 440) & 0x2000000) != 0 )
    {
      v24 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_180211D28);
      v25 = *a2;
      if ( v24 != *(float *)(*a2 + 328) )
      {
        *(float *)(v25 + 328) = v24;
        sub_1800B1EC0(v25, 2);
      }
    }
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 112LL))(*a4);
    v26 = v4;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 120LL))(*a4);
    sub_1800B1E18(*a2, _mm_unpacklo_ps(v26, v4).m128_i64[0]);
  }
  if ( *((_QWORD *)&v29 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL)) )
  {
    v27 = *((_QWORD *)&v29 + 1);
    (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v27 + 12)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
  }
}
