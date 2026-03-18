/*
 * XREFs of zzzCloakShadow @ 0x1C023DDB0
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  int v2; // edx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[2] = 0LL;
  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v4 = *((_QWORD *)result + 1);
    v5 = v2 != 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    zzzSetWindowCompositionCloak(*((_QWORD *)v3 + 1), 0LL, v5);
    return (struct tagSHADOW *)ThreadUnlock1(v8, v7, v9);
  }
  return result;
}
