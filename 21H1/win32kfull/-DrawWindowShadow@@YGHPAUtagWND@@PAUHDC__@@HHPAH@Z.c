/*
 * XREFs of ?DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z @ 0x19CCF2
 * Callers:
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2 (_GreScaleRgnToDestLogPixel@8.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 */

int __userpurge DrawWindowShadow@<eax>(int a1@<edx>, int a2@<ecx>, struct tagWND *a3, HDC a4, int *a5, int a6, int *a7)
{
  int *v7; // esi
  int RectRgn; // ebx
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // esi
  int SolidBrush; // eax
  int v21; // [esp-4h] [ebp-48h]
  int StockObject; // [esp-4h] [ebp-48h]
  int v23; // [esp+14h] [ebp-30h]
  int v26; // [esp+28h] [ebp-1Ch]
  int v27; // [esp+2Ch] [ebp-18h] BYREF
  int v28; // [esp+30h] [ebp-14h]
  int v29; // [esp+34h] [ebp-10h]
  int v30; // [esp+38h] [ebp-Ch]

  v7 = (int *)(*(_DWORD *)(a2 + 20) + 52);
  v27 = *v7++;
  v28 = *v7++;
  v29 = *v7;
  v30 = v7[1];
  v26 = 0;
  RectRgn = GreCreateRectRgn(0, 0, 0, 0);
  v9 = GreCreateRectRgn(0, 0, 0, 0);
  if ( RectRgn && v9 )
  {
    v10 = *(_DWORD *)(a2 + 20);
    if ( !*(_DWORD *)(v10 + 108) || (*(_BYTE *)(v10 + 13) & 8) != 0 )
    {
      v12 = -v27;
      v27 = 0;
      v29 += v12;
      v30 -= v28;
      v28 = 0;
      GreSetRectRgn(RectRgn, 0, 0, v29, v30);
      v11 = 1;
      v26 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v27);
      v26 = 1;
      GreCombineRgn(RectRgn, RectRgn, *(_DWORD *)(*(_DWORD *)(a2 + 20) + 108), 1);
      GreOffsetRgn(RectRgn, -v27, -v28);
      v11 = 0;
    }
    *a5 = v11;
    CurrentThread = KeGetCurrentThread();
    if ( !W32GetThreadWin32Thread(CurrentThread)
      || (v14 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v14) + 248))
      || (v15 = KeGetCurrentThread(),
          (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v15) + 248) + 4) + 32) & 1) == 0)
      || (v16 = *(_DWORD *)(a2 + 20), (*(_DWORD *)(v16 + 184) & 0x4000000F) != 0x40000000)
      || (v17 = *(unsigned __int16 *)(v16 + 180), v17 == 96)
      || (v26 = GreScaleRgnToDestLogPixel(v17, RectRgn)) != 0 )
    {
      v18 = 5;
      GreCombineRgn(v9, RectRgn, 0, 5);
      if ( a3 )
      {
        GreOffsetRgn(RectRgn, 5, 0);
        GreOffsetRgn(v9, 0, 5);
      }
      else
      {
        GreOffsetRgn(v9, 5, 5);
      }
      if ( !*a5 || a4 )
      {
        while ( 1 )
        {
          SolidBrush = GreCreateSolidBrush((unsigned __int8)byte_25893B[v18] | (((unsigned __int8)byte_25893B[v18] | ((unsigned __int8)byte_25893B[v18] << 8)) << 8));
          v23 = SolidBrush;
          if ( !SolidBrush )
            break;
          NtGdiFrameRgn(a1, v9, SolidBrush, v18, v18);
          GreDeleteObject(v23);
          if ( --v18 <= 0 )
          {
            StockObject = GreGetStockObject(4);
            NtGdiFillRgn(a1, RectRgn, StockObject);
            goto LABEL_24;
          }
        }
        v26 = 0;
      }
      else
      {
        GreCombineRgn(v9, v9, RectRgn, 4);
        v21 = GreGetStockObject(0);
        NtGdiFillRgn(a1, v9, v21);
      }
    }
  }
LABEL_24:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v9);
  return v26;
}
