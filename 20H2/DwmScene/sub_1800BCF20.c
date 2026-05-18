/*
 * XREFs of sub_1800BCF20 @ 0x1800BCF20
 * Callers:
 *     sub_1800C2944 @ 0x1800C2944 (sub_1800C2944.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_18007FC40 @ 0x18007FC40 (sub_18007FC40.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800BCF20(__int64 a1, _QWORD *a2, __int64 *a3)
{
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  __int64 v10[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+40h] [rbp-40h] BYREF
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h] BYREF

  *(_QWORD *)&v11 = a2;
  if ( !*a3 )
  {
LABEL_20:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v13 = 0LL;
  v10[2] = 0LL;
  v10[3] = 0LL;
  sub_18001269C(v10, (__int64)&unk_180219918);
  sub_180087518(*a3, (__int64 *)&v13, v10);
  if ( !(_QWORD)v13 )
  {
LABEL_16:
    v8 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    goto LABEL_20;
  }
  v12 = 0LL;
  sub_180087B70(v13, &v12);
  if ( !(_QWORD)v12 )
  {
    v7 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
    if ( *((_QWORD *)&v12 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    goto LABEL_16;
  }
  v11 = 0LL;
  sub_18007FC40(v12, &v11);
  *(_OWORD *)a2 = v11;
  v11 = 0uLL;
  v5 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
