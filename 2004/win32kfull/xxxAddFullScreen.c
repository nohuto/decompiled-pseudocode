/*
 * XREFs of xxxAddFullScreen @ 0x1C01192D4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C01192D4 (xxxAddFullScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C00338B4 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     xxxAddFullScreen @ 0x1C01192D4 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(_QWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // rax
  char v7; // cl
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = (_QWORD *)a1[3];
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1[5] + 20LL) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(1, (__int64)a1, 0x440u, 1);
    if ( ++*(_WORD *)(gpDispInfo + 160LL) == 1 )
    {
      v13 = 0LL;
      v12 = 0LL;
      PushW32ThreadLock((__int64)v1, &v12, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)&v12);
      v3 = 1;
    }
    v4 = a1[15];
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = *(_BYTE *)(v6 + 31);
      if ( (v7 & 0x40) == 0 && !*(_DWORD *)(v6 + 96) && !*(_DWORD *)(v6 + 88) && (v7 & 0x10) == 0 )
      {
        v14[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v14;
        v14[1] = v4;
        HMLockObject(v4);
        if ( (unsigned int)xxxAddFullScreen(v4) )
          v3 = 1;
        ThreadUnlock1(v10, v9, v11);
      }
    }
  }
  return v3;
}
