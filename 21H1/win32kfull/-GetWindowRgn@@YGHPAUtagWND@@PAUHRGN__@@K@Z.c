/*
 * XREFs of ?GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z @ 0xF479E
 * Callers:
 *     ?GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z @ 0xF4610 (-GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z.c)
 *     ?GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z @ 0xF46F8 (-GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z.c)
 * Callees:
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2 (_GreScaleRgnToDestLogPixel@8.c)
 */

int __userpurge GetWindowRgn@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, struct tagWND *a3, HRGN a4, unsigned int a5)
{
  unsigned int v6; // eax
  int RgnBox; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  int v15; // ecx
  int v16; // eax
  int v18; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE v19[16]; // [esp+14h] [ebp-18h] BYREF

  v18 = a1;
  if ( ((unsigned __int8)a3 & 2) != 0 )
  {
    memset(v19, 0, sizeof(v19));
    v6 = 2 * ((unsigned __int8)a3 & 4 | 0x4800200);
    if ( ((unsigned __int8)a3 & 8) != 0 )
      v6 |= 0x10u;
    if ( ((unsigned __int8)a3 & 0x10) == 0 )
      v6 |= 1u;
    CalcVisRgn((int)&v18, a2, (int)a2, (struct tagWND *)v6);
    RgnBox = GreGetRgnBox(v18, v19);
  }
  else
  {
    v8 = a2[5];
    v9 = *(_DWORD *)(v8 + 108);
    if ( !v9 || (*(_BYTE *)(v8 + 13) & 8) != 0 )
      return 0;
    RgnBox = GreCombineRgn(a1, v9, 0, 5);
  }
  v10 = RgnBox;
  if ( !RgnBox )
    return 0;
  v11 = a2[5];
  if ( (*(_WORD *)(v11 + 30) & 0x3FFF) != 0x29D )
    v10 = GreOffsetRgn(v18, -*(_DWORD *)(v11 + 52), -*(_DWORD *)(v11 + 56));
  if ( ((unsigned __int8)a3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      v13 = KeGetCurrentThread();
      if ( *(_DWORD *)(W32GetThreadWin32Thread(v13) + 248) )
      {
        v14 = KeGetCurrentThread();
        if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v14) + 248) + 4) + 32) & 1) != 0 )
        {
          v15 = a2[5];
          v16 = *(_DWORD *)(v15 + 184);
          if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 )
          {
            LOWORD(v15) = *(_WORD *)(v15 + 180);
            GreScaleRgnToDestLogPixel(v15, v18);
          }
        }
      }
    }
  }
  return v10;
}
