/*
 * XREFs of sub_18002E9C0 @ 0x18002E9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18002E62C @ 0x18002E62C (sub_18002E62C.c)
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 *     sub_18002F23C @ 0x18002F23C (sub_18002F23C.c)
 *     sub_18002F8CC @ 0x18002F8CC (sub_18002F8CC.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall sub_18002E9C0(__int64 a1, _WORD *a2, _BYTE *a3, _BYTE *a4, _DWORD *a5, _BYTE *a6, _BYTE *a7)
{
  __int64 v10; // r12
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v16; // rax
  __int128 v17; // xmm6
  __m128i v18; // xmm7
  __int64 v19; // rbx
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  _BYTE *v24; // [rsp+20h] [rbp-E8h]
  _DWORD *v25; // [rsp+28h] [rbp-E0h]
  _BYTE *v26; // [rsp+30h] [rbp-D8h]
  _BYTE *v27; // [rsp+38h] [rbp-D0h]
  LPVOID v28; // [rsp+40h] [rbp-C8h]
  __int64 v29; // [rsp+48h] [rbp-C0h]
  _BYTE v30[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-98h]
  __int128 v33; // [rsp+80h] [rbp-88h] BYREF
  __m128i v34; // [rsp+90h] [rbp-78h]
  __int64 v35; // [rsp+A0h] [rbp-68h]

  v24 = a4;
  v25 = a5;
  v26 = a6;
  v27 = a7;
  v10 = 0LL;
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v29 = a1 + 16;
  sub_18000CD64(&v31, a2);
  v12 = a1 + 56;
  v13 = sub_18002EE80(a1 + 56, &v31);
  sub_180009CF0((__int64)&v31);
  if ( !v13 )
  {
    v14 = *(_QWORD *)(a1 + 120);
    sub_18000CD64(&v31, a2);
    ProcessHeap = GetProcessHeap();
    v16 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
    v28 = v16;
    if ( v16 )
      v10 = sub_18002E62C((__int64)v16, v14, (__int64)a2);
    v17 = v31;
    v33 = v31;
    v18 = si128;
    v34 = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_180045B30);
    LOWORD(v31) = 0;
    v28 = 0LL;
    v35 = v10;
    v19 = **(_QWORD **)(a1 + 64);
    if ( *(_QWORD *)(a1 + 72) == 0x492492492492492LL )
      std::_Xlength_error("list<T> too long");
    v20 = *(_QWORD **)(v19 + 8);
    v21 = sub_180009F20(0x38uLL);
    *((_OWORD *)v21 + 1) = v17;
    *((__m128i *)v21 + 2) = v18;
    v34 = _mm_load_si128((const __m128i *)&xmmword_180045B30);
    LOWORD(v33) = 0;
    v35 = 0LL;
    v21[6] = v10;
    *v21 = v19;
    v21[1] = v20;
    ++*(_QWORD *)(v12 + 16);
    *(_QWORD *)(v19 + 8) = v21;
    *v20 = v21;
    sub_18002F8CC(v12, v30, **(_QWORD **)(v12 + 8) + 16LL);
    sub_180009CF0((__int64)&v33);
    sub_180009CF0((__int64)&v31);
    *a3 = 1;
    *v24 = 1;
    *v25 = 0;
    *v26 = 1;
    *v27 = 0;
  }
  sub_18000CD64(&v31, a2);
  v22 = sub_18002F23C(v12, &v31);
  ++*(_DWORD *)(*(_QWORD *)v22 + 36LL);
  sub_180009CF0((__int64)&v31);
  if ( v11 )
    LeaveCriticalSection(v11);
  return 0LL;
}
