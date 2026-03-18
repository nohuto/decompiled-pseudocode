/*
 * XREFs of ?bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUtagSIZE@@PAKPAPAV3@@Z @ 0x1CD629
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 * Callees:
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1FBB44 (-RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 */

int __userpurge bSpDwmUpdateDragRectShape@<eax>(
        int a1@<edx>,
        HDEV a2@<ecx>,
        HDEV a3,
        struct DWMSPRITE *a4,
        struct SFMLOGICALSURFACE *a5,
        struct tagPOINT *a6,
        struct tagSIZE *a7,
        unsigned int *a8,
        struct SFMLOGICALSURFACE **a9)
{
  int LogicalSurface; // esi
  LONG cx; // esi
  int (__stdcall *v13)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // edx
  int v14; // ecx
  LONG *v15; // esi
  LONG v16; // eax
  struct tagSIZE *v17; // ebx
  struct tagSIZE *v19; // [esp+0h] [ebp-4Ch]
  unsigned int *v20; // [esp+0h] [ebp-4Ch]
  struct SFMLOGICALSURFACE **v21; // [esp+4h] [ebp-48h]
  int v22; // [esp+4h] [ebp-48h]
  _DWORD v23[2]; // [esp+10h] [ebp-3Ch] BYREF
  struct SFMLOGICALSURFACE *v24; // [esp+18h] [ebp-34h]
  HDEV v25; // [esp+1Ch] [ebp-30h] BYREF
  struct tagSIZE *v26; // [esp+20h] [ebp-2Ch]
  RECTL prclSrc; // [esp+24h] [ebp-28h] BYREF
  RECTL prclDest; // [esp+34h] [ebp-18h] BYREF

  v24 = a5;
  v26 = a7;
  v25 = a2;
  LogicalSurface = bSpDwmCreateLogicalSurface(a1, a2, a3, a5, (HDEV *)a7, v19, v21);
  if ( LogicalSurface )
  {
    v26 = (struct tagSIZE *)v26->cx;
    cx = v26[14].cx;
    v23[0] = 0;
    SURFREFVIEW::bMap((SURFREFVIEW *)v23, (struct _SURFOBJ *)cx);
    if ( v23[0] )
    {
      *(_DWORD *)(a1 + 132) |= 4u;
      if ( bNeedRenderHint(&v25) )
      {
        v13 = RedirStretchBlt;
      }
      else if ( (*(_BYTE *)(cx + 56) & 2) != 0 )
      {
        v13 = (int (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_DWORD *)a2 + 495);
      }
      else
      {
        v13 = EngStretchBlt;
      }
      v14 = *((_DWORD *)a2 + 176);
      v15 = (LONG *)v24;
      **(_DWORD **)(v14 + 32) = -1;
      prclSrc.left = 0;
      prclSrc.right = 1;
      prclSrc.bottom = 1;
      prclDest.right = *v15;
      v16 = v15[1];
      prclSrc.top = 0;
      prclDest.left = 0;
      prclDest.top = 0;
      v17 = v26;
      prclDest.bottom = v16;
      LogicalSurface = v13((SURFOBJ *)v26[14].cx, (SURFOBJ *)v14, 0, 0, 0, 0, 0, &prclDest, &prclSrc, 0, 1u);
      if ( LogicalSurface )
        vSpUpdateDirtyRgn(v17, a1, 0, &prclDest, (HDC)a6, 0, v20, v22);
    }
    else
    {
      LogicalSurface = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v23);
  }
  return LogicalSurface;
}
