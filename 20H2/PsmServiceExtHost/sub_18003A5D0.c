/*
 * XREFs of sub_18003A5D0 @ 0x18003A5D0
 * Callers:
 *     sub_18003A464 @ 0x18003A464 (sub_18003A464.c)
 *     sub_18006693C @ 0x18006693C (sub_18006693C.c)
 * Callees:
 *     sub_18003AB4C @ 0x18003AB4C (sub_18003AB4C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003A5D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // r8d
  int v9; // edi
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  SIZE_T v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned __int64 v17; // r8
  char *v18; // rdx
  __int64 result; // rax
  unsigned __int64 v20; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r10
  unsigned __int64 v26; // rdx
  int v27; // r9d
  __int64 v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  HANDLE v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-30h] BYREF
  int v34; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v35; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF

  LODWORD(v36) = a2;
  v35 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v9 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = 200LL;
  v11 = 0LL;
  v12 = 0x418A073AA3BC88F5LL;
  v13 = 0LL;
  v14 = -(__int64)(a4 != 0) & 0xC8;
  if ( !(_DWORD)v36 )
    v12 = 0x418A073AA3BC7C75LL;
  v37 = v12;
  v33 = a4 != 0 ? 0xC8 : 0;
  v15 = sub_18003AB4C((unsigned int)&v37, v7, v8, (int)a1 + 8, a4, (__int64)&v33);
  v16 = v15;
  if ( !v15 )
  {
    v13 = (char *)v35;
    if ( !v35 )
      goto LABEL_15;
  }
  while ( v15 == -1073741789 )
  {
LABEL_15:
    if ( v14 < 0xC8 )
      v14 = 200LL;
    v20 = v14;
    v14 = v33;
    if ( v20 >= v33 )
      v14 = v20;
    if ( v14 < 0x10 )
      v14 = 16LL;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    v22 = GetProcessHeap();
    v11 = (char *)HeapAlloc(v22, 0, v14);
    if ( !v11 )
      return 3221225626LL;
    v33 = v14;
    v15 = sub_18003AB4C((unsigned int)&v37, v23, v24, (int)a1 + 8, (__int64)v11, (__int64)&v33);
    v16 = v15;
    v13 = v11;
  }
  if ( v16 || !v13 )
  {
    if ( v11 )
    {
      v32 = GetProcessHeap();
      HeapFree(v32, 0, v11);
    }
    return v16;
  }
  else
  {
    v17 = v33;
    if ( v33 > 4 )
      *(_BYTE *)(a1 + 12) = *v13;
    if ( (unsigned int)v17 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *((_WORD *)v13 + 1) >= 0x10u
      && (v25 = *((unsigned __int16 *)v13 + 2),
          v26 = *((unsigned __int16 *)v13 + 1) + 16LL * *((unsigned __int16 *)v13 + 3) + 12 * v25,
          v17 >= v26) )
    {
      v34 = 0;
      v27 = 0;
      if ( (_WORD)v25 )
      {
        v28 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v36 )
          v28 = 0x418A073AA3BC8075LL;
        v36 = v28;
        LODWORD(v35) = 0;
        sub_18003AB4C((unsigned int)&v36, v26, v17, (unsigned int)&v34, 0LL, (__int64)&v35);
        LODWORD(v17) = v33;
        v27 = v34;
      }
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 32) = v13 + 16;
      *(_QWORD *)(a1 + 40) = &v13[12 * *((unsigned __int16 *)v13 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v27 != 0;
      if ( *v13 == 2 && (unsigned __int8)v13[1] < 2u )
      {
        v29 = 16 * *((unsigned __int16 *)v13 + 3);
        v30 = 3 * *((unsigned __int16 *)v13 + 2);
        v31 = *((unsigned __int16 *)v13 + 1);
        *(_DWORD *)(a1 + 16) = 1;
        LODWORD(v17) = v31 + v29 + 4 * v30;
      }
    }
    else
    {
      v33 = 16;
      *(_OWORD *)v13 = 0LL;
      *(_DWORD *)v13 = 1049090;
      LODWORD(v17) = v33;
      *(_QWORD *)(a1 + 24) = v13;
      v18 = &v13[*((unsigned __int16 *)v13 + 1)];
      *(_QWORD *)(a1 + 32) = v18;
      *(_QWORD *)(a1 + 40) = &v18[12 * *((unsigned __int16 *)v13 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v17;
    if ( v11 )
      v10 = v14;
    *(_QWORD *)(a1 + 56) = v13;
    *(_QWORD *)(a1 + 72) = v10;
    LOBYTE(v9) = v13 == v11;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v9;
  }
  return result;
}
