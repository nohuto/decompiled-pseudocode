/*
 * XREFs of sub_1800F7FA0 @ 0x1800F7FA0
 * Callers:
 *     sub_180091B68 @ 0x180091B68 (sub_180091B68.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A6074 @ 0x1800A6074 (sub_1800A6074.c)
 *     sub_1800AA734 @ 0x1800AA734 (sub_1800AA734.c)
 *     sub_1800F8654 @ 0x1800F8654 (sub_1800F8654.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800F7FA0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15[4]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+60h] [rbp+7h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp+Fh]
  __int128 v18; // [rsp+70h] [rbp+17h] BYREF

  v6 = (_QWORD *)(a1 + 16 * ((int)a3 + 24LL));
  if ( *v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v12 = v6[1];
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    *a2 = *v6;
    v11 = v6[1];
    goto LABEL_19;
  }
  v7 = a1 + 32 * ((int)a3 + 6LL);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v18 = 0LL;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_180020B7C(v15, v7);
  v8 = sub_1800AA734(*(_QWORD *)(a1 + 16), &v16);
  sub_1800A6074(*v8, &v18, v15);
  v9 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( (_QWORD)v18 )
  {
    if ( *((_QWORD *)&v18 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL));
    v14 = v18;
    sub_1800F8654(a1, a3, &v14);
    *a2 = v18;
    v11 = *((_QWORD *)&v18 + 1);
LABEL_19:
    a2[1] = v11;
    return a2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a2;
}
