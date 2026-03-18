/*
 * XREFs of _xxxInternalInvalidate@12 @ 0x3519E
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     ?xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z @ 0xD9E9E (-xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z.c)
 *     _xxxInvalidateWallpaperWindow@0 @ 0xEB0C4 (_xxxInvalidateWallpaperWindow@0.c)
 *     ?SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z @ 0x145212 (-SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z @ 0x145A20 (-xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z @ 0x1533B5 (-InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z.c)
 *     ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7 (-SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z.c)
 *     _UserRedrawDesktop@0 @ 0x19D89E (_UserRedrawDesktop@0.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 * Callees:
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _xxxDoSyncPaint@8 @ 0x7348A (_xxxDoSyncPaint@8.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _CalcWindowRgn@12 @ 0x9B782 (_CalcWindowRgn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 */

void __stdcall xxxInternalInvalidate(int a1, int a2, int a3)
{
  int RectRgnIndirect; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int *v7; // esi
  int *v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // eax
  struct tagRECT *v12; // [esp+0h] [ebp-50h]
  struct tagWND *v13; // [esp+0h] [ebp-50h]
  unsigned int v14; // [esp+4h] [ebp-4Ch]
  unsigned int v15; // [esp+4h] [ebp-4Ch]
  int v16; // [esp+Ch] [ebp-44h]
  struct tagWND *v17; // [esp+18h] [ebp-38h]
  int StyleWindow; // [esp+1Ch] [ebp-34h]
  int v19; // [esp+20h] [ebp-30h]
  int v20; // [esp+24h] [ebp-2Ch]
  int v21; // [esp+2Ch] [ebp-24h] BYREF
  int v22; // [esp+30h] [ebp-20h]
  int v23; // [esp+34h] [ebp-1Ch]
  int v24; // [esp+38h] [ebp-18h]
  struct HRGN__ v25; // [esp+3Ch] [ebp-14h] BYREF
  int v26; // [esp+40h] [ebp-10h]
  int v27; // [esp+44h] [ebp-Ch]
  int v28; // [esp+48h] [ebp-8h]

  RectRgnIndirect = a2;
  v4 = a3;
  StyleWindow = 0;
  v20 = 0;
  v19 = 0;
  v5 = a1;
  v16 = a1;
  if ( (a3 & 1) != 0 )
  {
    StyleWindow = GetStyleWindow(a1, 2818);
    RectRgnIndirect = a2;
    if ( StyleWindow )
    {
      if ( a2 == 1 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*(_DWORD *)(a1 + 20) + 52);
        v19 = RectRgnIndirect;
        if ( !RectRgnIndirect )
          RectRgnIndirect = 1;
      }
      else
      {
        v19 = 0;
      }
      v20 = a1;
      v4 = a3 | 0x80;
      v5 = StyleWindow;
      v16 = StyleWindow;
    }
  }
  v6 = *(_DWORD *)(v5 + 20);
  if ( (((v4 & 1) != 0) & (*(_BYTE *)(v6 + 18) >> 3)) != 0 )
  {
    *(_DWORD *)(v6 + 144) |= 2u;
    v6 = *(_DWORD *)(v5 + 20);
  }
  if ( (v4 & 0x400) != 0 )
    v7 = (int *)(v6 + 52);
  else
    v7 = (int *)(v6 + 68);
  v21 = *v7;
  v8 = v7 + 1;
  v22 = *v8++;
  v23 = *v8;
  v24 = v8[1];
  v25.unused = v21;
  v26 = v22;
  v27 = v23;
  v28 = v24;
  if ( (v4 & 9) != 0 )
  {
    v9 = v16;
    v17 = (struct tagWND *)RectRgnIndirect;
    if ( RectRgnIndirect == 1 )
    {
      v17 = (struct tagWND *)_ghrgnInv1;
      CalcWindowRgn((v4 & 0x400) == 0);
    }
  }
  else
  {
    v17 = (struct tagWND *)_ghrgnInv1;
    SetEmptyRgn(_ghrgnInv1);
    v9 = v16;
  }
  if ( (v4 & 9) == 0 || (v4 & 1) == 0 || IntersectWithParents(v9, &v25) )
  {
    v10 = 0;
    if ( (v4 & 0x1001) == 0x1001 )
    {
      if ( *(_DWORD *)(_gpDispInfo + 16) )
      {
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        if ( GreGetRgnBox(v17, &v21) )
        {
          IntersectRect(&v25);
          SpbCheckRect(v16, &v21, 0);
        }
      }
    }
    InternalInvalidate2(v17, &v25, (HRGN)v4, v12, v14);
    if ( StyleWindow )
    {
      v11 = v20;
      v16 = v20;
      if ( !v19 )
      {
LABEL_16:
        if ( (v4 & 0x100) != 0 )
        {
          xxxInternalUpdateWindow(v13, v15);
        }
        else if ( (v4 & 0x200) != 0 )
        {
          if ( (v4 & 0x40) == 0 )
            v10 = (v4 & 0x80) != 0 ? 32 : 4;
          xxxDoSyncPaint(v11, v10);
        }
        return;
      }
      GreDeleteObject(v19);
    }
    v11 = v16;
    goto LABEL_16;
  }
}
