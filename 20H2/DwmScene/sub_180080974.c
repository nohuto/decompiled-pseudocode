/*
 * XREFs of sub_180080974 @ 0x180080974
 * Callers:
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_180015620 @ 0x180015620 (sub_180015620.c)
 *     sub_18007FC9C @ 0x18007FC9C (sub_18007FC9C.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_180080B78 @ 0x180080B78 (sub_180080B78.c)
 *     sub_180082C58 @ 0x180082C58 (sub_180082C58.c)
 *     sub_1800832A4 @ 0x1800832A4 (sub_1800832A4.c)
 *     sub_1800833A8 @ 0x1800833A8 (sub_1800833A8.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800AD434 @ 0x1800AD434 (sub_1800AD434.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     sub_1800194D4 @ 0x1800194D4 (sub_1800194D4.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_180080C20 @ 0x180080C20 (sub_180080C20.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_180080974(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int128 v6; // kr00_16
  __int64 v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  signed __int32 v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  _OWORD v15[4]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v16[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v18[64]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int128 v19; // [rsp+120h] [rbp+20h]

  sub_1800839A4(a1);
  v4 = sub_180080C20(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_1800839A4(a1);
    v19 = 0LL;
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v5 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v10 + 1, v10) )
        {
          v11 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)&v19 = v11;
          v12 = *(_QWORD *)(a1 + 64);
          *((_QWORD *)&v19 + 1) = v12;
          v6 = __PAIR128__(v12, v11);
          goto LABEL_4;
        }
      }
    }
    v6 = v19;
LABEL_4:
    sub_1800839A4(a1);
    v7 = *(_QWORD *)(a1 + 208);
    if ( (_QWORD)v6 )
    {
      if ( *(_QWORD *)(a1 + 352) != v7 )
        sub_1800838E4(a1);
      v15[0] = *(_OWORD *)(a1 + 224);
      v15[1] = *(_OWORD *)(a1 + 240);
      v15[2] = *(_OWORD *)(a1 + 256);
      v15[3] = *(_OWORD *)(a1 + 272);
      v8 = (_OWORD *)sub_180080974(v6, v17);
      v9 = (_OWORD *)sub_1800194D4((__int64)v18, v15, v8);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 352) != v7 )
        sub_1800838E4(a1);
      v16[0] = *(_OWORD *)(a1 + 224);
      v16[1] = *(_OWORD *)(a1 + 240);
      v16[2] = *(_OWORD *)(a1 + 256);
      v16[3] = *(_OWORD *)(a1 + 272);
      v9 = v16;
    }
    sub_18007E3E4((_OWORD *)(a1 + 288), v9);
    *(_QWORD *)(a1 + 360) = v4;
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v13 = *((_QWORD *)&v19 + 1);
        (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
      }
    }
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
