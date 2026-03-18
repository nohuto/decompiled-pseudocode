/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C013529C
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C001DCC0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001DE38 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _GetLayeredWindowAttributes @ 0x1C01353EC (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  struct tagSHADOW *v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v13[8]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v14; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  _QWORD v16[6]; // [rsp+70h] [rbp+27h] BYREF
  BYTE v17; // [rsp+B8h] [rbp+6Fh] BYREF
  struct _BLENDFUNCTION v18; // [rsp+C0h] [rbp+77h] BYREF
  int v19; // [rsp+C8h] [rbp+7Fh] BYREF

  v16[2] = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  result = FindShadow(a1);
  v19 = 0;
  v3 = result;
  v18 = 0;
  v17 = 0;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v16;
    v16[1] = a1;
    if ( a1 )
      HMLockObject(a1);
    if ( (unsigned int)GetLayeredWindowAttributes(a1, v13, &v17, &v19) && (v19 & 2) != 0 )
    {
      v18.SourceConstantAlpha = v17;
      v18.AlphaFormat = 1;
      v8 = *((_QWORD *)v3 + 1);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v14 = *(_QWORD *)(v9 + 408);
      *(_QWORD *)(v9 + 408) = &v14;
      *((_QWORD *)&v14 + 1) = v8;
      if ( v8 )
        HMLockObject(v8);
      zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, &v18, 2u, 0LL);
      ThreadUnlock1(v11, v10, v12);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v6, v5, v7);
  }
  return result;
}
