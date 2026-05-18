/*
 * XREFs of sub_180088528 @ 0x180088528
 * Callers:
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 * Callees:
 *     sub_18001BA00 @ 0x18001BA00 (sub_18001BA00.c)
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_180088528(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  _OWORD *v9; // rax
  signed __int64 v10; // rsi
  unsigned __int64 result; // rax
  __int128 v12; // [rsp+28h] [rbp-D8h]
  __int128 v13; // [rsp+38h] [rbp-C8h]
  _OWORD v14[4]; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v15[4]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v16[6]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v17[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v18[64]; // [rsp+120h] [rbp+20h] BYREF

  sub_180089274(a1);
  v13 = 0LL;
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
        v13 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v6 = 2;
  if ( (_QWORD)v13 )
  {
    sub_180089274(a1);
    v12 = 0LL;
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
          v12 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 7;
    v9 = sub_180086244(v12, v15);
  }
  else
  {
    v14[0] = xmmword_180214C90;
    v14[1] = xmmword_180214CA0;
    v14[2] = xmmword_180214CB0;
    v14[3] = xmmword_180214CC0;
    v9 = v14;
  }
  v17[0] = *v9;
  v17[1] = v9[1];
  v17[2] = v9[2];
  v17[3] = v9[3];
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v12 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  sub_18001BA00(v17, (__int64)v18);
  sub_1800889A0(v16, a2, v18);
  sub_18008933C(a1);
  *(_DWORD *)(a1 + 144) = v16[0];
  *(_DWORD *)(a1 + 148) = v16[1];
  *(_DWORD *)(a1 + 152) = v16[2];
  v10 = _InterlockedExchangeAdd64(&qword_18020F6C0, 1uLL);
  *(_QWORD *)(a1 + 208) = v10 + 1;
  result = *(_QWORD *)(a1 + 216);
  if ( v10 + 1 >= result )
    result = v10 + 1;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
