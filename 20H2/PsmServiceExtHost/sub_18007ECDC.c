/*
 * XREFs of sub_18007ECDC @ 0x18007ECDC
 * Callers:
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 * Callees:
 *     sub_1800065A4 @ 0x1800065A4 (sub_1800065A4.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001E400 @ 0x18001E400 (sub_18001E400.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18003414C @ 0x18003414C (sub_18003414C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007E5A0 @ 0x18007E5A0 (sub_18007E5A0.c)
 *     sub_18007EB50 @ 0x18007EB50 (sub_18007EB50.c)
 *     sub_18007F028 @ 0x18007F028 (sub_18007F028.c)
 */

__int64 __fastcall sub_18007ECDC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v25[2]; // [rsp+20h] [rbp-50h] BYREF
  int v26; // [rsp+30h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-30h]
  __int64 *v28; // [rsp+48h] [rbp-28h]
  _QWORD v29[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 688);
  v28 = a3;
  v27 = a1;
  v5 = a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 96)) <= 1 )
    __fastfail(0xEu);
  v6 = *(_QWORD *)(a2 + 688);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 96)) <= 1 )
    __fastfail(0xEu);
  sub_18000A110(a1);
  sub_18000A110(a2);
  v7 = *(_QWORD *)v3;
  v8 = v3;
  v9 = *(_QWORD *)v6;
  if ( *(_QWORD *)v3 >= *(_QWORD *)v6 )
    v8 = v6;
  sub_180009018(v8);
  v10 = v6;
  if ( v7 >= v9 )
    v10 = v3;
  sub_180009018(v10);
  sub_18000AE74(v5, a2);
  if ( *(_QWORD *)(v5 + 688) == v3 && *(_QWORD *)(a2 + 688) == v6 )
  {
    sub_18000A110(v5);
    sub_18000A110(a2);
    v25[1] = v25;
    v25[0] = v25;
    sub_18001E400(v3, v25);
    for ( i = v25[0]; i != v25; i = (_QWORD *)*i )
      sub_18007EB50(v3, (__int64)(i - 91));
    sub_18000E244(v3);
    for ( j = v25[0]; j != v25; j = (_QWORD *)*j )
      sub_1800065A4((__int64 *)v6, (__int64)(j - 91));
    v13 = 0;
    v16 = sub_18007E5A0(v3);
    if ( v16 )
    {
      v17 = (__int64 *)(v6 + 72);
      do
      {
        sub_18000B084(v15, v14, 2u, 0);
        RtlAcquireSRWLockExclusive(v16 + 48);
        *(_DWORD *)(v16 + 56) = GetCurrentThreadId();
        sub_18000E1BC(v3);
        RtlRbRemoveNode(v3 + 72, v16);
        *(_QWORD *)(v16 + 16) = -1LL;
        sub_18000E244(v3);
        v18 = *(_QWORD *)(v16 + 24);
        v29[1] = *(_QWORD *)(v16 + 32);
        v29[0] = v18;
        sub_18000E1BC(v6);
        v20 = *v17;
        if ( (*(_BYTE *)(v6 + 80) & 1) != 0 )
        {
          if ( v20 )
            v20 ^= (unsigned __int64)v17;
          else
            v20 = 0LL;
        }
        LOBYTE(v19) = 0;
        v26 = *(_BYTE *)(v6 + 80) & 1;
        if ( v20 )
        {
          while ( 1 )
          {
            if ( (int)sub_18003414C(v29, v20) < 0 )
            {
              v21 = *(_QWORD *)v20;
              if ( v26 )
              {
                if ( !v21 )
                  goto LABEL_35;
                v21 ^= v20;
              }
              if ( !v21 )
              {
LABEL_35:
                LOBYTE(v19) = 0;
                break;
              }
            }
            else
            {
              v21 = *(_QWORD *)(v20 + 8);
              if ( v26 )
              {
                if ( !v21 )
                  goto LABEL_29;
                v21 ^= v20;
              }
              if ( !v21 )
              {
LABEL_29:
                LOBYTE(v19) = 1;
                break;
              }
            }
            v20 = v21;
          }
        }
        RtlRbInsertNodeEx(v6 + 72, v20, v19, v16);
        sub_18000E244(v6);
        sub_1800286D8(*(_QWORD *)(v16 + 40));
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 96)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v16 + 40) = v6;
        sub_18001E830(v23, v22, 2u);
        *(_DWORD *)(v16 + 56) = 0;
        RtlReleaseSRWLockExclusive(v16 + 48);
        v16 = sub_18007E5A0(v3);
      }
      while ( v16 );
      v5 = v27;
    }
    sub_18007F028(v25);
    sub_18007E434(v25);
    sub_180017F60((char *)v3);
    sub_1800286D8(v3);
    *v28 = v6;
  }
  else
  {
    v13 = -1073741267;
    sub_18000A110(v5);
    sub_18000A110(a2);
    sub_180017F60((char *)v3);
    sub_180017F60((char *)v6);
    sub_1800286D8(v3);
    sub_1800286D8(v6);
  }
  sub_18000AE74(v5, a2);
  return v13;
}
