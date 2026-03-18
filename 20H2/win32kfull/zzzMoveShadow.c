/*
 * XREFs of zzzMoveShadow @ 0x1C023DE50
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v10; // [rsp+88h] [rbp+10h] BYREF

  v9[2] = 0LL;
  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v10 = *(struct tagPOINT *)(*(_QWORD *)(v2 + 40) + 88LL);
    v4 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, &v10, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v7, v6, v8);
  }
  return result;
}
