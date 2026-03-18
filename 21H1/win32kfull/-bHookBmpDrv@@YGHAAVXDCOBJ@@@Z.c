/*
 * XREFs of ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1
 * Callers:
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A5A0 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0x83990 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8 (-prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

int __usercall bHookBmpDrv@<eax>(int *a1@<ecx>, volatile unsigned int *a2@<edi>)
{
  int v3; // esi
  _DWORD *v4; // esi
  int v5; // edi
  struct PDEV *v6; // eax
  unsigned int v9; // [esp+0h] [ebp-14h]
  struct PDEV *v10; // [esp+Ch] [ebp-8h]
  struct PDEV *v11; // [esp+10h] [ebp-4h] BYREF

  if ( gbNoHookBmpDev )
    return 0;
  v3 = *a1;
  if ( !*a1 || (*(_DWORD *)(v3 + 24) & 0x4000) != 0 )
    return 0;
  v4 = *(_DWORD **)(v3 + 36);
  v11 = (struct PDEV *)_ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  v5 = 0;
  if ( ((v4[6] & 0x20000000) != 0 || (v4[354] & 0x8000) != 0) && (v4[354] & 0x1000) != 0 )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    v6 = gpBmpDev;
    v10 = gpBmpDev;
    if ( gpBmpDev || (v6 = PDEV::Allocate(0), v10 = v6, (gpBmpDev = v6) != 0) )
    {
      if ( *(struct PDEV **)(*a1 + 36) != v6 )
      {
        v11 = v6;
        qmemcpy(v6, v4, 0x90Cu);
        PDEVOBJ::prfntActive((PDEVOBJ *)&v11, 0);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v11, 0);
        PDEVOBJ::cInactive((PDEVOBJ *)&v11, 0);
        v5 = 1;
        SETFLAG((volatile signed __int32 *)v10 + 6, 1, 0x800000, a2, v9);
        *((_DWORD *)v10 + 579) = v4;
        *((_DWORD *)v10 + 16) = v10;
        *((_DWORD *)gpBmpDev + 498) = BmpDevTextOut;
        *((_DWORD *)gpBmpDev + 489) = BmpDevStrokePath;
        *((_DWORD *)gpBmpDev + 494) = BmpDevCopyBits;
        *((_DWORD *)gpBmpDev + 493) = BmpDevBitBlt;
        *((_DWORD *)gpBmpDev + 506) = BmpDevLineTo;
        *((_DWORD *)gpBmpDev + 490) = BmpDevFillPath;
        *((_DWORD *)gpBmpDev + 491) = BmpDevStrokeAndFillPath;
        *((_DWORD *)gpBmpDev + 495) = BmpDevStretchBlt;
        *((_DWORD *)gpBmpDev + 546) = BmpDevAlphaBlend;
        *((_DWORD *)gpBmpDev + 549) = BmpDevTransparentBlt;
        *((_DWORD *)gpBmpDev + 543) = BmpDevGradientFill;
        *((_DWORD *)gpBmpDev + 565) = BmpDevDrawStream;
        *((_DWORD *)gpBmpDev + 566) = BmpDevNineGrid;
        *((_DWORD *)gpBmpDev + 545) = BmpDevPlgBlt;
        bBmpMakeOpaque(*(_DWORD *)(*a1 + 504));
        *(_DWORD *)(*a1 + 36) = gpBmpDev;
      }
    }
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(*a1 + 504) + 72) &= ~0x10u;
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
  }
  return v5;
}
