/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA
 * Callers:
 *     _NtGdiDdCreateFullscreenSprite@16 @ 0x1D4595 (_NtGdiDdCreateFullscreenSprite@16.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     _GreCreateSprite@44 @ 0x1F6C0 (_GreCreateSprite@44.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     _GreUpdateSprite@60 @ 0x2B28E (_GreUpdateSprite@60.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z @ 0xD0592 (-vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z.c)
 *     ??0DEVLOCKOBJ@@QAE@AAVPDEVOBJ@@@Z @ 0xF5B9C (--0DEVLOCKOBJ@@QAE@AAVPDEVOBJ@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1FAFE2 (-RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@.c)
 */

int __userpurge SpDdCreateFullscreenSprite@<eax>(HDC a1@<edx>, HDC a2@<ecx>, HDC a3, ULONG a4, void **a5, HDC *a6)
{
  int DisplayDC; // edi
  HDEV v8; // ebx
  struct PDEVOBJ *v9; // ecx
  int v10; // esi
  HDEV Sprite; // eax
  HDEV v12; // esi
  HDEV v13; // ebx
  HDEV v14; // ebx
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  struct _SURFOBJ *v17; // eax
  void (__stdcall *v18)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  HDC v19; // edi
  HDEV v20; // edi
  HDEV v21; // ecx
  HDC v22; // [esp-1Ch] [ebp-F4h]
  struct tagSIZE *v23; // [esp+0h] [ebp-D8h]
  struct SFMLOGICALSURFACE **v24; // [esp+4h] [ebp-D4h]
  _BYTE v25[48]; // [esp+10h] [ebp-C8h] BYREF
  BRUSHOBJ pbo; // [esp+40h] [ebp-98h] BYREF
  POINTL pptlSrc; // [esp+4Ch] [ebp-8Ch] BYREF
  _DWORD v28[3]; // [esp+54h] [ebp-84h] BYREF
  _DWORD v29[2]; // [esp+60h] [ebp-78h] BYREF
  HDC v30; // [esp+68h] [ebp-70h]
  HDEV v31; // [esp+6Ch] [ebp-6Ch] BYREF
  LONG v32; // [esp+70h] [ebp-68h] BYREF
  LONG v33; // [esp+74h] [ebp-64h]
  int v34; // [esp+78h] [ebp-60h] BYREF
  char v35[4]; // [esp+7Ch] [ebp-5Ch] BYREF
  ULONG v36; // [esp+80h] [ebp-58h]
  HDC v37; // [esp+84h] [ebp-54h]
  int v38; // [esp+88h] [ebp-50h]
  char v39; // [esp+8Fh] [ebp-49h] BYREF
  HDEV v40; // [esp+90h] [ebp-48h] BYREF
  HDEV HDEV; // [esp+94h] [ebp-44h] BYREF
  HDEV v42; // [esp+98h] [ebp-40h]
  RECTL prclTrg; // [esp+9Ch] [ebp-3Ch] BYREF
  struct _BLENDFUNCTION v44; // [esp+ACh] [ebp-2Ch] BYREF
  int v45; // [esp+B0h] [ebp-28h]
  int v46; // [esp+B4h] [ebp-24h]
  int v47; // [esp+B8h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+C0h] [ebp-18h]

  v30 = a1;
  v37 = a3;
  v36 = a4;
  v38 = -1073741811;
  v28[1] = 0;
  v28[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v28, a2);
  v42 = 0;
  DisplayDC = 0;
  if ( !v28[0] )
    return -1073741811;
  v8 = *(HDEV *)(v28[0] + 36);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
  v34 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v35, v9, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&HDEV);
  if ( !HDEV || ((_DWORD)HDEV[6] & 0x400) != 0 )
    goto LABEL_14;
  v38 = -1073741801;
  if ( !g_pDwmState )
  {
    v10 = -1073741637;
LABEL_16:
    if ( v42 )
    {
      GreDeleteSprite(v42, (HWND)1);
      v42 = 0;
    }
    if ( DisplayDC )
    {
      GreDeleteDC(DisplayDC);
      DisplayDC = 0;
    }
    v14 = v42;
    goto LABEL_21;
  }
  v40 = v8;
  if ( !v8 )
    goto LABEL_14;
  if ( ((unsigned int)&loc_20400 & (_DWORD)v8[6]) != 0 )
    goto LABEL_14;
  if ( !PDEVOBJ::bLddmDriver((PDEVOBJ *)&v40) )
    goto LABEL_14;
  v44 = (struct _BLENDFUNCTION)*((_DWORD *)v8 + 459);
  v45 = *((_DWORD *)v8 + 460);
  v46 = *(_DWORD *)&v44 + *(_DWORD *)(*((_DWORD *)v8 + 461) + 172);
  v47 = v45 + *(_DWORD *)(*((_DWORD *)v8 + 461) + 176);
  Sprite = (HDEV)GreCreateSprite((HDEV)&v44, 0, (struct tagRECT *)0x9900, (struct tagMINIWINDOWINFO *)1, 0, 0, 0, 0, 0);
  v42 = Sprite;
  if ( !Sprite )
    goto LABEL_14;
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v40, 0, Sprite);
  v12 = v40;
  if ( !v40 )
    goto LABEL_14;
  v40 = (HDEV)*((_DWORD *)v40 + 34);
  v31 = v40;
  vSpDwmUpdateSpriteVisibility((int *)v12, 0);
  v32 = *(_DWORD *)(*((_DWORD *)v8 + 461) + 172);
  v33 = *(_DWORD *)(*((_DWORD *)v8 + 461) + 176);
  v13 = v40;
  if ( !bSpDwmCreateLogicalSurface((int)v12, HDEV, v40, (struct DWMSPRITE *)&v32, &v31, v23, v24) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v12 + 2);
LABEL_14:
    v14 = v42;
    goto LABEL_15;
  }
  v17 = (struct _SURFOBJ *)*((_DWORD *)v13 + 28);
  v29[0] = 0;
  SURFREFVIEW::bMap((SURFREFVIEW *)v29, v17);
  prclTrg.left = 0;
  prclTrg.top = 0;
  prclTrg.right = v32;
  prclTrg.bottom = v33;
  pptlSrc.x = 0;
  pptlSrc.y = 0;
  pbo.pvRbrush = 0;
  if ( bNeedRenderHint(&HDEV) )
  {
    v18 = (void (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
  }
  else if ( (*(_DWORD *)(*((_DWORD *)v13 + 28) + 56) & 1) != 0 )
  {
    v18 = (void (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_DWORD *)HDEV + 493);
  }
  else
  {
    v18 = (void (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))EngBitBlt;
  }
  v19 = v30;
  pbo.iSolidColor = (unsigned int)v30 & 0xFFFFFF;
  pbo.flColorType = 0;
  v18(*((SURFOBJ **)v13 + 28), 0, 0, 0, 0, &prclTrg, &pptlSrc, 0, &pbo, 0, 0xF0F0u);
  v22 = v19;
  v14 = v42;
  v20 = HDEV;
  GreUpdateSprite((int)HDEV, 0, v42, 0, 0, 0, 0, 0, v22, 0, 0x20400001u, &v44, 0, (struct tagRECT *)1, 0);
  DisplayDC = GreCreateDisplayDC(v20, 1, 0);
  if ( DisplayDC )
  {
    v21 = v40;
    *(_DWORD *)(*((_DWORD *)v40 + 28) + 56) |= 0x4000000u;
    GreSelectBitmap(DisplayDC, *(_DWORD *)(*((_DWORD *)v21 + 28) + 4));
    v38 = 0;
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v29);
  _InterlockedDecrement((volatile signed __int32 *)v12 + 2);
LABEL_15:
  v10 = v38;
  if ( v38 < 0 )
    goto LABEL_16;
LABEL_21:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)v28);
  ms_exc.registration.TryLevel = 0;
  v15 = (_DWORD *)_MmUserProbeAddress;
  if ( (unsigned int)v37 < _MmUserProbeAddress )
    v15 = v37;
  *v15 = v14;
  v16 = (_DWORD *)_MmUserProbeAddress;
  if ( v36 < _MmUserProbeAddress )
    v16 = (_DWORD *)v36;
  *v16 = DisplayDC;
  ms_exc.registration.TryLevel = -2;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v35);
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v10;
}
