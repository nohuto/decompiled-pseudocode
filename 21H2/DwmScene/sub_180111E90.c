/*
 * XREFs of sub_180111E90 @ 0x180111E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180092874 @ 0x180092874 (sub_180092874.c)
 *     sub_18009D428 @ 0x18009D428 (sub_18009D428.c)
 *     sub_1800AF948 @ 0x1800AF948 (sub_1800AF948.c)
 *     sub_1800B1C18 @ 0x1800B1C18 (sub_1800B1C18.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5BE8 @ 0x1800F5BE8 (sub_1800F5BE8.c)
 *     sub_18010AB6C @ 0x18010AB6C (sub_18010AB6C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_180111E90(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rdx
  signed __int32 v21; // eax
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  __int128 v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  _QWORD *v37; // [rsp+A0h] [rbp-60h]
  _QWORD v38[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v39[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v42; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v44; // [rsp+108h] [rbp+8h]
  _BYTE v45[24]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v47; // [rsp+140h] [rbp+40h] BYREF

  v36 = a4;
  v37 = a5;
  v44 = a6;
  v47 = 0LL;
  v9 = *a3;
  v30 = 0LL;
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
  {
LABEL_47:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_47;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v30 = *(_OWORD *)(v9 + 8);
  sub_1800AF948(a1[3], &v47, (__int64 *)&v30);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v31 = 0LL;
  v13 = a5[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a5[1];
  }
  *(_QWORD *)&v31 = *a5;
  *((_QWORD *)&v31 + 1) = v13;
  v32 = 0LL;
  v14 = a6[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a6[1];
  }
  *(_QWORD *)&v32 = *a6;
  *((_QWORD *)&v32 + 1) = v14;
  sub_18010AB6C(a1[3], a3, &v32, (__int64)&v31, 0xFFFFFFFF);
  v41 = 0LL;
  sub_1800B1C18(a1[3], (__int64 *)&v41);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  sub_180092874(a1[34], -1LL, 0);
  v15 = a1 + 9;
  *(_BYTE *)(a1[9] + 72) = 1;
  v33 = 0LL;
  v16 = a1[35];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a1[35];
  }
  *(_QWORD *)&v33 = a1[34];
  *((_QWORD *)&v33 + 1) = v16;
  sub_18009D428(*v15, &v33);
  v38[0] = *a5;
  v38[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_1800F597C(a1[36], &qword_1802141B8, v38);
  v34 = 0LL;
  v17 = a1[41];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a1[41];
  }
  *(_QWORD *)&v34 = a1[40];
  *((_QWORD *)&v34 + 1) = v17;
  sub_1800F5BE8(a1[36], (__int64)&qword_1802141B8, &v34);
  v40 = 15LL;
  v39[2] = 12LL;
  strcpy((char *)v39, "Downsampling");
  v18 = a1[3];
  v19 = *a3;
  v35 = 0LL;
  v20 = *(_QWORD *)(v19 + 16);
  if ( !v20 )
  {
LABEL_48:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v45);
    throw (std::bad_weak_ptr *)v45;
  }
  do
  {
    v21 = *(_DWORD *)(v20 + 8);
    if ( !v21 )
      goto LABEL_48;
  }
  while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
  v35 = *(_OWORD *)(v19 + 8);
  (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64 *, _QWORD *))(*(_QWORD *)v18 + 208LL))(
    v18,
    &v35,
    v36,
    a1 + 9,
    v39);
  v22 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  if ( v40 >= 0x10 )
  {
    v23 = v39[0];
    if ( v40 + 1 >= 0x1000 )
    {
      v23 = *(_QWORD *)(v39[0] - 8LL);
      if ( (unsigned __int64)(v39[0] - v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, v40 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v23);
  }
  *(_BYTE *)(*v15 + 72) = 0;
  v42 = 0LL;
  sub_1800F597C(a1[36], &qword_1802141B8, &v42);
  v43 = 0LL;
  sub_1800F5BE8(a1[36], (__int64)&qword_1802141B8, &v43);
  v24 = *a6;
  *a2 = 0LL;
  a2[1] = 0LL;
  v25 = *(_QWORD *)(v24 + 144);
  if ( v25 )
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
  *a2 = *(_QWORD *)(v24 + 136);
  a2[1] = *(_QWORD *)(v24 + 144);
  v26 = (volatile signed __int32 *)*((_QWORD *)&v47 + 1);
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  v27 = (volatile signed __int32 *)a5[1];
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)a6[1];
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  return a2;
}
