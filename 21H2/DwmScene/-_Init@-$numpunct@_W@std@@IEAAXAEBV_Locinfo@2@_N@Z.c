/*
 * XREFs of ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180088790
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 * Callees:
 *     sub_180083EA0 @ 0x180083EA0 (sub_180083EA0.c)
 *     sub_180085EE8 @ 0x180085EE8 (sub_180085EE8.c)
 *     sub_180086604 @ 0x180086604 (sub_180086604.c)
 *     sub_1800882A0 @ 0x1800882A0 (sub_1800882A0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall std::numpunct<wchar_t>::_Init(__int64 a1, __m128 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __m128 *v9; // rax
  __int128 v11; // [rsp+28h] [rbp-41h]
  __int128 v12; // [rsp+38h] [rbp-31h]
  __int128 v13; // [rsp+48h] [rbp-21h] BYREF
  __m128 v14; // [rsp+60h] [rbp-9h] BYREF
  __m128 v15; // [rsp+70h] [rbp+7h] BYREF
  __m128 v16; // [rsp+80h] [rbp+17h] BYREF
  __m128 v17; // [rsp+90h] [rbp+27h] BYREF

  sub_18008933C(a1);
  sub_180089274(a1);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v12 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v6 = 2;
  if ( (_QWORD)v12 )
  {
    sub_180089274(a1);
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v11 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 7;
    v9 = sub_180085EE8(v11, &v15);
  }
  else
  {
    v13 = xmmword_180214CD0;
    v9 = (__m128 *)&v13;
  }
  v17 = *v9;
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  sub_180086604(&v17, &v17);
  v14 = *sub_180083EA0(&v16, a2, &v17);
  return sub_1800882A0(a1, &v14);
}
