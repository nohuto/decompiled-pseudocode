/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUtagSIZE@@PAKPAPAV3@@Z @ 0x1CD629 (-bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUta.c)
 * Callees:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z @ 0x1EDDC (-vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QAE@XZ @ 0x21F36 (--1SFMLOGICALSURFACEREF@@QAE@XZ.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2 (-SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     ?vsoShapeSize@SFMLOGICALSURFACE@@QBEXPAUtagSIZE@@@Z @ 0xC67EE (-vsoShapeSize@SFMLOGICALSURFACE@@QBEXPAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QAEXPAU_EPROCESS@@@Z @ 0xC680C (-vAppContainerOwner@SURFACE@@QAEXPAU_EPROCESS@@@Z.c)
 *     _UserGetHwndProcess@4 @ 0xC6856 (_UserGetHwndProcess@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 */

int __userpurge bSpDwmCreateLogicalSurface@<eax>(
        int a1@<edx>,
        HDEV a2@<ecx>,
        HDEV a3,
        struct DWMSPRITE *a4,
        HDEV *a5,
        struct tagSIZE *a6,
        struct SFMLOGICALSURFACE **a7)
{
  int v7; // ebx
  int v8; // eax
  HDEV v10; // edi
  int v11; // eax
  int v12; // edx
  HDEV v13; // ecx
  HDEV v14; // ecx
  int v15; // esi
  struct SFMLOGICALSURFACE *v16; // ebx
  HDEV v18; // eax
  SURFACE *cx; // esi
  struct _EPROCESS *HwndProcess; // eax
  int HLSURFClone; // eax
  int v22; // edx
  HDEV v23; // ecx
  HDEV v24; // ecx
  int v25; // [esp+0h] [ebp-30h]
  int v26; // [esp+4h] [ebp-2Ch]
  struct tagSIZE v29; // [esp+14h] [ebp-1Ch] BYREF
  int v30; // [esp+1Ch] [ebp-14h]
  struct SFMLOGICALSURFACE *v31[2]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v32[8]; // [esp+28h] [ebp-8h] BYREF

  v7 = 0;
  v8 = 1;
  v30 = 1;
  v10 = a3;
  v31[0] = 0;
  v31[1] = 0;
  if ( a4 )
  {
    if ( *((_DWORD *)a3 + 28) || ((_BYTE)a3[39] & 1) != 0 )
    {
      v29.cx = 0;
      v29.cy = 0;
      SFMLOGICALSURFACE::vsoShapeSize((SFMLOGICALSURFACE *)a3, &v29);
      if ( *(_DWORD *)a4 == v29.cx && *((_DWORD *)a4 + 1) == v29.cy )
      {
LABEL_9:
        v8 = 1;
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 36);
      v18 = *a5;
      if ( *a5 != a3 )
        goto LABEL_15;
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a3, (int)a2, 0, (struct SFMLOGICALSURFACE *)1, 1, v25, v26);
      if ( !HLSURFClone )
        goto LABEL_11;
      LOBYTE(v22) = 18;
      v10 = (HDEV)HmgLock(HLSURFClone, v22);
      v31[0] = (struct SFMLOGICALSURFACE *)v10;
      if ( !v10 )
        goto LABEL_11;
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)a1, v23, 0);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)a1, v24, (struct SFMLOGICALSURFACE *)v10);
      *a5 = v10;
    }
    else
    {
      v18 = *a5;
      if ( *a5 != a3 )
LABEL_15:
        v10 = v18;
    }
    DWMSPRITE::vUpdateDpiScaling((DWMSPRITE *)a1, 0);
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
    {
      ltoef_c(*(_DWORD *)a4, &v29);
      ltoef_c(*((_DWORD *)a4 + 1), v32);
      mulff3_c(&v29, &v29, a1 + 116);
      mulff3_c(v32, v32, a1 + 124);
      eftol_c(&v29, a4, 1);
      eftol_c(v32, (char *)a4 + 4, 1);
    }
    SpCreateSurface(&v29, a2, a4);
    if ( SURFREF::bValid((SURFREF *)&v29) )
    {
      cx = (SURFACE *)v29.cx;
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v10, a2, (struct _SURFOBJ *)(v29.cx + 16));
      *((_DWORD *)v10 + 41) |= 8u;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)a4 + *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 44) = *((_DWORD *)a4 + 1) + *(_DWORD *)(a1 + 36);
      HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*(_DWORD *)(a1 + 24));
      SURFACE::vAppContainerOwner(cx, HwndProcess);
    }
    else
    {
      v30 = 0;
    }
    SURFREF::vUnlock((SURFREF *)&v29);
    v8 = v30;
    goto LABEL_10;
  }
  if ( *a5 != a3 )
  {
LABEL_10:
    v7 = v8;
    goto LABEL_11;
  }
  v11 = SFMLOGICALSURFACE::CreateHLSURFClone(a3, (int)a2, 0, (struct SFMLOGICALSURFACE *)1, 1, v25, v26);
  if ( v11 )
  {
    LOBYTE(v12) = 18;
    v31[0] = (struct SFMLOGICALSURFACE *)HmgLock(v11, v12);
    if ( v31[0] )
    {
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)a1, v13, 0);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)a1, v14, v31[0]);
      v15 = *((_DWORD *)a3 + 28) != 0 ? *((_DWORD *)a3 + 28) - 16 : 0;
      if ( v15 )
      {
        INC_SHARE_REF_CNT(v15);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)a3, a2, 0);
        v16 = v31[0];
        SFMLOGICALSURFACE::SetShape(v31[0], a2, (struct _SURFOBJ *)(v15 + 16));
        *((_DWORD *)v31[0] + 41) |= 8u;
        DEC_SHARE_REF_CNT(v15);
      }
      else
      {
        v16 = v31[0];
      }
      *a5 = (HDEV)v16;
      goto LABEL_9;
    }
  }
LABEL_11:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v31);
  return v7;
}
