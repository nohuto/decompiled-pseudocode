/*
 * XREFs of sub_18001AC20 @ 0x18001AC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_1800174E8 @ 0x1800174E8 (sub_1800174E8.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_1800182F4 @ 0x1800182F4 (sub_1800182F4.c)
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_1800343B0 @ 0x1800343B0 (sub_1800343B0.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18009F96C @ 0x18009F96C (sub_18009F96C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001AC20(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *v7; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rsi
  signed int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  __int128 v22; // [rsp+20h] [rbp-59h] BYREF
  __int64 v23; // [rsp+30h] [rbp-49h] BYREF
  __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  __int128 v25; // [rsp+40h] [rbp-39h]
  _BYTE v26[8]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-21h]
  __int128 v28; // [rsp+60h] [rbp-19h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h] BYREF
  __int128 v30; // [rsp+80h] [rbp+7h] BYREF
  int v31[4]; // [rsp+90h] [rbp+17h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  v7 = *(_QWORD **)(a1 + 56);
  *(_OWORD *)v31 = 0LL;
  sub_180017984(v7, v31, 1u);
  v9 = *(_QWORD *)(a1 + 56);
  v30 = 0LL;
  v10 = (__int64 *)sub_18007AC9C(v9, v26, 1LL);
  sub_1800174E8(*v10, &v30);
  v11 = v27;
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v22 = 0LL;
  if ( *((_QWORD *)&v30 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 1u);
  v28 = v30;
  sub_180018B88(&v22, (__int64 *)&v28);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v23 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v24 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  sub_1800343B0(v22, &v24, &v23, 1LL);
  v12 = *((_QWORD *)&v22 + 1);
  if ( *((_QWORD *)&v22 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL), 1u);
    v12 = *((_QWORD *)&v22 + 1);
  }
  v25 = v22;
  sub_18009F96C(v31[0]);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
  if ( *((_QWORD *)&v25 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    v12 = *((_QWORD *)&v22 + 1);
  }
  v29 = 0LL;
  v14 = sub_1800182F4(&v29, (__int64)v31);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v17 = v29;
    v16 = 0LL;
    v29 = 0LL;
    v15 = 0;
    *a4 = v17;
  }
  else
  {
    sub_18000DD78(retaddr, 388, (__int64)"SpectreRenderer.cpp", v14);
    v16 = v29;
  }
  if ( v16 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
    {
      v18 = *((_QWORD *)&v22 + 1);
      (***((void (__fastcall ****)(_QWORD))&v22 + 1))(*((_QWORD *)&v22 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v22 + 1) + 8LL))(*((_QWORD *)&v22 + 1));
    }
  }
  v19 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = *(volatile signed __int32 **)&v31[2];
  if ( *(_QWORD *)&v31[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v31[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return v15;
}
