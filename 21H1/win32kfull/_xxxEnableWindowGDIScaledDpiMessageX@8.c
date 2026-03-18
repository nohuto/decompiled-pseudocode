/*
 * XREFs of _xxxEnableWindowGDIScaledDpiMessageX@8 @ 0x15237B
 * Callers:
 *     _NtUserEnableWindowGDIScaledDpiMessage@8 @ 0x16150D (_NtUserEnableWindowGDIScaledDpiMessage@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall xxxEnableWindowGDIScaledDpiMessageX(int a1, int a2)
{
  int v3; // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v5; // eax
  PKTHREAD v6; // eax
  int v7; // ecx

  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    v5 = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(v5) + 248) )
    {
      v6 = KeGetCurrentThread();
      if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v6) + 248) + 4) + 32) & 1) != 0 )
      {
        v7 = *(_DWORD *)(a1 + 20);
        if ( (*(_DWORD *)(v7 + 184) & 0x4000000F) == 0x40000000 )
        {
          *(_DWORD *)(v7 + 144) ^= (*(_DWORD *)(v7 + 144) ^ (a2 << 29)) & 0x20000000;
          return 1;
        }
      }
    }
  }
  return v3;
}
