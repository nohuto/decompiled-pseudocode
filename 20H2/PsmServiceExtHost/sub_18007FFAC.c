/*
 * XREFs of sub_18007FFAC @ 0x18007FFAC
 * Callers:
 *     sub_18007ADB0 @ 0x18007ADB0 (sub_18007ADB0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000DC14 @ 0x18000DC14 (sub_18000DC14.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_18002A414 @ 0x18002A414 (sub_18002A414.c)
 *     sub_18003BCC0 @ 0x18003BCC0 (sub_18003BCC0.c)
 *     sub_18003BF5C @ 0x18003BF5C (sub_18003BF5C.c)
 *     sub_18003BFA8 @ 0x18003BFA8 (sub_18003BFA8.c)
 *     sub_18007D890 @ 0x18007D890 (sub_18007D890.c)
 *     sub_18007D960 @ 0x18007D960 (sub_18007D960.c)
 *     sub_18007FF78 @ 0x18007FF78 (sub_18007FF78.c)
 */

__int64 __fastcall sub_18007FFAC(__int64 a1, __int64 a2, int *a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  int v8; // ebx
  _QWORD *i; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v14; // edx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]

  v19 = 0LL;
  v20 = 0LL;
  sub_18002A414(a1);
  v6 = (*(_DWORD *)(a1 + 344) >> 5) & 7;
  sub_18007FF78(a1, v7);
  v8 = 0;
  for ( i = (_QWORD *)sub_180025F18(a1, 1); i; i = (_QWORD *)sub_180027598(a1, i) )
  {
    v10 = sub_18000DC14((__int64)i);
    v11 = v10;
    if ( v10 )
    {
      v8 = sub_18003BFA8((__int64)&v19, v10);
      if ( v8 >= 0 )
        v8 = 0;
      sub_18001E380();
      if ( (*(_QWORD *)(v11 + 592))-- == 1LL )
        sub_18000A1AC(v11 - 64, v12);
      sub_18000F390();
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741275 )
        goto LABEL_21;
      v8 = 0;
    }
  }
  v14 = DWORD2(v19);
  v15 = 0LL;
  v16 = (__int64 *)v19;
  if ( DWORD2(v19) )
  {
    v15 = (__int64 *)v19;
    LODWORD(v20) = 1;
  }
  if ( v15 )
  {
    do
    {
      sub_18007D890(*v15, a2);
      v15 = (__int64 *)sub_18003BF5C((__int64)&v19);
    }
    while ( v15 );
    v14 = DWORD2(v19);
    v16 = (__int64 *)v19;
  }
  v17 = 0LL;
  if ( v14 )
  {
    v17 = v16;
    LODWORD(v20) = 1;
  }
  while ( v17 )
  {
    sub_18007D960(*v17);
    v17 = (__int64 *)sub_18003BF5C((__int64)&v19);
  }
  *a3 = v6;
LABEL_21:
  sub_18003BCC0((__int64)&v19);
  return (unsigned int)v8;
}
