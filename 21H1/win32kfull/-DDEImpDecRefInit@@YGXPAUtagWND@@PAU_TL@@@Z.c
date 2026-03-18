/*
 * XREFs of ?DDEImpDecRefInit@@YGXPAUtagWND@@PAU_TL@@@Z @ 0x15EDC5
 * Callers:
 *     _NtUserfnDDEINIT@28 @ 0x16B532 (_NtUserfnDDEINIT@28.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z @ 0x15EDF2 (-DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z.c)
 */

void __fastcall DDEImpDecRefInit(HWND *a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax
  HWND v5; // eax

  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 8) = *a2;
  if ( a1 )
    v5 = *a1;
  else
    v5 = 0;
  DDEImpDecRefInitWorker(v5);
}
