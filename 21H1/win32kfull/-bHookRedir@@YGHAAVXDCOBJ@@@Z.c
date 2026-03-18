/*
 * XREFs of ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14
 * Callers:
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A5A0 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0x83990 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8 (-prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

int __usercall bHookRedir@<eax>(int *a1@<ecx>, unsigned int a2@<ebx>, volatile unsigned int *a3@<edi>)
{
  int v4; // edx
  _DWORD *v5; // edx
  struct PDEV *v7; // eax
  int v8; // ebx
  struct SURFACE *v9; // [esp-8h] [ebp-1Ch]
  _DWORD *v12; // [esp+8h] [ebp-Ch]
  struct PDEV *v13; // [esp+Ch] [ebp-8h]
  struct PDEV *v14; // [esp+10h] [ebp-4h] BYREF

  if ( gbNoHookRedir )
    return 0;
  v4 = *a1;
  if ( !*a1 )
    return 0;
  if ( (*(_DWORD *)(v4 + 24) & 0x4000) == 0 )
    return 0;
  v5 = *(_DWORD **)(v4 + 36);
  v12 = v5;
  if ( !v5 || (v5[6] & 0x20000000) == 0 )
    return 0;
  v7 = gpRedirDev;
  v8 = 0;
  v13 = gpRedirDev;
  if ( gpRedirDev )
    goto LABEL_10;
  v7 = PDEV::Allocate(0);
  v13 = v7;
  gpRedirDev = v7;
  if ( v7 )
  {
    v5 = v12;
LABEL_10:
    if ( *(struct PDEV **)(*a1 + 36) != v7 )
    {
      v14 = v7;
      qmemcpy(v7, v5, 0x90Cu);
      PDEVOBJ::prfntActive((PDEVOBJ *)&v14, 0);
      PDEVOBJ::prfntInactive((PDEVOBJ *)&v14, 0);
      PDEVOBJ::cInactive((PDEVOBJ *)&v14, 0);
      v8 = 1;
      SETFLAG(0x800000, a3, a2);
      *((_DWORD *)v13 + 579) = v12;
      *((_DWORD *)v13 + 16) = v13;
      *((_DWORD *)gpRedirDev + 498) = RedirTextOut;
      *((_DWORD *)gpRedirDev + 489) = RedirStrokePath;
      *((_DWORD *)gpRedirDev + 494) = RedirCopyBits;
      *((_DWORD *)gpRedirDev + 493) = RedirBitBlt;
      *((_DWORD *)gpRedirDev + 506) = RedirLineTo;
      *((_DWORD *)gpRedirDev + 490) = RedirFillPath;
      *((_DWORD *)gpRedirDev + 491) = RedirStrokeAndFillPath;
      *((_DWORD *)gpRedirDev + 495) = RedirStretchBlt;
      *((_DWORD *)gpRedirDev + 546) = RedirAlphaBlend;
      *((_DWORD *)gpRedirDev + 549) = RedirTransparentBlt;
      *((_DWORD *)gpRedirDev + 543) = RedirGradientFill;
      *((_DWORD *)gpRedirDev + 565) = RedirDrawStream;
      *((_DWORD *)gpRedirDev + 566) = RedirNineGrid;
      *((_DWORD *)gpRedirDev + 545) = RedirPlgBlt;
      *((_DWORD *)gpRedirDev + 544) = RedirStretchBltROP;
      *((_DWORD *)gpRedirDev + 500) = RedirDrawEscape;
      bMakeOpaque(v9);
      *(_DWORD *)(*a1 + 36) = gpRedirDev;
    }
  }
  return v8;
}
