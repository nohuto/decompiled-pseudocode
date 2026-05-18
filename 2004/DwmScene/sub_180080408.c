/*
 * XREFs of sub_180080408 @ 0x180080408
 * Callers:
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800C0384 @ 0x1800C0384 (sub_1800C0384.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 *     sub_180101E70 @ 0x180101E70 (sub_180101E70.c)
 *     sub_1801020AC @ 0x1801020AC (sub_1801020AC.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800830D0 @ 0x1800830D0 (sub_1800830D0.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180080408(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  _OWORD *v9; // rax
  __int128 v11; // [rsp+28h] [rbp-D8h]
  __int128 v12; // [rsp+38h] [rbp-C8h]
  _OWORD v13[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[72]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v15[4]; // [rsp+D0h] [rbp-30h] BYREF

  sub_1800839A4(a1);
  sub_1800839A4(a1);
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
    sub_1800839A4(a1);
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
    v9 = (_OWORD *)sub_180080974(v11, v14);
  }
  else
  {
    v13[0] = xmmword_18020DC20;
    v13[1] = xmmword_18020DC30;
    v13[2] = xmmword_18020DC40;
    v13[3] = xmmword_18020DC50;
    v9 = v13;
  }
  v15[0] = *v9;
  v15[1] = v9[1];
  v15[2] = v9[2];
  v15[3] = v9[3];
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL)) )
      {
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL)) )
    {
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  sub_1800830D0(a2, a1 + 144, v15);
  return a2;
}
