/*
 * XREFs of sub_180086244 @ 0x180086244
 * Callers:
 *     sub_180011700 @ 0x180011700 (sub_180011700.c)
 *     sub_180015700 @ 0x180015700 (sub_180015700.c)
 *     sub_18008556C @ 0x18008556C (sub_18008556C.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_180086448 @ 0x180086448 (sub_180086448.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_180088B74 @ 0x180088B74 (sub_180088B74.c)
 *     sub_180088C78 @ 0x180088C78 (sub_180088C78.c)
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_1800B2D04 @ 0x1800B2D04 (sub_1800B2D04.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     sub_180019F78 @ 0x180019F78 (sub_180019F78.c)
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800864F0 @ 0x1800864F0 (sub_1800864F0.c)
 *     sub_1800891B4 @ 0x1800891B4 (sub_1800891B4.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_180086244(__int64 a1, _OWORD *a2)
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

  sub_180089274(a1);
  v4 = sub_1800864F0(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_180089274(a1);
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
    sub_180089274(a1);
    v7 = *(_QWORD *)(a1 + 208);
    if ( (_QWORD)v6 )
    {
      if ( *(_QWORD *)(a1 + 352) != v7 )
        sub_1800891B4(a1);
      v15[0] = *(_OWORD *)(a1 + 224);
      v15[1] = *(_OWORD *)(a1 + 240);
      v15[2] = *(_OWORD *)(a1 + 256);
      v15[3] = *(_OWORD *)(a1 + 272);
      v8 = (_OWORD *)sub_180086244(v6, v17);
      v9 = (_OWORD *)sub_180019F78((__int64)v18, v15, v8);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 352) != v7 )
        sub_1800891B4(a1);
      v16[0] = *(_OWORD *)(a1 + 224);
      v16[1] = *(_OWORD *)(a1 + 240);
      v16[2] = *(_OWORD *)(a1 + 256);
      v16[3] = *(_OWORD *)(a1 + 272);
      v9 = v16;
    }
    sub_180083CB4((_OWORD *)(a1 + 288), v9);
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
