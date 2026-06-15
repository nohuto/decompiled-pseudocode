/*
 * XREFs of sub_18005EE14 @ 0x18005EE14
 * Callers:
 *     sub_180060F54 @ 0x180060F54 (sub_180060F54.c)
 * Callees:
 *     sub_18007215C @ 0x18007215C (sub_18007215C.c)
 */

__int64 __fastcall sub_18005EE14(__int64 a1, HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  _WORD *v6; // rbx
  __int64 v7; // rdi
  char *v8; // rcx
  __int16 v9; // ax
  _WORD *v10; // rax
  signed __int64 v12; // rcx
  __int16 v13; // ax
  char *v14; // rax

  sub_18007215C();
  v4 = 128LL;
  *(_QWORD *)a1 = off_1801486F8;
  v5 = (char *)(a1 + 32);
  *(_OWORD *)(a1 + 16) = xmmword_180160A18;
  if ( LoadStringW(a2, 0x190u, (LPWSTR)(a1 + 32), 128) <= 0 )
  {
    v12 = (char *)L"Microsoft HRTF" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v13 = *(_WORD *)&v5[v12];
      if ( !v13 )
        break;
      *(_WORD *)v5 = v13;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v14 = v5 - 2;
    if ( v4 )
      v14 = v5;
    *(_WORD *)v14 = 0;
  }
  v6 = (_WORD *)(a1 + 288);
  v7 = 256LL;
  if ( LoadStringW(a2, 0x1AEu, (LPWSTR)(a1 + 288), 256) <= 0 )
  {
    v8 = (char *)(&unk_18015C744 - (_UNKNOWN *)v6);
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = *(_WORD *)((char *)v6 + (_QWORD)v8);
      if ( !v9 )
        break;
      *v6++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v6 - 1;
    if ( v7 )
      v10 = v6;
    *v10 = 0;
  }
  return a1;
}
