/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01E74B0
 * Callers:
 *     <none>
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C00457D4 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C0045FAC (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C0046050 (PhkNextValid.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v7 = 1426LL;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1); ; i = PhkNextValid(v6) )
    {
      v6 = i;
      if ( !i )
      {
        v7 = 1431LL;
        goto LABEL_14;
      }
      v5 = *(_DWORD *)(i + 68) == -1
         ? *(_QWORD *)(i + 56)
         : *(_QWORD *)(i + 56)
         + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     + 8LL * *(int *)(i + 68)
                     + 408);
      if ( v5 == a2 )
        break;
    }
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v6);
    v7 = 5LL;
  }
LABEL_14:
  UserSetLastError(v7, a2, a3);
  return 0LL;
}
