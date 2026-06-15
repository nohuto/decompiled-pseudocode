/*
 * XREFs of sub_180065A0C @ 0x180065A0C
 * Callers:
 *     sub_180065760 @ 0x180065760 (sub_180065760.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180065C3C @ 0x180065C3C (sub_180065C3C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 *     sub_1800B5EE4 @ 0x1800B5EE4 (sub_1800B5EE4.c)
 */

__int64 __fastcall sub_180065A0C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  WCHAR *v6; // rax
  __int64 v7; // rcx
  LONG v8; // edi
  __int64 v9; // rax
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  WCHAR v14; // r9
  WCHAR *v15; // rax
  LONG v16; // r8d
  unsigned __int64 v17; // rbp
  LONG v18; // esi
  HANDLE Semaphore; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // esi
  __int64 v24; // rcx
  WCHAR *v25; // rax
  __int64 v26; // rax
  WCHAR *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  char *v30; // rax
  WCHAR v31; // r8
  WCHAR *v32; // rax
  HANDLE v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  _UNKNOWN *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_1800B5EE4();
  sub_180057300(Name, 260LL, a2);
  v6 = Name;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v9 = 260 - v7;
  else
    v9 = 0LL;
  if ( v7 )
  {
    v10 = &Name[v9];
    v11 = 260 - v9;
    if ( v9 != 260 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)L"_p0" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(WCHAR *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    *v15 = 0;
  }
  v16 = 1;
  v17 = a4 >> 31;
  v18 = a4 & 0x7FFFFFFF;
  if ( v18 )
    v16 = v18;
  Semaphore = CreateSemaphoreExW(0LL, v18, v16, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    sub_180065C3C(a1, Semaphore);
    v23 = 0;
  }
  else
  {
    v23 = sub_1800B4E2C(v21, v20, v22);
  }
  if ( v23 < 0 )
  {
    sub_18004BD84((int)retaddr, 133, (int)"wil", v23);
    return (unsigned int)v23;
  }
  else
  {
    v24 = 260LL;
    v25 = Name;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v24;
    }
    while ( v24 );
    if ( v24 )
      v26 = 260 - v24;
    else
      v26 = 0LL;
    if ( v24 )
    {
      v27 = &Name[v26];
      v28 = 260 - v26;
      if ( 260 != v26 )
      {
        v29 = 2147483646LL;
        v30 = (char *)((char *)L"h" - (char *)v27);
        do
        {
          if ( !v29 )
            break;
          v31 = *(WCHAR *)((char *)v27 + (_QWORD)v30);
          if ( !v31 )
            break;
          *v27 = v31;
          --v29;
          ++v27;
          --v28;
        }
        while ( v28 );
      }
      v32 = v27 - 1;
      if ( v28 )
        v32 = v27;
      *v32 = 0;
    }
    if ( (_DWORD)v17 )
      v8 = v17;
    v33 = CreateSemaphoreExW(0LL, v17, v8, Name, 0, 0x1F0003u);
    if ( v33 )
    {
      sub_180065C3C(a1 + 8, v33);
      v37 = 0;
    }
    else
    {
      v37 = sub_1800B4E2C(v35, v34, v36);
    }
    if ( v37 < 0 )
    {
      sub_18004BD84((int)retaddr, 137, (int)"wil", v37);
      return (unsigned int)v37;
    }
    else
    {
      return 0LL;
    }
  }
}
