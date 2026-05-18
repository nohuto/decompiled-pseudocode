/*
 * XREFs of sub_180082C58 @ 0x180082C58
 * Callers:
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 * Callees:
 *     sub_18001A310 @ 0x18001A310 (sub_18001A310.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800830D0 @ 0x1800830D0 (sub_1800830D0.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_180082C58(__int64 a1, __int64 a2)
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

  sub_1800839A4(a1);
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
    sub_1800839A4(a1);
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
    v9 = sub_180080974(v12, v15);
  }
  else
  {
    v14[0] = xmmword_18020DC20;
    v14[1] = xmmword_18020DC30;
    v14[2] = xmmword_18020DC40;
    v14[3] = xmmword_18020DC50;
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
  sub_18001A310(v17, (__int64)v18);
  sub_1800830D0(v16, a2, v18);
  sub_180083A6C(a1);
  *(_DWORD *)(a1 + 144) = v16[0];
  *(_DWORD *)(a1 + 148) = v16[1];
  *(_DWORD *)(a1 + 152) = v16[2];
  v10 = _InterlockedExchangeAdd64(&qword_180208648, 1uLL);
  *(_QWORD *)(a1 + 208) = v10 + 1;
  result = *(_QWORD *)(a1 + 216);
  if ( v10 + 1 >= result )
    result = v10 + 1;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
