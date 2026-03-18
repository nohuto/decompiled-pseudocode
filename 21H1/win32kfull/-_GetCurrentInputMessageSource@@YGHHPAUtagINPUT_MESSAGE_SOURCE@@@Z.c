/*
 * XREFs of ?_GetCurrentInputMessageSource@@YGHHPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xA1F08
 * Callers:
 *     _NtUserGetCurrentInputMessageSource@4 @ 0xA1E72 (_NtUserGetCurrentInputMessageSource@4.c)
 *     _NtUserGetCIMSSM@4 @ 0x161CDC (_NtUserGetCIMSSM@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall _GetCurrentInputMessageSource(int a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // edi
  PKTHREAD v5; // eax
  PKTHREAD v6; // eax
  BOOL v8; // esi
  BOOL v10; // [esp+20h] [ebp-1Ch]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v5 = KeGetCurrentThread();
  v10 = (**(_DWORD **)(W32GetThreadWin32Thread(v5) + 260) & 0x40000000) != 0;
  v6 = KeGetCurrentThread();
  v8 = **(int **)(W32GetThreadWin32Thread(v6) + 260) < 0;
  if ( a1 )
  {
    if ( v8 || (**(_BYTE **)(ThreadWin32Thread + 244) & 8) != 0 )
      goto LABEL_4;
LABEL_6:
    *a2 = *(_DWORD *)(ThreadWin32Thread + 696);
    a2[1] = *(_DWORD *)(ThreadWin32Thread + 700);
    return 1;
  }
  if ( !v10 && (**(_BYTE **)(ThreadWin32Thread + 244) & 6) == 0 )
    goto LABEL_6;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1;
}
