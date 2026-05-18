/*
 * XREFs of sub_18008CF70 @ 0x18008CF70
 * Callers:
 *     sub_18008B8BC @ 0x18008B8BC (sub_18008B8BC.c)
 *     sub_18008D1E4 @ 0x18008D1E4 (sub_18008D1E4.c)
 *     sub_18008D718 @ 0x18008D718 (sub_18008D718.c)
 *     sub_18008DF3C @ 0x18008DF3C (sub_18008DF3C.c)
 * Callees:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008599C @ 0x18008599C (sub_18008599C.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008CF70(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  bool v9; // bp
  volatile signed __int32 *v10; // rsi
  __int64 **v11; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 *v19; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int32 *v20; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF

  v19 = a3;
  sub_1800670E0(a1 + 16);
  v21 = 0LL;
  sub_18008599C(*a3, &v21);
  v6 = *(_QWORD **)(a1 + 88);
  v7 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    v8 = (_QWORD *)sub_18008D440(v7[8], &v19);
    v9 = *v8 == (_QWORD)v21;
    v10 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    if ( v9 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      v17 = v7[9];
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      *a2 = v7[8];
      a2[1] = v7[9];
      v18 = (volatile signed __int32 *)*((_QWORD *)&v21 + 1);
      if ( *((_QWORD *)&v21 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v15 = (volatile signed __int32 *)a3[1];
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            goto LABEL_23;
        }
      }
      return a2;
    }
    v11 = (__int64 **)v7[2];
    if ( *((_BYTE *)v11 + 25) )
    {
      for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v7 = (_QWORD *)i;
      v7 = (_QWORD *)i;
    }
    else
    {
      v7 = (_QWORD *)v7[2];
      for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v7 = j;
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v14 = (volatile signed __int32 *)*((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = (volatile signed __int32 *)a3[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
LABEL_23:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
