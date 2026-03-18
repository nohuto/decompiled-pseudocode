/*
 * XREFs of xxxInternalInvalidate @ 0x1C00717E0
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C000A99C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C012B42C (xxxInvalidateWallpaperWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6FE8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D7A98 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E7C58 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C021ABC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     UserRedrawDesktop @ 0x1C023F348 (UserRedrawDesktop.c)
 *     xxxCompositedPaint @ 0x1C023F3F0 (xxxCompositedPaint.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 * Callees:
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C007237C (IntersectWithParents.c)
 *     CalcWindowRgn @ 0x1C00B18DC (CalcWindowRgn.c)
 *     xxxDoSyncPaint @ 0x1C00EFEE4 (xxxDoSyncPaint.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C021B284 (SpbCheckRect.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  struct tagWND *v6; // rsi
  HRGN v7; // r14
  __int64 v8; // rcx
  struct tagRECT v9; // xmm0
  HRGN v10; // r15
  HRGN RectRgnIndirect; // rax
  __int64 StyleWindow; // [rsp+38h] [rbp-38h]
  struct tagWND *v14; // [rsp+40h] [rbp-30h]
  struct tagRECT v15; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v16; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v4 = a3;
  StyleWindow = 0LL;
  v14 = 0LL;
  v6 = a1;
  v7 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    StyleWindow = GetStyleWindow((__int64)a1, 2818);
    if ( StyleWindow )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect(*((_QWORD *)v6 + 5) + 88LL);
        v7 = RectRgnIndirect;
        if ( RectRgnIndirect )
          a2 = RectRgnIndirect;
      }
      v14 = v6;
      v4 |= 0x80u;
      v6 = (struct tagWND *)StyleWindow;
    }
  }
  v8 = *((_QWORD *)v6 + 5);
  if ( (((v4 & 1) != 0) & (*(_BYTE *)(v8 + 26) >> 3)) != 0 )
  {
    *(_DWORD *)(v8 + 232) |= 2u;
    v8 = *((_QWORD *)v6 + 5);
  }
  if ( (v4 & 0x400) != 0 )
    v9 = *(struct tagRECT *)(v8 + 88);
  else
    v9 = *(struct tagRECT *)(v8 + 104);
  v15 = v9;
  if ( (v4 & 9) != 0 )
  {
    v10 = a2;
    if ( a2 == (HRGN)1 )
    {
      v10 = (HRGN)ghrgnInv1;
      CalcWindowRgn(v6, ghrgnInv1, (v4 & 0x400) == 0);
    }
  }
  else
  {
    v10 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (v4 & 9) == 0 || (v4 & 1) == 0 || (unsigned int)IntersectWithParents(v6, &v15) )
  {
    if ( (v4 & 0x1001) == 0x1001 )
    {
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
      {
        v16 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v10, &v16) )
        {
          IntersectRect(&v16, &v16.left, &v15.left);
          SpbCheckRect(v6, &v16, 0);
        }
      }
    }
    InternalInvalidate2(v6, a2, v10, &v15, v4);
    if ( StyleWindow )
    {
      v6 = v14;
      if ( v7 )
        GreDeleteObject(v7);
    }
    if ( (v4 & 0x100) != 0 )
    {
      xxxInternalUpdateWindow(v6, (v4 & 0x40) == 0);
    }
    else if ( (v4 & 0x200) != 0 )
    {
      if ( (v4 & 0x40) == 0 )
        v3 = (v4 & 0x80u) != 0 ? 32 : 4;
      xxxDoSyncPaint(v6, v3);
    }
  }
}
