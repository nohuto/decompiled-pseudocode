/*
 * XREFs of sub_180084514 @ 0x180084514
 * Callers:
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180013A88 @ 0x180013A88 (sub_180013A88.c)
 *     sub_180013CC8 @ 0x180013CC8 (sub_180013CC8.c)
 *     sub_1800719A8 @ 0x1800719A8 (sub_1800719A8.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_1800B9788 @ 0x1800B9788 (sub_1800B9788.c)
 *     sub_1800B99C8 @ 0x1800B99C8 (sub_1800B99C8.c)
 *     sub_1800B9C04 @ 0x1800B9C04 (sub_1800B9C04.c)
 *     sub_1800B9E40 @ 0x1800B9E40 (sub_1800B9E40.c)
 *     sub_1800BA07C @ 0x1800BA07C (sub_1800BA07C.c)
 *     sub_1800DA948 @ 0x1800DA948 (sub_1800DA948.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180084514(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // r12
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-49h]
  __int64 *v22; // [rsp+28h] [rbp-41h]
  __int128 v23; // [rsp+30h] [rbp-39h] BYREF
  __int128 v24; // [rsp+40h] [rbp-29h]
  __int128 v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+70h] [rbp+7h]
  __int128 v27; // [rsp+78h] [rbp+Fh] BYREF

  sub_18008933C(a1);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v21 = *a2;
  v5 = *(__int64 **)(a1 + 384);
  v22 = v5;
  v6 = *(__int64 **)(a1 + 376);
  if ( v6 != v5 )
  {
    v7 = *a2;
    do
    {
      v8 = (volatile signed __int32 *)v6[1];
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = (volatile signed __int32 *)v6[1];
      }
      v9 = *v6;
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
          v7 = v21;
        }
        v5 = v22;
      }
      if ( v7 == v9 )
        break;
      v6 += 2;
    }
    while ( v6 != v5 );
  }
  if ( v4 )
  {
    if ( !_InterlockedDecrement(v4 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v10 = *(__int64 **)(a1 + 384);
  if ( v6 != v10 )
    return 0;
  if ( *(__int64 **)(a1 + 392) == v10 )
  {
    sub_18001101C((_QWORD *)(a1 + 376), v10, a2);
  }
  else
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v11 = a2[1];
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *v10 = *a2;
    v10[1] = a2[1];
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_180088970(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 104LL))(*a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 136LL))(*a2);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
  {
    v25 = 0LL;
    v26 = 0LL;
    sub_18007E228(v12, &v25);
    v13 = 0;
    v14 = v25;
    if ( (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 4 )
    {
      v15 = 0LL;
      do
      {
        v24 = 0LL;
        v16 = 2 * v15;
        v17 = *(volatile signed __int32 **)(v14 + 8 * v16 + 8);
        if ( v17 )
        {
          _InterlockedIncrement(v17 + 2);
          v17 = *(volatile signed __int32 **)(v14 + 8 * v16 + 8);
        }
        v18 = *(_QWORD *)(v14 + 8 * v16);
        *(_QWORD *)&v24 = v18;
        *((_QWORD *)&v24 + 1) = v17;
        v27 = 0LL;
        sub_180066E84(v18 + 24, (__int64)&v27);
        v19 = *a2;
        v23 = 0LL;
        if ( v17 )
        {
          _InterlockedIncrement(v17 + 2);
          v18 = v24;
        }
        *(_QWORD *)&v23 = v18;
        *((_QWORD *)&v23 + 1) = v17;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 88LL))(v19, &v23);
        if ( BYTE8(v27) )
          sub_180067304(v27);
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        ++v13;
        v14 = v25;
        v15 = v13;
      }
      while ( v13 < (unsigned __int64)((__int64)(*((_QWORD *)&v25 + 1) - v25) >> 4) );
    }
    sub_180012A18((__int64 *)&v25);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 120LL))(*a2);
  return 1;
}
