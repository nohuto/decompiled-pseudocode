/*
 * XREFs of sub_1800AA9C8 @ 0x1800AA9C8
 * Callers:
 *     sub_1800A6998 @ 0x1800A6998 (sub_1800A6998.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 *     sub_1800925A4 @ 0x1800925A4 (sub_1800925A4.c)
 *     sub_1800A7C10 @ 0x1800A7C10 (sub_1800A7C10.c)
 *     sub_1800AA334 @ 0x1800AA334 (sub_1800AA334.c)
 *     sub_1800AB274 @ 0x1800AB274 (sub_1800AB274.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800AA9C8(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  _QWORD *i; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 **v9; // rax
  __int64 j; // rax
  __int64 *k; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  unsigned __int128 v15; // kr00_16
  __int64 v16; // rsi
  __int64 **v17; // rax
  __int64 m; // rax
  signed __int32 v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  __int64 *n; // rcx
  __int64 v23; // rbx
  __int128 v25; // [rsp+20h] [rbp-60h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h] BYREF
  __int128 v27; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int128 v28; // [rsp+50h] [rbp-30h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF

  v2 = (_QWORD *)(a1 + 256);
  v3 = (_QWORD *)(a1 + 416);
  while ( v2 != v3 )
  {
    v25 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(v2, (__int64 *)&v25);
    if ( *((_QWORD *)&v25 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v4 = *((_QWORD *)&v25 + 1);
        (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
      }
    }
    v2 += 2;
  }
  for ( i = (_QWORD *)(a1 + 96); i != (_QWORD *)(a1 + 256); i += 2 )
  {
    v26 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(i, (__int64 *)&v26);
    if ( *((_QWORD *)&v26 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v6 = *((_QWORD *)&v26 + 1);
        (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
      }
    }
  }
  v7 = *(_QWORD **)(a1 + 416);
  v8 = (_QWORD *)*v7;
  while ( v8 != v7 )
  {
    sub_1800693F8(v8 + 7);
    sub_1800AB274(v8 + 5);
    v9 = (__int64 **)v8[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( j = v8[1]; !*(_BYTE *)(j + 25) && v8 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
        v8 = (_QWORD *)j;
      v8 = (_QWORD *)j;
    }
    else
    {
      v8 = (_QWORD *)v8[2];
      for ( k = *v9; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v8 = k;
    }
  }
  v29 = 0LL;
  sub_1800AA334(a1, &v29);
  v12 = (_QWORD *)v29;
  v13 = *(_QWORD **)v29;
  while ( v13 != v12 )
  {
    v28 = 0LL;
    v14 = v13[5];
    if ( v14 )
    {
      while ( 1 )
      {
        v19 = *(_DWORD *)(v14 + 8);
        if ( !v19 )
          break;
        if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v19 + 1, v19) )
        {
          v20 = v13[4];
          *(_QWORD *)&v28 = v20;
          v21 = v13[5];
          *((_QWORD *)&v28 + 1) = v21;
          v15 = __PAIR128__(v21, v20);
          goto LABEL_28;
        }
      }
    }
    v15 = v28;
LABEL_28:
    if ( (_QWORD)v15 )
      sub_1800925A4((_QWORD *)v15);
    if ( *((_QWORD *)&v15 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v28 + 1);
        (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
      }
    }
    v17 = (__int64 **)v13[2];
    if ( *((_BYTE *)v17 + 25) )
    {
      for ( m = v13[1]; !*(_BYTE *)(m + 25) && v13 == *(_QWORD **)(m + 16); m = *(_QWORD *)(m + 8) )
        v13 = (_QWORD *)m;
      v13 = (_QWORD *)m;
    }
    else
    {
      v13 = (_QWORD *)v13[2];
      for ( n = *v17; !*((_BYTE *)n + 25); n = (__int64 *)*n )
        v13 = n;
    }
  }
  v27 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 440), (__int64 *)&v27);
  if ( *((_QWORD *)&v27 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v23 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  sub_1800A7C10((__int64)&v29, (__int64)&v29, *(__int64 **)(v29 + 8));
  return j_j__o_free(v29);
}
