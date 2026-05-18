/*
 * XREFs of sub_1800876A0 @ 0x1800876A0
 * Callers:
 *     sub_180085FEC @ 0x180085FEC (sub_180085FEC.c)
 *     sub_180087914 @ 0x180087914 (sub_180087914.c)
 *     sub_180087E48 @ 0x180087E48 (sub_180087E48.c)
 *     sub_18008866C @ 0x18008866C (sub_18008866C.c)
 * Callees:
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_1800800CC @ 0x1800800CC (sub_1800800CC.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800876A0(__int64 a1, _QWORD *a2, __int64 *a3)
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
  sub_180061810(a1 + 16);
  v21 = 0LL;
  sub_1800800CC(*a3, &v21);
  v6 = *(_QWORD **)(a1 + 88);
  v7 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    v8 = (_QWORD *)sub_180087B70(v7[8], &v19);
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
