/*
 * XREFs of _RIMDevChangeDoUsermodeCallback@4 @ 0x14024B
 * Callers:
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxClientRimDevCallback@40 @ 0x194C4E (_xxxClientRimDevCallback@40.c)
 */

void __thiscall RIMDevChangeDoUsermodeCallback(int *this)
{
  int v2; // esi
  int v3; // edi
  PKTHREAD CurrentThread; // eax
  bool v5; // zf
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v2 = this[4];
  v3 = *(_DWORD *)(v2 + 260);
  if ( *(_BYTE *)(v2 + 80) != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      if ( _gptiCurrent && *(_DWORD *)(v3 + 20) == PsGetCurrentProcess() && *(_DWORD *)(v3 + 404) )
      {
        v5 = *(_BYTE *)(v3 + 44) == 0;
        *(_BYTE *)(v3 + 46) = 1;
        if ( !v5 && !*(_BYTE *)(v3 + 45) || (*(_BYTE *)(v3 + 556) & 2) != 0 )
          RIMUnlockExclusive(v3 + 360);
        RIMUnlockExclusive(v3 + 60);
        RawInputManagerDeviceObjectReference(v2);
        v6 = 0;
        v11 = 0;
        *(_DWORD *)(_gptiCurrent + 768) = v2;
        if ( *(_BYTE *)(v2 + 80) == 2 )
        {
          v7 = *(_DWORD *)(v2 + 332);
          if ( v7 )
          {
            v6 = *(unsigned __int16 *)(v7 + 20);
            v11 = *(unsigned __int16 *)(v7 + 22);
          }
        }
        v8 = *(_DWORD *)(v2 + 64);
        if ( (*(_DWORD *)(v2 + 160) & 0x2000) != 0 )
        {
          v9 = *this;
          if ( *this == 1 )
          {
            v9 = 2;
            *this = 2;
          }
          if ( v9 == 4 )
            *this = 3;
          if ( (*(_DWORD *)(v2 + 160) & 0x60000) != 0 )
            v8 = *(_DWORD *)(v2 + 264);
        }
        xxxClientRimDevCallback(
          *(_DWORD *)(this[4] + 40),
          this[2],
          *(_DWORD *)(v3 + 40),
          v8,
          v6,
          v11,
          *(_DWORD *)(v3 + 248),
          *(_DWORD *)(v3 + 404));
        *(_DWORD *)(_gptiCurrent + 768) = 0;
        RIMLockExclusive(v3 + 60);
        if ( *(_BYTE *)(v3 + 44) && !*(_BYTE *)(v3 + 45) || (*(_BYTE *)(v3 + 556) & 2) != 0 )
          RIMLockExclusive(v3 + 360);
        *(_BYTE *)(v3 + 46) = 0;
        if ( *(char *)(v2 + 176) < 0 || (*(_DWORD *)(v2 + 160) & 0x2000) != 0 )
        {
          v10 = *this;
          if ( *this == 2 )
          {
            *(_DWORD *)(v2 + 160) |= 0x400000u;
            v10 = *this;
          }
          if ( v10 == 3 )
            *(_DWORD *)(v2 + 160) |= 0x800000u;
        }
        RawInputManagerDeviceObjectDereference(v2);
      }
    }
  }
}
