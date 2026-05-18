/*
 * XREFs of sub_1800673E0 @ 0x1800673E0
 * Callers:
 *     sub_18002AC60 @ 0x18002AC60 (sub_18002AC60.c)
 *     sub_180067520 @ 0x180067520 (sub_180067520.c)
 * Callees:
 *     sub_180063A98 @ 0x180063A98 (sub_180063A98.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800673E0(__int64 a1)
{
  __int64 v2; // rdx
  __m128 v3; // xmm0
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rsi
  float v6; // xmm6_4
  __m128 v7; // xmm7
  float v8; // xmm6_4

  v2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  if ( v2 )
  {
    v3 = 0LL;
    v4 = *(volatile signed __int32 **)(v2 + 464);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(v2 + 464);
    }
    v5 = *(_QWORD *)(v2 + 456);
    if ( v5 )
    {
      v6 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v7 = v3;
      v7.m128_f32[0] = v3.m128_f32[0] * v6;
      v8 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      v3.m128_f32[0] = v3.m128_f32[0] * v8;
      sub_180063A98(v5, _mm_unpacklo_ps(v3, v7).m128_i64[0]);
    }
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
}
