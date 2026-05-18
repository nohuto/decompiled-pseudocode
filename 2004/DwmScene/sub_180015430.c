/*
 * XREFs of sub_180015430 @ 0x180015430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_180015250 @ 0x180015250 (sub_180015250.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180085FEC @ 0x180085FEC (sub_180085FEC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180015430(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h]
  __int128 v18; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 32);
  v17 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) )
      {
        v17 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  v19 = 0LL;
  sub_1800615B4(v17 + 16, &v19);
  v18 = 0LL;
  v15 = 0LL;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 32);
  *((_QWORD *)&v15 + 1) = v7;
  ((void (__fastcall *)(_QWORD, __int128 *, __int64, __int128 *))sub_180085FEC)(v17, &v18, -1LL, &v15);
  v16 = 0LL;
  v8 = sub_180015250(&v16, &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v16;
    v10 = 0LL;
    v16 = 0LL;
    *a2 = v11;
    v9 = 0;
  }
  else
  {
    sub_18000DC98(retaddr, 82, (__int64)"SpectreNode.cpp", v8);
    v10 = v16;
  }
  if ( v10 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( BYTE8(v19) )
    sub_180061A34(v19);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  return v9;
}
