/*
 * XREFs of _xxxGetControlBrush@12 @ 0xBFA3E
 * Callers:
 *     _NtUserGetControlBrush@12 @ 0xBF9BC (_NtUserGetControlBrush@12.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxGetControlColor@16 @ 0xBFABC (_xxxGetControlColor@16.c)
 */

int __fastcall xxxGetControlBrush(_DWORD *a1, int a2, int a3)
{
  char v4; // al
  _DWORD *v5; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int ControlColor; // esi
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  v10[2] = 0;
  v4 = *(_BYTE *)(a1[5] + 23) & 0xC0;
  if ( v4 == (char)0x80 || v4 == -64 )
    v5 = (_DWORD *)a1[16];
  else
    v5 = (_DWORD *)a1[14];
  if ( !v5 )
    v5 = a1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v10;
  v10[1] = v5;
  if ( v5 )
    HMLockObject(v5);
  ControlColor = xxxGetControlColor(a2, a3);
  ThreadUnlock1();
  return ControlColor;
}
