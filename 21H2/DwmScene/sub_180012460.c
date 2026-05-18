/*
 * XREFs of sub_180012460 @ 0x180012460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180012460(__int64 a1, int *a2, _DWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  signed __int32 v8; // eax
  int v9; // eax
  int v10; // xmm8_4
  int v11; // xmm7_4
  int v12; // xmm6_4
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // xmm2_4
  int v17; // xmm1_4
  __int64 v18; // rbx
  _DWORD v20[4]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v21; // [rsp+38h] [rbp-19h] BYREF
  int v22; // [rsp+40h] [rbp-11h]
  __int128 v23; // [rsp+48h] [rbp-9h]
  __int128 v24; // [rsp+58h] [rbp+7h] BYREF

  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v23 = 0LL;
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v23 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    v24 = 0LL;
    sub_180066E84(v23 + 16, &v24);
    v9 = *(_DWORD *)(a1 + 48);
    if ( v9 == 2 || v9 == 3 )
    {
      v10 = a2[2];
      v11 = a2[1];
      v12 = *a2;
      v13 = *(_QWORD *)(a1 + 16);
      sub_18008933C(v13);
      *(_DWORD *)(v13 + 144) = v12;
      *(_DWORD *)(v13 + 148) = v11;
      *(_DWORD *)(v13 + 152) = v10;
      v14 = _InterlockedIncrement64(&qword_18020F6C0);
      *(_QWORD *)(v13 + 208) = v14;
      v15 = *(_QWORD *)(v13 + 216);
      if ( v14 >= v15 )
        v15 = v14;
      *(_QWORD *)(v13 + 216) = v15;
      v9 = *(_DWORD *)(a1 + 48);
    }
    if ( ((v9 - 1) & 0xFFFFFFFD) == 0 )
    {
      v21 = qword_180214C48;
      v22 = dword_180214C50;
      v16 = a3[2];
      v17 = a3[1];
      v20[0] = *a3;
      v20[1] = v17;
      v20[2] = v16;
      sub_1800866A4(*(_QWORD *)(a1 + 16), v20, &v21);
    }
    if ( BYTE8(v24) )
      sub_180067304(v24);
    if ( *((_QWORD *)&v23 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v18 = *((_QWORD *)&v23 + 1);
        (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
      }
    }
  }
  return 0LL;
}
