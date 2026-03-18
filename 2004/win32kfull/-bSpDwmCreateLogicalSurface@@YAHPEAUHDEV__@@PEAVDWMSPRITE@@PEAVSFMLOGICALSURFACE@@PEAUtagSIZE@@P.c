/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029DD0
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0029AD8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026F474 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C001F880 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002058C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00294AC (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0029778 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C002A844 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C002B78C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0114D58 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C011D504 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C01204DC (UserGetHwndProcess.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  unsigned int v5; // esi
  struct SFMLOGICALSURFACE *v7; // rbp
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  __int64 v15; // rcx
  SURFACE *v16; // rbx
  __int64 v17; // rcx
  struct _EPROCESS *HwndProcess; // rax
  struct SFMLOGICALSURFACE **v19; // rdi
  HLSURF v20; // rax
  HDEV v21; // rdx
  struct SFMLOGICALSURFACE *v22; // rbx
  HDEV v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  struct SFMLOGICALSURFACE **v28; // rbx
  HLSURF HLSURFClone; // rax
  HDEV v30; // rdx
  HDEV v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct SFMLOGICALSURFACE *v34; // [rsp+30h] [rbp-38h] BYREF
  int v35; // [rsp+38h] [rbp-30h]
  SURFACE *v36; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  v34 = 0LL;
  v7 = a3;
  v35 = 0;
  v10 = 1;
  if ( a4 )
  {
    v11 = *((_QWORD *)a3 + 23);
    if ( v11 || (*((_DWORD *)a3 + 61) & 1) != 0 )
    {
      v12 = 0;
      v13 = 0;
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 36);
        v13 = *(_DWORD *)(v11 + 32);
      }
      if ( a4->cx == v13 && a4->cy == v12 )
        goto LABEL_7;
      v28 = a5;
      *((_DWORD *)a2 + 16) = *((_DWORD *)a2 + 14);
      *((_DWORD *)a2 + 17) = *((_DWORD *)a2 + 15);
      if ( *v28 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v34, HLSURFClone);
        v7 = v34;
        if ( !v34 )
          goto LABEL_8;
        DWMSPRITE::SetLogicalSurface(a2, v30, 0LL);
        DWMSPRITE::SetLogicalSurface(a2, v31, v7);
        *v28 = v7;
      }
      else
      {
        v7 = *v28;
      }
    }
    else if ( *a5 != a3 )
    {
      v7 = *a5;
    }
    DWMSPRITE::vUpdateDpiScaling(a2, 0LL);
    if ( (*((_DWORD *)a2 + 41) & 0x20) != 0 )
    {
      bFToL(v15, a4, 6LL);
      bFToL(v32, &a4->cy, v33);
    }
    SpCreateSurface(&v36, a1, a4);
    v16 = v36;
    if ( v36 )
    {
      SFMLOGICALSURFACE::SetShape(v7, a1, (struct _SURFOBJ *)((char *)v36 + 24));
      *((_DWORD *)v7 + 63) |= 8u;
      v17 = *((_QWORD *)a2 + 5);
      *((_DWORD *)a2 + 16) = a4->cx + *((_DWORD *)a2 + 14);
      *((_DWORD *)a2 + 17) = a4->cy + *((_DWORD *)a2 + 15);
      HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(v17);
      SURFACE::vAppContainerOwner(v16, HwndProcess);
    }
    else
    {
      v10 = 0;
    }
    if ( v16 )
      DEC_SHARE_REF_CNT(v16);
  }
  else
  {
    v19 = a5;
    if ( *a5 == a3 )
    {
      v20 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v34, v20);
      v22 = v34;
      if ( !v34 )
        goto LABEL_8;
      DWMSPRITE::SetLogicalSurface(a2, v21, 0LL);
      DWMSPRITE::SetLogicalSurface(a2, v23, v22);
      v24 = *((_QWORD *)v7 + 23);
      v25 = v24 - 24;
      v26 = -v24;
      v27 = v25 & -(__int64)(v26 != 0);
      if ( v27 )
      {
        INC_SHARE_REF_CNT(v25 & -(__int64)(v26 != 0));
        SFMLOGICALSURFACE::SetShape(v7, a1, 0LL);
        SFMLOGICALSURFACE::SetShape(v22, a1, (struct _SURFOBJ *)(v27 + 24));
        *((_DWORD *)v22 + 63) |= 8u;
        DEC_SHARE_REF_CNT(v27);
      }
      *v19 = v22;
    }
  }
LABEL_7:
  v5 = v10;
LABEL_8:
  SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v34);
  return v5;
}
