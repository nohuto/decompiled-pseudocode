/*
 * XREFs of sub_18003AE4C @ 0x18003AE4C
 * Callers:
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 * Callees:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 *     sub_18003B07C @ 0x18003B07C (sub_18003B07C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180065FD4 @ 0x180065FD4 (sub_180065FD4.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 */

__int64 __fastcall sub_18003AE4C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  WCHAR *v5; // rax
  __int64 v6; // rax
  WCHAR *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  char *v10; // rax
  WCHAR v11; // r9
  WCHAR *v12; // rax
  HANDLE v13; // rax
  void *v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // esi
  __int64 v18; // rcx
  WCHAR *v19; // rax
  __int64 v20; // rax
  WCHAR *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  char *v24; // r8
  WCHAR v25; // ax
  WCHAR *v26; // rax
  HANDLE v27; // rax
  void *v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  __int64 v32; // rdx
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  void *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  sub_180026C20(Name, 260LL, a1);
  v4 = 260LL;
  v5 = Name;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
    v6 = 260 - v4;
  else
    v6 = 0LL;
  if ( v4 )
  {
    v7 = &Name[v6];
    v8 = 260 - v6;
    if ( v6 != 260 )
    {
      v9 = 2147483646LL;
      v10 = (char *)((char *)L"_p0" - (char *)v7);
      do
      {
        if ( !v9 )
          break;
        v11 = *(WCHAR *)((char *)v7 + (_QWORD)v10);
        if ( !v11 )
          break;
        *v7 = v11;
        --v9;
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    v12 = v7 - 1;
    if ( v8 )
      v12 = v7;
    *v12 = 0;
  }
  v13 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v14 = v13;
  if ( !v13 )
  {
    if ( GetLastError() == 2 )
      goto LABEL_34;
    v32 = 201LL;
    goto LABEL_42;
  }
  v15 = sub_18003B07C(v13);
  v17 = v15;
  if ( v15 < 0 )
  {
    sub_180065FF4(retaddr, 207LL, v16, (unsigned int)v15);
    goto LABEL_35;
  }
  v18 = 260LL;
  v19 = Name;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v18;
  }
  while ( v18 );
  if ( v18 )
    v20 = 260 - v18;
  else
    v20 = 0LL;
  if ( v18 )
  {
    v21 = &Name[v20];
    v22 = 260 - v20;
    if ( 260 != v20 )
    {
      v23 = 2147483646LL;
      v24 = (char *)((char *)L"h" - (char *)v21);
      do
      {
        if ( !v23 )
          break;
        v25 = *(WCHAR *)((char *)v21 + (_QWORD)v24);
        if ( !v25 )
          break;
        *v21 = v25;
        --v23;
        ++v21;
        --v22;
      }
      while ( v22 );
    }
    v26 = v21 - 1;
    if ( v22 )
      v26 = v21;
    *v26 = 0;
  }
  v27 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v28 = v27;
  if ( !v27 )
  {
    v32 = 213LL;
LABEL_42:
    v17 = sub_180065FD4(retaddr, v32);
    goto LABEL_35;
  }
  v29 = sub_18003B07C(v27);
  v17 = v29;
  if ( v29 >= 0 )
  {
    sub_1800383E4(v28);
    *a3 = 0LL;
LABEL_34:
    v17 = 0;
    goto LABEL_35;
  }
  sub_180065FF4(retaddr, 215LL, v30, (unsigned int)v29);
  sub_1800383E4(v28);
LABEL_35:
  if ( v14 )
    sub_1800383E4(v14);
  return v17;
}
