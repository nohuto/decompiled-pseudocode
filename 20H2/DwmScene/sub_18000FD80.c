/*
 * XREFs of sub_18000FD80 @ 0x18000FD80
 * Callers:
 *     sub_1800161B8 @ 0x1800161B8 (sub_1800161B8.c)
 * Callees:
 *     sub_1800280D4 @ 0x1800280D4 (sub_1800280D4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000FD80(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5,
        int a6,
        unsigned int a7,
        float X)
{
  unsigned int v11; // eax
  float v12; // xmm0_4
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _QWORD v16[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-20h] BYREF

  v16[2] = a3;
  v17[2] = a4;
  v16[0] = *a4;
  v16[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v17[0] = *a3;
  v17[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v18[0] = *a2;
  v18[1] = a2[1];
  ((void (__fastcall *)(__int64, _OWORD *, _QWORD *, _QWORD *))sub_1800280D4)(a1, v18, v17, v16);
  *(_QWORD *)a1 = &RenderOutputDwm::`vftable';
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1704) = a5;
  *(_DWORD *)(a1 + 1708) = a6;
  v11 = 1;
  if ( a7 > 1 )
    v11 = a7;
  *(_DWORD *)(a1 + 1712) = v11;
  v12 = fmaxf(X, 0.0);
  *(float *)(a1 + 1716) = fminf(v12, 1.0);
  v13 = (volatile signed __int32 *)a3[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a4[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return a1;
}
