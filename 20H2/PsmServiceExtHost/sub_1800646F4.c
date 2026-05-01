/*
 * XREFs of sub_1800646F4 @ 0x1800646F4
 * Callers:
 *     sub_1800655B4 @ 0x1800655B4 (sub_1800655B4.c)
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 * Callees:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_18003B18C @ 0x18003B18C (sub_18003B18C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180064EDC @ 0x180064EDC (sub_180064EDC.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 *     sub_1800667C4 @ 0x1800667C4 (sub_1800667C4.c)
 */

__int64 __fastcall sub_1800646F4(void **a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
  __int64 v20; // r8
  int v21; // esi
  __int64 v23; // rcx
  WCHAR *v24; // rax
  __int64 v25; // rax
  WCHAR *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  char *v29; // rax
  WCHAR v30; // r8
  WCHAR *v31; // rax
  HANDLE v32; // rax
  __int64 v33; // r8
  int v34; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_1800667C4();
  sub_180026C20(Name, 260LL, a2);
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
    sub_18003B18C(a1, Semaphore);
    v21 = 0;
  }
  else
  {
    v21 = sub_180064EDC();
  }
  if ( v21 >= 0 )
  {
    v23 = 260LL;
    v24 = Name;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v23;
    }
    while ( v23 );
    if ( v23 )
      v25 = 260 - v23;
    else
      v25 = 0LL;
    if ( v23 )
    {
      v26 = &Name[v25];
      v27 = 260 - v25;
      if ( 260 != v25 )
      {
        v28 = 2147483646LL;
        v29 = (char *)((char *)L"h" - (char *)v26);
        do
        {
          if ( !v28 )
            break;
          v30 = *(WCHAR *)((char *)v26 + (_QWORD)v29);
          if ( !v30 )
            break;
          *v26 = v30;
          --v28;
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      v31 = v26 - 1;
      if ( v27 )
        v31 = v26;
      *v31 = 0;
    }
    if ( (_DWORD)v17 )
      v8 = v17;
    v32 = CreateSemaphoreExW(0LL, v17, v8, Name, 0, 0x1F0003u);
    if ( v32 )
    {
      sub_18003B18C(a1 + 1, v32);
      v34 = 0;
    }
    else
    {
      v34 = sub_180064EDC();
    }
    if ( v34 >= 0 )
    {
      return 0LL;
    }
    else
    {
      sub_180065FF4(retaddr, 137LL, v33, (unsigned int)v34);
      return (unsigned int)v34;
    }
  }
  else
  {
    sub_180065FF4(retaddr, 133LL, v20, (unsigned int)v21);
    return (unsigned int)v21;
  }
}
