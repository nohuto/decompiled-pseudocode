/*
 * XREFs of sub_1800BA714 @ 0x1800BA714
 * Callers:
 *     sub_1800C0090 @ 0x1800C0090 (sub_1800C0090.c)
 * Callees:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_1800BCDB0 @ 0x1800BCDB0 (sub_1800BCDB0.c)
 *     sub_1800BCFB4 @ 0x1800BCFB4 (sub_1800BCFB4.c)
 *     sub_1800C24FC @ 0x1800C24FC (sub_1800C24FC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800BA714(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int128 *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  _QWORD *v23; // [rsp+20h] [rbp-89h] BYREF
  __int128 v24; // [rsp+28h] [rbp-81h] BYREF
  __int128 v25; // [rsp+40h] [rbp-69h] BYREF
  __int128 v26; // [rsp+50h] [rbp-59h] BYREF
  char v27; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-41h]
  int v29; // [rsp+70h] [rbp-39h]
  _QWORD *v30; // [rsp+78h] [rbp-31h]
  _QWORD *v31; // [rsp+80h] [rbp-29h]
  __int64 v32; // [rsp+88h] [rbp-21h]
  __int64 v33; // [rsp+90h] [rbp-19h]
  __int128 v34; // [rsp+A0h] [rbp-9h]
  __int128 v35; // [rsp+B0h] [rbp+7h] BYREF

  v23 = a2;
  v30 = a3;
  v31 = a4;
  v29 = 0;
  sub_1800670E0(a1 + 16);
  v8 = *a4;
  v34 = 0LL;
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v34 = *(_OWORD *)(v8 + 56);
        break;
      }
    }
  }
  v35 = 0LL;
  v25 = 0LL;
  if ( *((_QWORD *)&v34 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
  v25 = v34;
  v26 = 0LL;
  v11 = a3[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a3[1];
  }
  *(_QWORD *)&v26 = *a3;
  *((_QWORD *)&v26 + 1) = v11;
  sub_1800C24FC(a1, &v35, &v26, &v25, v23);
  v12 = v35;
  if ( (_QWORD)v35 )
  {
    sub_180089274(v35);
    v23 = 0LL;
    v32 = *(_QWORD *)(v12 + 384);
    v33 = *(_QWORD *)(v12 + 376);
    sub_1800BCFB4(&v23, v33, v32, 0LL);
    if ( v23 == *(_QWORD **)(v12 + 384) )
      v24 = 0LL;
    else
      sub_1800BCDB0(&v24);
    v13 = &v24;
    v14 = 13;
    v15 = v24;
  }
  else
  {
    v28 = 0LL;
    v13 = (__int128 *)&v27;
    v14 = 6;
    v15 = 0LL;
  }
  *a2 = v15;
  a2[1] = *((_QWORD *)v13 + 1);
  *(_QWORD *)v13 = 0LL;
  *((_QWORD *)v13 + 1) = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v28;
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    if ( *((_QWORD *)&v24 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v17 = *((_QWORD *)&v24 + 1);
        (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
      }
    }
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
  if ( *((_QWORD *)&v35 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v19 = *((_QWORD *)&v34 + 1);
      (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
    }
  }
  v20 = (volatile signed __int32 *)a3[1];
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = (volatile signed __int32 *)a4[1];
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return a2;
}
