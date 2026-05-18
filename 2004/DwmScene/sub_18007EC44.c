/*
 * XREFs of sub_18007EC44 @ 0x18007EC44
 * Callers:
 *     sub_180010C38 @ 0x180010C38 (sub_180010C38.c)
 *     sub_1800139A8 @ 0x1800139A8 (sub_1800139A8.c)
 *     sub_180013BE8 @ 0x180013BE8 (sub_180013BE8.c)
 *     sub_18006C0D8 @ 0x18006C0D8 (sub_18006C0D8.c)
 *     sub_18007EF38 @ 0x18007EF38 (sub_18007EF38.c)
 *     sub_1800B3EB8 @ 0x1800B3EB8 (sub_1800B3EB8.c)
 *     sub_1800B40F8 @ 0x1800B40F8 (sub_1800B40F8.c)
 *     sub_1800B4334 @ 0x1800B4334 (sub_1800B4334.c)
 *     sub_1800B4570 @ 0x1800B4570 (sub_1800B4570.c)
 *     sub_1800B47AC @ 0x1800B47AC (sub_1800B47AC.c)
 *     sub_1800D5078 @ 0x1800D5078 (sub_1800D5078.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800830A0 @ 0x1800830A0 (sub_1800830A0.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18007EC44(__int64 a1, __int64 *a2)
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

  sub_180083A6C(a1);
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
    sub_180010F3C((_QWORD *)(a1 + 376), v10, a2);
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
  sub_1800830A0(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 104LL))(*a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 136LL))(*a2);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
  {
    v25 = 0LL;
    v26 = 0LL;
    sub_180078958(v12, &v25);
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
        sub_1800615B4(v18 + 24, (__int64)&v27);
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
          sub_180061A34(v27);
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
    sub_180012938((__int64 *)&v25);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 120LL))(*a2);
  return 1;
}
