/*
 * XREFs of xxxUpdateShadowZorder @ 0x1C023DCA8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF

  v13[2] = 0LL;
  result = FindShadow((struct tagWND *)a1);
  if ( !result )
    return result;
  v4 = *((_QWORD *)result + 1);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v5 + 24) & 8) != 0 && (*(_BYTE *)(v6 + 24) & 8) == 0 )
  {
    v7 = 1;
LABEL_8:
    SetOrClrWF(v7, v4, 0x808u, 1);
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(v5 + 24) & 8) == 0 && (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v7 = 0;
    goto LABEL_8;
  }
LABEL_9:
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL) != v8 )
    SetWindowGroupBand((struct tagWND *)v4, v8, 0);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v13;
  v13[1] = v4;
  HMLockObject(v4);
  xxxSetWindowPos((struct tagWND *)v4, a1, 0LL, 0LL, 0, 0, 19);
  return (struct tagSHADOW *)ThreadUnlock1(v11, v10, v12);
}
