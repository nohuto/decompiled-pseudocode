/*
 * XREFs of sub_180016EC0 @ 0x180016EC0
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 * Callees:
 *     sub_180018778 @ 0x180018778 (sub_180018778.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_1800272CC @ 0x1800272CC (sub_1800272CC.c)
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_18007BB80 @ 0x18007BB80 (sub_18007BB80.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180016EC0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
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
  v8 = operator new(0x1228uLL);
  v10 = v8;
  v22 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x1228uLL);
    v19 = 0LL;
    v11 = *(_QWORD *)(a1 + 472);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = *(_QWORD *)(a1 + 472);
    }
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 464);
    *((_QWORD *)&v19 + 1) = v11;
    v8 = (void *)sub_1800272CC(v10, a1, &v19);
  }
  v17 = 0LL;
  LOBYTE(v9) = v16;
  sub_180018778(&v17, v8, v9);
  v24 = 0LL;
  v12 = v17;
  sub_180066E3C(v17 + 24, &v24);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 240LL))(v12, a3, a4);
  v20 = 0LL;
  v13 = *((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
    v13 = *((_QWORD *)&v17 + 1);
  }
  v20 = v17;
  sub_180078E1C(a1, &v20);
  v14 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( !_InterlockedDecrement(v14 + 3) )
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
  sub_18007BB80(a1, 7LL, &v18, &v21);
  *a2 = v17;
  a2[1] = v13;
  v17 = 0LL;
  if ( BYTE8(v24) )
    sub_180067304(v24);
  sub_180019460(a3);
  return a2;
}
