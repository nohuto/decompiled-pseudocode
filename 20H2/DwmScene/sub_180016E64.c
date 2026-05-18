/*
 * XREFs of sub_180016E64 @ 0x180016E64
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 * Callees:
 *     sub_180018330 @ 0x180018330 (sub_180018330.c)
 *     sub_180018CC0 @ 0x180018CC0 (sub_180018CC0.c)
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006B080 @ 0x18006B080 (sub_18006B080.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_1800B1154 @ 0x1800B1154 (sub_1800B1154.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180016E64(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  void *v8; // rax
  __int64 v9; // r8
  void *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rdi
  char v16; // [rsp+20h] [rbp-69h]
  __int128 v17; // [rsp+30h] [rbp-59h] BYREF
  __int128 v18; // [rsp+40h] [rbp-49h] BYREF
  __int128 v19; // [rsp+50h] [rbp-39h] BYREF
  __int128 v20; // [rsp+60h] [rbp-29h] BYREF
  __int128 v21; // [rsp+70h] [rbp-19h] BYREF
  void *v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  __int128 v24; // [rsp+90h] [rbp+7h] BYREF

  v23 = a3;
  v17 = 0LL;
  v8 = operator new(0x1028uLL);
  v10 = v8;
  v22 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x1028uLL);
    v19 = 0LL;
    v11 = *(_QWORD *)(a1 + 472);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = *(_QWORD *)(a1 + 472);
    }
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 464);
    *((_QWORD *)&v19 + 1) = v11;
    v8 = (void *)sub_1800B1154(v10, a1, &v19);
  }
  v17 = 0LL;
  LOBYTE(v9) = v16;
  sub_180018330(&v17, v8, v9);
  v24 = 0LL;
  v12 = v17;
  sub_18006156C(v17 + 24, &v24);
  sub_18006B080(v12, a3, a4);
  v20 = 0LL;
  v13 = *((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
    v13 = *((_QWORD *)&v17 + 1);
  }
  v20 = v17;
  sub_18007354C(a1, &v20);
  v14 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    v13 = *((_QWORD *)&v17 + 1);
  }
  v21 = 0LL;
  v18 = 0LL;
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *((_QWORD *)&v17 + 1);
  }
  v18 = v17;
  sub_1800762B0(a1, 7LL, &v18, &v21);
  *a2 = v17;
  a2[1] = v13;
  v17 = 0LL;
  if ( BYTE8(v24) )
    sub_180061A34(v24);
  sub_180018CC0(a3);
  return a2;
}
