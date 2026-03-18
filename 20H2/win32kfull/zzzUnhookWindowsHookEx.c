/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C0074694
 * Callers:
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0074640 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C0074888 (zzzSetWindowsHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01E67F0 (zzzUnhookWindowsHook.c)
 * Callees:
 *     FreeHook @ 0x1C0074BD0 (FreeHook.c)
 *     PhkNextValid @ 0x1C0074F10 (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PhkFirstGlobalValid @ 0x1C00D7DDC (PhkFirstGlobalValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E60E8 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  struct tagHOOK *v1; // rbx
  __int64 v2; // rdi
  _BYTE *v3; // rsi
  int v5; // r8d
  __int64 i; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v3 = &unk_1C02E9608;
  if ( (*((_BYTE *)&unk_1C02E9608 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    v11[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = v1;
    HMLockObject(v1);
    zzzJournalAttach((struct tagTHREADINFO *)v2, 0);
    v1 = (struct tagHOOK *)ThreadUnlock1(v9, v8, v10);
  }
  if ( v1 )
    FreeHook(v1);
  if ( (*(_DWORD *)(v2 + 488) & 0x40000) != 0 )
  {
    v5 = -1;
    do
    {
      if ( (*v3 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2, (unsigned int)v5); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v2 )
            return 1LL;
        }
      }
      ++v5;
      ++v3;
    }
    while ( v5 <= 14 );
    *(_DWORD *)(v2 + 488) &= ~0x40000u;
  }
  return 1LL;
}
