/*
 * XREFs of sub_180014650 @ 0x180014650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013F6C @ 0x180013F6C (sub_180013F6C.c)
 *     sub_180013FD0 @ 0x180013FD0 (sub_180013FD0.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18009D428 @ 0x18009D428 (sub_18009D428.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180014650(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  __int64 *v10; // rax
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rbx
  __int64 result; // rax
  char v17; // [rsp+20h] [rbp-B8h]
  __int128 v18; // [rsp+28h] [rbp-B0h]
  __int128 v19; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-90h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-80h]
  __int128 v23; // [rsp+60h] [rbp-78h] BYREF
  __int128 v24; // [rsp+70h] [rbp-68h] BYREF
  __int128 v25; // [rsp+80h] [rbp-58h]
  __int64 *v26; // [rsp+90h] [rbp-48h]
  __int64 *v27; // [rsp+98h] [rbp-40h]
  __int128 v28; // [rsp+A8h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v25 = 0LL;
    v4 = *(volatile signed __int32 **)(v3 + 40);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(v3 + 40);
    }
    v5 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)&v25 = v5;
    *((_QWORD *)&v25 + 1) = v4;
    v28 = 0LL;
    v18 = 0LL;
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          v18 = *(_OWORD *)(v5 + 72);
          break;
        }
      }
    }
    sub_180066E84(v18 + 16, &v28);
    if ( *((_QWORD *)&v18 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
      }
    }
    v19 = 0LL;
    v8 = v25;
    sub_180089274(v25);
    v20 = 0LL;
    v26 = *(__int64 **)(v25 + 384);
    v27 = *(__int64 **)(v25 + 376);
    sub_180013FD0(&v20, v27, v26, 0);
    if ( v20 == *(__int64 **)(v8 + 384) )
      v19 = 0LL;
    else
      sub_180013F6C((__int64 *)&v19, v20);
    if ( a2 )
    {
      v9 = *(volatile signed __int32 **)(a2 + 24);
      if ( v9 )
      {
        _InterlockedIncrement(v9 + 2);
        v9 = *(volatile signed __int32 **)(a2 + 24);
      }
      v21 = *(_QWORD *)(a2 + 16);
      v22 = v9;
      v10 = &v21;
      v11 = 5;
    }
    else
    {
      v24 = 0LL;
      v10 = (__int64 *)&v24;
      v11 = 6;
    }
    v23 = 0LL;
    v12 = v10[1];
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    *(_QWORD *)&v23 = *v10;
    *((_QWORD *)&v23 + 1) = v12;
    sub_18009D428(v19, &v23);
    if ( (v11 & 2) != 0 )
    {
      v11 &= ~2u;
      v17 = v11;
      if ( *((_QWORD *)&v24 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v13 = *((_QWORD *)&v24 + 1);
          (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
        }
        v11 = v17;
      }
    }
    if ( (v11 & 1) != 0 )
    {
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v22;
          (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        }
      }
    }
    if ( *((_QWORD *)&v19 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v15 = *((_QWORD *)&v19 + 1);
        (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
      }
    }
    if ( BYTE8(v28) )
      sub_180067304(v28);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DD78(retaddr, 87, (__int64)"SpectreMeshComponent.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
