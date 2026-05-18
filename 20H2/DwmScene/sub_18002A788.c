/*
 * XREFs of sub_18002A788 @ 0x18002A788
 * Callers:
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180027CC0 @ 0x180027CC0 (sub_180027CC0.c)
 *     sub_180027D48 @ 0x180027D48 (sub_180027D48.c)
 *     sub_18002A008 @ 0x18002A008 (sub_18002A008.c)
 *     sub_18002BD94 @ 0x18002BD94 (sub_18002BD94.c)
 *     sub_18002BEA4 @ 0x18002BEA4 (sub_18002BEA4.c)
 *     sub_18002C008 @ 0x18002C008 (sub_18002C008.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

void __fastcall sub_18002A788(__int64 a1)
{
  int v2; // ecx
  signed int v3; // esi
  __int64 **v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 *k; // r9
  unsigned __int64 i; // rdx
  __int64 **v16; // rax
  __int64 *j; // rax
  __int64 *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 *ii; // r9
  unsigned __int64 m; // rdx
  __int64 **v22; // rax
  __int64 *n; // rax
  __int64 *v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 *mm; // r9
  unsigned __int64 jj; // rdx
  __int64 **v28; // rax
  __int64 *kk; // rax
  __int64 *v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+50h] [rbp-30h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-10h] BYREF

  v2 = *(_DWORD *)(a1 + 1640);
  if ( !v2 )
    return;
  v3 = (*(_DWORD *)(a1 + 1644) - v2 + 21) % 0x14u;
  v4 = (__int64 **)(a1 + 1648);
  do
  {
    v5 = *(_DWORD *)(56LL * v3 + a1 + 536);
    v38 = v5;
    if ( sub_18002BD94(a1 + 1648, &v38) )
    {
      sub_180027D48((__int64 **)(a1 + 1648), (__int64)&v35, &v38);
      sub_18002A008(a1, &v33, *(_DWORD *)(v35 + 44));
      v6 = v33;
      if ( v33 <= 0 )
        break;
      sub_180027CC0((__int64 **)(a1 + 1680), (__int64)&v36, &v38);
      v7 = v36;
      goto LABEL_21;
    }
    v8 = *v4;
    v9 = *v4;
    v10 = (*v4)[1];
    while ( !*(_BYTE *)(v10 + 25) )
    {
      if ( *(_DWORD *)(v10 + 32) >= v5 )
      {
        v8 = (__int64 *)v10;
        v10 = *(_QWORD *)v10;
      }
      else
      {
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    v32 = v8;
    if ( v8 == (__int64 *)*v9 )
      break;
    sub_180022400(&v32);
    v11 = v9[1];
    if ( *(_BYTE *)(v11 + 25) )
      break;
    do
    {
      if ( v5 >= *(_DWORD *)(v11 + 32) )
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
      else
      {
        v9 = (__int64 *)v11;
        v11 = *(_QWORD *)v11;
      }
    }
    while ( !*(_BYTE *)(v11 + 25) );
    if ( v9 == *(__int64 **)(a1 + 1648) )
      break;
    v12 = v32;
    sub_18002A008(a1, &v34, *((_DWORD *)v32 + 11));
    sub_18002A008(a1, &v31, *((_DWORD *)v9 + 11));
    if ( v34 <= 0 || v31 <= 0 )
      break;
    v6 = v34
       + (int)(v38 - *((_DWORD *)v12 + 8)) * ((v31 - v34) / (unsigned int)(*((_DWORD *)v9 + 8) - *((_DWORD *)v12 + 8)));
    sub_180027CC0((__int64 **)(a1 + 1680), (__int64)&v37, &v38);
    v7 = v37;
LABEL_21:
    *(_QWORD *)(v7 + 40) = v6;
    --*(_DWORD *)(a1 + 1640);
    v3 = (v3 + 1) % 0x14u;
  }
  while ( *(_DWORD *)(a1 + 1640) );
  v13 = *(_QWORD *)(a1 + 1656);
  if ( v13 > 0x14 )
  {
    k = **(__int64 ***)(a1 + 1648);
    for ( i = v13 - 20; i; --i )
    {
      v16 = (__int64 **)k[2];
      if ( *((_BYTE *)v16 + 25) )
      {
        for ( j = (__int64 *)k[1]; !*((_BYTE *)j + 25) && k == (__int64 *)j[2]; j = (__int64 *)j[1] )
          k = j;
        k = j;
      }
      else
      {
        v18 = *v16;
        for ( k = (__int64 *)k[2]; !*((_BYTE *)v18 + 25); v18 = (__int64 *)*v18 )
          k = v18;
      }
    }
    sub_18002C008(a1 + 1648, &v31, **(_QWORD **)(a1 + 1648), k);
  }
  v19 = *(_QWORD *)(a1 + 1672);
  if ( v19 > 0x14 )
  {
    ii = **(__int64 ***)(a1 + 1664);
    for ( m = v19 - 20; m; --m )
    {
      v22 = (__int64 **)ii[2];
      if ( *((_BYTE *)v22 + 25) )
      {
        for ( n = (__int64 *)ii[1]; !*((_BYTE *)n + 25) && ii == (__int64 *)n[2]; n = (__int64 *)n[1] )
          ii = n;
        ii = n;
      }
      else
      {
        v24 = *v22;
        for ( ii = (__int64 *)ii[2]; !*((_BYTE *)v24 + 25); v24 = (__int64 *)*v24 )
          ii = v24;
      }
    }
    sub_18002BEA4(a1 + 1664, &v31, **(_QWORD **)(a1 + 1664), ii);
  }
  v25 = *(_QWORD *)(a1 + 1688);
  if ( v25 > 0x14 )
  {
    mm = **(__int64 ***)(a1 + 1680);
    for ( jj = v25 - 20; jj; --jj )
    {
      v28 = (__int64 **)mm[2];
      if ( *((_BYTE *)v28 + 25) )
      {
        for ( kk = (__int64 *)mm[1]; !*((_BYTE *)kk + 25) && mm == (__int64 *)kk[2]; kk = (__int64 *)kk[1] )
          mm = kk;
        mm = kk;
      }
      else
      {
        v30 = *v28;
        for ( mm = (__int64 *)mm[2]; !*((_BYTE *)v30 + 25); v30 = (__int64 *)*v30 )
          mm = v30;
      }
    }
    sub_18002BEA4(a1 + 1680, &v31, **(_QWORD **)(a1 + 1680), mm);
  }
}
