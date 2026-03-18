/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C00199A0
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00198C0 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     UserReAllocPool @ 0x1C0043580 (UserReAllocPool.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r15
  struct tagTHREADINFO ***v4; // r14
  struct tagKL *v5; // rbp
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rdx
  void *v9; // rbx
  __int64 v10; // rsi
  __int64 i; // rbp
  _QWORD *j; // r14
  _QWORD *v13; // r15
  PVOID *v14; // rcx
  __int64 k; // rsi
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v9 = (void *)Win32AllocPool(1024LL, 1769239381LL);
  if ( !v9 )
    return 0LL;
  v10 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v10 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          v13 = j - 92;
          if ( j != (_QWORD *)736 && (!a3 || a3 == (struct tagKL *)v13[54]) )
          {
            v14 = (PVOID *)v13[52];
            if ( *v14 == gpepCSRSS || *(_QWORD *)v13[52] == PsGetCurrentProcess(v14, v8) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v18 = UserReAllocPool(v9, 8LL * (unsigned int)v6);
                if ( !v18 )
                  goto LABEL_29;
                v9 = (void *)v18;
              }
              *((_QWORD *)v9 + v6) = v13;
              v6 = (unsigned int)(v6 + 1);
            }
          }
        }
      }
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v10 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 320); k; k = *(_QWORD *)(k + 656) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 432) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v19 = UserReAllocPool(v9, 8LL * (unsigned int)v6);
        if ( !v19 )
        {
LABEL_29:
          Win32FreePool(v9);
          return 0LL;
        }
        v9 = (void *)v19;
      }
      *((_QWORD *)v9 + v6) = k;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  if ( (_DWORD)v6 && v4 )
  {
    *v4 = (struct tagTHREADINFO **)v9;
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(v9, v3, Win32FreePool, v16);
  }
  else
  {
    Win32FreePool(v9);
  }
  return (unsigned int)v6;
}
