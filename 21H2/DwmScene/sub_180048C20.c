/*
 * XREFs of sub_180048C20 @ 0x180048C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180038198 @ 0x180038198 (sub_180038198.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180048C20(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // eax
  signed __int32 v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int128 v15; // [rsp+30h] [rbp-79h] BYREF
  __int128 v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v18[12]; // [rsp+60h] [rbp-49h] BYREF

  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    v16 = 0LL;
    v6 = *(_QWORD *)(a1 + 120);
    v15 = 0LL;
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v7 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v11 + 1, v11) )
        {
          *(_QWORD *)&v15 = *(_QWORD *)(v6 + 72);
          v8 = *(_QWORD *)(v6 + 80);
          *((_QWORD *)&v15 + 1) = v8;
          goto LABEL_4;
        }
      }
    }
    v8 = *((_QWORD *)&v15 + 1);
LABEL_4:
    sub_180038198((__int64 *)&v16, &v15);
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      {
        v9 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
    v17 = 0LL;
    sub_1800391CC(*(_QWORD **)(a1 + 120), &v17);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, __int64, bool))(*(_QWORD *)v17 + 232LL))(
            v17,
            *(_QWORD *)(a1 + 96),
            v18,
            88LL,
            a3 != 1);
    if ( v10 )
    {
      if ( v10 != 1 )
        sub_18002BE74(v16, v10);
    }
    else
    {
      *(_QWORD *)(a1 + 208) = v18[6];
      *(_QWORD *)(a1 + 200) = v18[5];
      *(_QWORD *)(a1 + 240) = v18[10];
      *(_QWORD *)(a1 + 232) = v18[9];
      *(_QWORD *)(a1 + 184) = v18[3];
      *(_QWORD *)(a1 + 192) = v18[4];
      *(_QWORD *)(a1 + 224) = v18[8];
      *(_QWORD *)(a1 + 216) = v18[7];
      *(_QWORD *)(a1 + 168) = v18[1];
      *(_QWORD *)(a1 + 160) = v18[0];
      *(_QWORD *)(a1 + 176) = v18[2];
      *(_DWORD *)(a1 + 136) = 2;
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v13 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
  {
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 224);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 240);
  }
  return a2;
}
