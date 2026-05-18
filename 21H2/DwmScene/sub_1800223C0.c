/*
 * XREFs of sub_1800223C0 @ 0x1800223C0
 * Callers:
 *     sub_180021558 @ 0x180021558 (sub_180021558.c)
 *     sub_180021624 @ 0x180021624 (sub_180021624.c)
 * Callees:
 *     sub_180021B3C @ 0x180021B3C (sub_180021B3C.c)
 *     sub_1800226E0 @ 0x1800226E0 (sub_1800226E0.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800223C0(__int64 a1, int a2, SIZE_T a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  char *v10; // r14
  SIZE_T v11; // rsi
  char *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // r15d
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  int v19; // r15d
  int v20; // r9d
  __int64 v21; // rax
  char *v23; // rdx
  int v24; // eax
  HANDLE v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+34h] [rbp-34h] BYREF
  __int64 v28; // [rsp+38h] [rbp-30h] BYREF
  int v29; // [rsp+40h] [rbp-28h] BYREF
  __int64 v30; // [rsp+48h] [rbp-20h] BYREF

  LODWORD(v28) = a2;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  *(_DWORD *)(a1 + 4) = a5;
  *(_DWORD *)a1 = a2;
  v9 = 0x418A073AA3BC88F5LL;
  v10 = 0LL;
  v11 = a3 & -(__int64)(a4 != 0);
  v12 = 0LL;
  if ( !a2 )
    v9 = 0x418A073AA3BC7C75LL;
  v30 = v9;
  v26 = a4 != 0 ? a3 : 0;
  v13 = sub_180021B3C((__int64)&v30, 0LL, 0LL, a1 + 8, a4, (__int64)&v26);
  v14 = v13;
  if ( !v13 )
  {
    if ( !a4 )
      goto LABEL_6;
    v12 = (char *)a4;
  }
  while ( v13 == -1073741789 )
  {
LABEL_6:
    if ( v11 < a3 )
      v11 = a3;
    if ( v11 < v26 )
      v11 = v26;
    if ( v11 < 0x10 )
      v11 = 16LL;
    if ( v10 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
    }
    v16 = GetProcessHeap();
    v10 = (char *)HeapAlloc(v16, 0, v11);
    if ( !v10 )
      return 3221225626LL;
    v26 = v11;
    v13 = sub_180021B3C((__int64)&v30, 0LL, 0LL, a1 + 8, (__int64)v10, (__int64)&v26);
    v14 = v13;
    v12 = v10;
  }
  if ( v14 || !v12 )
  {
    if ( v10 )
    {
      v25 = GetProcessHeap();
      HeapFree(v25, 0, v10);
    }
    return v14;
  }
  else
  {
    v17 = v26;
    if ( v26 > 4 )
      *(_BYTE *)(a1 + 12) = *v12;
    if ( (unsigned int)v17 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *((_WORD *)v12 + 1) >= 0x10u
      && (v18 = *((unsigned __int16 *)v12 + 2),
          v17 >= *((unsigned __int16 *)v12 + 1) + 16 * (unsigned __int64)*((unsigned __int16 *)v12 + 3) + 12 * v18) )
    {
      v27 = 0;
      v19 = 0;
      v20 = 0;
      if ( (_WORD)v18 )
      {
        v21 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v28 )
          v21 = 0x418A073AA3BC8075LL;
        v28 = v21;
        v29 = 0;
        sub_180021B3C((__int64)&v28, 0LL, 0LL, (__int64)&v27, 0LL, (__int64)&v29);
        LODWORD(v17) = v26;
        v20 = v27;
      }
      *(_QWORD *)(a1 + 24) = v12;
      *(_QWORD *)(a1 + 32) = v12 + 16;
      *(_QWORD *)(a1 + 40) = &v12[12 * *((unsigned __int16 *)v12 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v20 != 0;
      if ( *v12 == 2 && (unsigned __int8)v12[1] < 2u )
      {
        LODWORD(v17) = *((unsigned __int16 *)v12 + 1)
                     + 16 * *((unsigned __int16 *)v12 + 3)
                     + 12 * *((unsigned __int16 *)v12 + 2);
        *(_DWORD *)(a1 + 16) = 1;
        v26 = v17;
      }
    }
    else
    {
      v26 = 16;
      *(_OWORD *)v12 = 0LL;
      *(_DWORD *)v12 = 1049090;
      v19 = 1;
      LODWORD(v17) = v26;
      *(_QWORD *)(a1 + 24) = v12;
      v23 = &v12[*((unsigned __int16 *)v12 + 1)];
      *(_QWORD *)(a1 + 32) = v23;
      *(_QWORD *)(a1 + 40) = &v23[12 * *((unsigned __int16 *)v12 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v17;
    v24 = 0;
    if ( v10 )
      a3 = v11;
    *(_QWORD *)(a1 + 56) = v12;
    *(_QWORD *)(a1 + 72) = a3;
    LOBYTE(v24) = v12 == v10;
    *(_DWORD *)(a1 + 80) = v24;
    if ( a5 && !v19 && !*(_DWORD *)(a1 + 48) )
      sub_1800226E0(a1);
    return 0LL;
  }
}
