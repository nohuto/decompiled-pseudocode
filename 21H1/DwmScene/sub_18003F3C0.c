/*
 * XREFs of sub_18003F3C0 @ 0x18003F3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_18003F0FC @ 0x18003F0FC (sub_18003F0FC.c)
 *     sub_18003F610 @ 0x18003F610 (sub_18003F610.c)
 *     sub_18004073C @ 0x18004073C (sub_18004073C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18003F3C0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 **v3; // r14
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 **v6; // rcx
  __int64 i; // rcx
  __int64 *j; // r8
  _QWORD *v9; // rdi
  __int64 v10; // r15
  unsigned int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 *v15; // rbx
  __int64 **v16; // rcx
  char v17; // dl
  __int64 *v18; // r8
  __int64 *n; // rax
  __int64 *ii; // rcx
  __int64 *k; // rax
  __int64 *m; // rdx
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26[3]; // [rsp+38h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 536);
  if ( !v2 )
    return 0;
  v3 = (__int64 **)(a1 + 552);
  v4 = *(_QWORD **)(a1 + 552);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      *(_BYTE *)v5[5] = 0;
      v6 = (__int64 **)v5[2];
      if ( *((_BYTE *)v6 + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v5 = (_QWORD *)i;
        v5 = (_QWORD *)i;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
        for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v5 = j;
      }
    }
    while ( v5 != v4 );
    v2 = *(_QWORD *)(a1 + 536);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, v26);
  v9 = (_QWORD *)v26[0];
  v10 = v26[1];
  while ( v9 != (_QWORD *)v10 )
  {
    v24 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD))*v9)(*v9);
    v12 = sub_18003F0FC(a1, v11);
    v13 = v12[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = v12[1];
    }
    *(_QWORD *)&v24 = *v12;
    *((_QWORD *)&v24 + 1) = v13;
    *(_BYTE *)v24 = 1;
    sub_18003F610(a1, v9, &v24);
    if ( *((_QWORD *)&v24 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v14 = *((_QWORD *)&v24 + 1);
        (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
      }
    }
    v9 += 2;
  }
  sub_180012938(v26);
  v15 = (__int64 *)**v3;
  while ( v15 != *v3 )
  {
    v16 = (__int64 **)v15[2];
    v17 = *((_BYTE *)v16 + 25);
    if ( *(_BYTE *)v15[5] )
    {
      if ( v17 )
      {
        for ( k = (__int64 *)v15[1]; !*((_BYTE *)k + 25) && v15 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v15 = k;
        v15 = k;
      }
      else
      {
        v15 = (__int64 *)v15[2];
        for ( m = *v16; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          v15 = m;
      }
    }
    else
    {
      v18 = v15;
      if ( v17 )
      {
        for ( n = (__int64 *)v15[1]; !*((_BYTE *)n + 25) && v15 == (__int64 *)n[2]; n = (__int64 *)n[1] )
          v15 = n;
        v15 = n;
      }
      else
      {
        v15 = (__int64 *)v15[2];
        for ( ii = *v16; !*((_BYTE *)ii + 25); ii = (__int64 *)*ii )
          v15 = ii;
      }
      sub_18004073C(a1 + 552, v25, v18);
    }
  }
  return 1;
}
