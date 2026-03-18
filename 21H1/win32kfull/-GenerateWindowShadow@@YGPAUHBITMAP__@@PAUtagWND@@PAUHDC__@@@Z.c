/*
 * XREFs of ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18
 * Callers:
 *     ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB (-zzzApplyShadow@@YGHPAUtagWND@@0@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z @ 0x19C88E (-CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z.c)
 *     ?DrawRegionalShadow@@YGXPAXJJ@Z @ 0x19CBA0 (-DrawRegionalShadow@@YGXPAXJJ@Z.c)
 *     ?DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z @ 0x19CC15 (-DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z.c)
 *     ?DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z @ 0x19CCF2 (-DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z.c)
 */

int __fastcall GenerateWindowShadow(int a1, HDC a2)
{
  int *v2; // esi
  char v3; // al
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v7; // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v9; // eax
  PKTHREAD v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // esi
  HDC StockObject; // eax
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // eax
  volatile signed __int32 *v21; // eax
  HDC v22; // ebx
  int ScaledWindowShadowFromDIB; // eax
  const RECT *v25; // [esp+0h] [ebp-70h]
  int v26; // [esp+0h] [ebp-70h]
  HDC v27; // [esp+0h] [ebp-70h]
  HBRUSH v28; // [esp+4h] [ebp-6Ch]
  int *v29; // [esp+4h] [ebp-6Ch]
  int v30; // [esp+4h] [ebp-6Ch]
  int v31; // [esp+Ch] [ebp-64h]
  struct tagWND *v32; // [esp+10h] [ebp-60h]
  int v33; // [esp+14h] [ebp-5Ch] BYREF
  int v34; // [esp+18h] [ebp-58h] BYREF
  int v35; // [esp+1Ch] [ebp-54h]
  int v36; // [esp+20h] [ebp-50h]
  int v37; // [esp+24h] [ebp-4Ch]
  int v38; // [esp+28h] [ebp-48h]
  int v39; // [esp+2Ch] [ebp-44h]
  struct tagWND *v40; // [esp+30h] [ebp-40h]
  int v41; // [esp+34h] [ebp-3Ch] BYREF
  int v42; // [esp+38h] [ebp-38h]
  HDC v43; // [esp+3Ch] [ebp-34h]
  _DWORD v44[3]; // [esp+40h] [ebp-30h] BYREF
  __int16 v45; // [esp+4Ch] [ebp-24h]
  __int16 v46; // [esp+4Eh] [ebp-22h]
  int v47; // [esp+50h] [ebp-20h]
  int v48; // [esp+54h] [ebp-1Ch]
  int v49; // [esp+58h] [ebp-18h]
  int v50; // [esp+5Ch] [ebp-14h]
  int v51; // [esp+60h] [ebp-10h]
  int v52; // [esp+64h] [ebp-Ch]
  int v53; // [esp+68h] [ebp-8h]

  v43 = a2;
  v39 = a1;
  v2 = *(int **)(a1 + 20);
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v41 = 0;
  v3 = *((_BYTE *)v2 + 18);
  v2 += 13;
  v33 = 0;
  v42 = 0;
  v34 = *v2++;
  v32 = (struct tagWND *)(v3 & 0x40);
  v40 = (struct tagWND *)1;
  v35 = *v2++;
  v36 = *v2;
  v37 = v2[1];
  v4 = v36 - v34;
  v5 = v37 - v35;
  v34 = 0;
  v36 = v4;
  v37 -= v35;
  v35 = 0;
  if ( ERECTL::bWrapped((ERECTL *)&v34) )
    return 0;
  v6 = v4 + 5;
  v7 = v5 + 5;
  v36 = v6;
  v37 = v7;
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    v9 = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(v9) + 248) )
    {
      v10 = KeGetCurrentThread();
      if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v10) + 248) + 4) + 32) & 1) != 0 )
      {
        v11 = *(_DWORD *)(v39 + 20);
        v12 = *(_DWORD *)(v11 + 184);
        if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 && *(_WORD *)(v11 + 180) != 96 )
        {
          v13 = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v11 + 180)) / 0x60u;
          v6 *= v13;
          v7 *= v13;
          v40 = (struct tagWND *)v13;
          v36 = v6;
          v37 = v7;
        }
      }
    }
  }
  v48 = 0;
  v49 = 0;
  v45 = 1;
  v46 = 32;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v44[0] = 40;
  v44[1] = v6;
  v44[2] = v7;
  v47 = 0;
  v14 = GreCreateDIBitmapReal(v43, 0, (int)v44, 0, 0x2Cu, 0, 0, 0, 0, 0, 0, &v41);
  v15 = v14;
  if ( !v14 )
    return 0;
  v31 = GreSelectBitmap(v43, v14);
  StockObject = (HDC)GreGetStockObject(4);
  FillRect(StockObject, v25, v28);
  if ( v6 >= 15 && v7 >= 15 )
  {
    v17 = v42;
  }
  else
  {
    v17 = 1;
    v42 = 1;
  }
  v38 = 0;
  if ( DrawWindowShadow((int)v43, v39, v32, (HDC)v17, &v33, v26, v29) )
  {
    if ( !v33 || v42 )
      DrawRegionalShadow(v6, v41, v7, (int)v27, v30);
    else
      DrawRoundedRectangularShadow(v6, v41, (void *)v7, v32, (int)v40, (int)v27, v30);
    v19 = 1;
  }
  else
  {
    v19 = v38;
  }
  LOBYTE(v18) = 5;
  v20 = HmgLock(v15, v18);
  if ( v20 )
  {
    v21 = (volatile signed __int32 *)(v20 + 8);
    _InterlockedDecrement(v21);
    _InterlockedDecrement(v21);
  }
  if ( !v19 )
    goto LABEL_29;
  if ( (int)v40 > 1 )
  {
    v22 = v43;
    ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v43, v39, v40, v27, v30);
    v38 = ScaledWindowShadowFromDIB;
    if ( ScaledWindowShadowFromDIB )
    {
      GreSelectBitmap(v22, ScaledWindowShadowFromDIB);
      GreDeleteObject(v15);
      v15 = v38;
    }
    else
    {
      v19 = 0;
    }
  }
  if ( !v19 )
  {
LABEL_29:
    GreSelectBitmap(v43, v31);
    GreDeleteObject(v15);
    return 0;
  }
  return v15;
}
