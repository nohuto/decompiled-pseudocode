/*
 * XREFs of sub_1800041A8 @ 0x1800041A8
 * Callers:
 *     sub_180004820 @ 0x180004820 (sub_180004820.c)
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 * Callees:
 *     sub_180004044 @ 0x180004044 (sub_180004044.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     memset @ 0x1800453CC (memset.c)
 */

__int64 __fastcall sub_1800041A8(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // edi
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  SIZE_T v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  HANDLE ProcessHeap; // rax
  HANDLE v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r8
  __int64 v22; // r10
  unsigned __int64 v23; // rdx
  int v24; // r9d
  __int64 v25; // rax
  __int64 result; // rax
  char *v27; // rdx
  HANDLE v28; // rax
  unsigned int v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF

  LODWORD(v32) = a2;
  v31 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v9 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = 200LL;
  v11 = 0LL;
  v12 = 0x418A073AA3BC88F5LL;
  v13 = 0LL;
  v14 = -(__int64)(a4 != 0) & 0xC8;
  if ( !(_DWORD)v32 )
    v12 = 0x418A073AA3BC7C75LL;
  v33 = v12;
  v29 = a4 != 0 ? 0xC8 : 0;
  v15 = sub_180004044((__int64)&v33, v7, v8, a1 + 8, a4, (__int64)&v29);
  v16 = v15;
  if ( v15 )
    goto LABEL_15;
  v13 = (char *)v31;
  if ( v31 )
    goto LABEL_15;
  do
  {
    if ( v14 < 0xC8 )
      v14 = 200LL;
    if ( v14 < v29 )
      v14 = v29;
    if ( v14 < 0x10 )
      v14 = 16LL;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    v18 = GetProcessHeap();
    v11 = (char *)HeapAlloc(v18, 0, v14);
    if ( !v11 )
      return 3221225626LL;
    v29 = v14;
    v15 = sub_180004044((__int64)&v33, v19, v20, a1 + 8, (__int64)v11, (__int64)&v29);
    v16 = v15;
    v13 = v11;
LABEL_15:
    ;
  }
  while ( v15 == -1073741789 );
  if ( v16 || !v13 )
  {
    if ( v11 )
    {
      v28 = GetProcessHeap();
      HeapFree(v28, 0, v11);
    }
    return v16;
  }
  else
  {
    v21 = v29;
    if ( v29 > 4 )
      *(_BYTE *)(a1 + 12) = *v13;
    if ( (unsigned int)v21 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *((_WORD *)v13 + 1) >= 0x10u
      && (v22 = *((unsigned __int16 *)v13 + 2),
          v23 = *((unsigned __int16 *)v13 + 1) + 16LL * *((unsigned __int16 *)v13 + 3) + 12 * v22,
          v21 >= v23) )
    {
      v30 = 0;
      v24 = 0;
      if ( (_WORD)v22 )
      {
        v25 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v32 )
          v25 = 0x418A073AA3BC8075LL;
        v32 = v25;
        LODWORD(v31) = 0;
        sub_180004044((__int64)&v32, v23, v21, (__int64)&v30, 0LL, (__int64)&v31);
        LODWORD(v21) = v29;
        v24 = v30;
      }
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 32) = v13 + 16;
      *(_QWORD *)(a1 + 40) = &v13[12 * *((unsigned __int16 *)v13 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v24 != 0;
      if ( *v13 == 2 && (unsigned __int8)v13[1] < 2u )
      {
        LODWORD(v21) = *((unsigned __int16 *)v13 + 1)
                     + 16 * *((unsigned __int16 *)v13 + 3)
                     + 12 * *((unsigned __int16 *)v13 + 2);
        *(_DWORD *)(a1 + 16) = 1;
      }
    }
    else
    {
      v29 = 16;
      *(_OWORD *)v13 = 0LL;
      *(_DWORD *)v13 = 1049090;
      LODWORD(v21) = v29;
      *(_QWORD *)(a1 + 24) = v13;
      v27 = &v13[*((unsigned __int16 *)v13 + 1)];
      *(_QWORD *)(a1 + 32) = v27;
      *(_QWORD *)(a1 + 40) = &v27[12 * *((unsigned __int16 *)v13 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v21;
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
