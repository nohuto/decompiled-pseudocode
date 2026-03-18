/*
 * XREFs of ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC
 * Callers:
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z @ 0x1F4842 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bContain@RGNOBJ@@QAEHAAU_RECTL@@@Z @ 0xA8338 (-bContain@RGNOBJ@@QAEHAAU_RECTL@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     ?vsoShapeSize@SFMLOGICALSURFACE@@QBEXPAUtagSIZE@@@Z @ 0xC67EE (-vsoShapeSize@SFMLOGICALSURFACE@@QBEXPAUtagSIZE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge bSpDwmValidateSurface@<eax>(
        LONG a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        struct XDCOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // ebx
  DC *v9; // ecx
  DC *v11; // ecx
  _DWORD *v12; // edi
  struct REGION *v13; // eax
  int v14; // eax
  int v15; // ecx
  ERECTL *v16; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  SFMLOGICALSURFACE *v21; // edx
  int v22; // eax
  const struct _POINTL *v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  ERECTL *v27; // ecx
  struct XDCOBJ *v28; // esi
  int v29; // edi
  int v30; // eax
  int (__stdcall *v31)(_DWORD, HWND *); // ecx
  struct tagSIZE *v32; // ecx
  ERECTL *v33; // ecx
  REGION *v34; // ecx
  struct ERECTL *v35; // [esp+3Ch] [ebp-108h]
  struct REGION *v36; // [esp+40h] [ebp-104h]
  __int64 v37; // [esp+4Ch] [ebp-F8h] BYREF
  SFMLOGICALSURFACE *top; // [esp+54h] [ebp-F0h]
  struct XDCOBJ *v39; // [esp+58h] [ebp-ECh]
  int v40; // [esp+5Ch] [ebp-E8h]
  int v41; // [esp+60h] [ebp-E4h]
  _DWORD v42[2]; // [esp+64h] [ebp-E0h] BYREF
  struct _POINTL v43; // [esp+6Ch] [ebp-D8h] BYREF
  int v44; // [esp+74h] [ebp-D0h] BYREF
  int v45; // [esp+78h] [ebp-CCh]
  HWND v46; // [esp+7Ch] [ebp-C8h] BYREF
  unsigned int v47; // [esp+80h] [ebp-C4h]
  int v48[4]; // [esp+84h] [ebp-C0h] BYREF
  _BYTE v49[20]; // [esp+94h] [ebp-B0h] BYREF
  _DWORD v50[3]; // [esp+A8h] [ebp-9Ch] BYREF
  __int16 v51; // [esp+B4h] [ebp-90h]
  _DWORD v52[3]; // [esp+C4h] [ebp-80h] BYREF
  _DWORD v53[5]; // [esp+D0h] [ebp-74h] BYREF
  _DWORD v54[3]; // [esp+E4h] [ebp-60h] BYREF
  int v55; // [esp+F0h] [ebp-54h]
  struct _RECTL v56; // [esp+100h] [ebp-44h] BYREF
  struct tagSIZE v57; // [esp+110h] [ebp-34h] BYREF
  LONG cx; // [esp+118h] [ebp-2Ch]
  LONG cy; // [esp+11Ch] [ebp-28h]
  REGION *v60; // [esp+120h] [ebp-24h] BYREF
  int v61; // [esp+124h] [ebp-20h]
  int v62; // [esp+128h] [ebp-1Ch]
  int v63; // [esp+12Ch] [ebp-18h]
  struct _RECTL v64; // [esp+130h] [ebp-14h] BYREF

  v57.cx = a1;
  v8 = 0;
  v39 = a2;
  v44 = 0;
  v45 = 0;
  v9 = *(DC **)a2;
  v41 = 8;
  v46 = 0;
  v47 = 0;
  v40 = 0;
  if ( !v9
    || (*((_DWORD *)v9 + 6) & 0x200) == 0
    || !g_pDwmState
    || (*((_DWORD *)v9 + 6) & 0x4001) != 0x4001
    || !*((_DWORD *)v9 + 122)
    || !*((_DWORD *)v9 + 126)
    || !*((_DWORD *)v9 + 124) && !*((_DWORD *)v9 + 125)
    || KeAreApcsDisabled() )
  {
    return v8;
  }
  memset(v50, 0, sizeof(v50));
  v51 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v49, a2, 0);
  if ( (v49[12] & 1) == 0 )
  {
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v49);
    if ( v50[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v50);
    return v8;
  }
  v11 = *(DC **)a2;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 508) )
  {
    v8 = 1;
    goto LABEL_15;
  }
  v12 = *(_DWORD **)(*((_DWORD *)v11 + 9) + 16);
  if ( !*((_DWORD *)v11 + 125) )
  {
    v13 = DC::prgnVisSnap(v11);
    if ( !v13 )
      goto LABEL_15;
    v60 = (REGION *)*((_DWORD *)v13 + 16);
    v61 = *((_DWORD *)v13 + 17);
    v62 = *((_DWORD *)v13 + 18);
    v63 = *((_DWORD *)v13 + 19);
    if ( ERECTL::bWrapped((ERECTL *)&v60) )
      goto LABEL_15;
  }
  if ( !a4 )
    goto LABEL_15;
  if ( !a5 )
    goto LABEL_15;
  top = (SFMLOGICALSURFACE *)(a4 + v57.cx);
  v37 = a5 + (__int64)(int)a3;
  if ( (unsigned __int64)(a4 + (__int64)v57.cx + 0x80000000LL) >> 32 )
    goto LABEL_15;
  if ( (unsigned __int64)(v37 + 0x80000000LL) >> 32 )
    goto LABEL_15;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v52, v39, 0x204u);
  if ( (*(_BYTE *)(v52[0] + 56) & 2) == 0 )
    goto LABEL_15;
  v43.x = v57.cx;
  v43.y = (LONG)a3;
  EXFORMOBJ::bXform((EXFORMOBJ *)v52, &v43, 1u);
  HIDWORD(v37) = *(_DWORD *)v39;
  v14 = *(_DWORD *)(HIDWORD(v37) + 28) & 1;
  v43.x += *(_DWORD *)(HIDWORD(v37) + 8 * v14 + 1048);
  v56.top = *(_DWORD *)(HIDWORD(v37) + 8 * v14 + 1052) + v43.y;
  v56.right = v43.x + a4;
  v43.y = v56.top;
  v56.left = v43.x;
  v56.bottom = v56.top + a5;
  ERECTL::vOrder((ERECTL *)&v56);
  v60 = 0;
  v61 = 0;
  v15 = *(_DWORD *)(HIDWORD(v37) + 504);
  v62 = *(_DWORD *)(v15 + 32);
  v63 = *(_DWORD *)(v15 + 36);
  ERECTL::operator*=(&v56.left, (int *)&v60);
  v17 = 0;
  if ( ERECTL::bWrapped(v16) )
    goto LABEL_15;
  if ( *(_DWORD *)(HIDWORD(v37) + 500) )
    goto LABEL_45;
  if ( (*(_DWORD *)(HIDWORD(v37) + 24) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(HIDWORD(v37) + 504), 0, (struct DC *)HIDWORD(v37));
  LODWORD(v37) = 0;
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( g_pDwmState )
  {
    v18 = DWMALTSPRITEREF::hspLookupWindow(*(void **)(*(_DWORD *)v39 + 488));
    if ( v18 )
    {
      LOBYTE(v19) = 15;
      v20 = HmgLock(v18, v19);
      v17 = v20;
      if ( !v20 )
      {
LABEL_41:
        v17 = v40;
        goto LABEL_42;
      }
      v21 = *(SFMLOGICALSURFACE **)(v20 + 136);
      top = v21;
      if ( *((char *)v21 + 164) >= 0
        && *((_DWORD *)v21 + 28) == (*(_DWORD *)(*(_DWORD *)v39 + 504) != 0 ? *(_DWORD *)(*(_DWORD *)v39 + 504) + 16 : 0) )
      {
        if ( *((_DWORD *)v21 + 11) )
        {
          HIDWORD(v37) = *((_DWORD *)v21 + 11);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v42);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v42);
          if ( HIDWORD(v37) && v42[0] && !RGNOBJ::bContain((RGNOBJ *)((char *)&v37 + 4), &v56) )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v60);
            if ( v60 )
            {
              v64.right = *(_DWORD *)(v17 + 40) - *(_DWORD *)(v17 + 32);
              v64.bottom = *(_DWORD *)(v17 + 44) - *(_DWORD *)(v17 + 36);
              v64.left = 0;
              v64.top = 0;
              RGNOBJ::vSet((RGNOBJ *)v42, &v64);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v60, (struct RGNOBJ *)v42, (struct RGNOBJ *)((char *)&v37 + 4), 4) )
              {
                v40 = (int)v60;
                LODWORD(v37) = 1;
              }
              else if ( v60 )
              {
                REGION::vDeleteREGION(v60);
              }
            }
            if ( v61 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v60);
          }
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v42);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v42);
          if ( v42[1] == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v42);
          v22 = v37;
          v21 = top;
        }
        else
        {
          v22 = 1;
          LODWORD(v37) = 1;
        }
        if ( v22 )
        {
          v57 = 0LL;
          SFMLOGICALSURFACE::vsoShapeSize(v21, &v57);
          v32 = (struct tagSIZE *)v40;
          v44 = *(_DWORD *)(v17 + 32);
          v45 = *(_DWORD *)(v17 + 36);
          *(struct tagSIZE *)&v56.right = v57;
          v56.top = 0;
          v56.left = 0;
          *((_DWORD *)top + 41) |= 0x80u;
          if ( v32 )
          {
            v57 = v32[8];
            cx = v32[9].cx;
            cy = v32[9].cy;
            ERECTL::operator*=(&v56.left, &v57.cx);
            if ( ERECTL::bEmpty(v33) )
            {
              REGION::vDeleteREGION((REGION *)v40);
              LODWORD(v37) = 0;
              *((_DWORD *)top + 41) |= 0x80u;
            }
          }
        }
      }
    }
    if ( v17 )
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 8));
    goto LABEL_41;
  }
LABEL_42:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  if ( (*(_DWORD *)(*(_DWORD *)v39 + 24) & 0x4000) != 0
    && SURFACE::Map(*(_DWORD *)(*(_DWORD *)v39 + 504), 0, *(_DWORD *)v39) == 2 )
  {
    *(_DWORD *)(*(_DWORD *)v39 + 32) |= 1u;
    if ( !v17 )
      goto LABEL_15;
    v34 = (REGION *)v17;
LABEL_81:
    REGION::vDeleteREGION(v34);
    goto LABEL_15;
  }
  if ( !(_DWORD)v37 )
    goto LABEL_15;
LABEL_45:
  v57.cx = *(_DWORD *)v39;
  v23 = (const struct _POINTL *)(v12 + 459);
  if ( !*(_DWORD *)(v57.cx + 500) )
    v23 = (const struct _POINTL *)&v44;
  ERECTL::bOffsetAdd((ERECTL *)&v56, v23, 0);
  v24 = v12[455];
  v25 = v12[460];
  v48[0] = v12[459];
  v26 = v48[0] + *(_DWORD *)(v24 + 32);
  v48[1] = v25;
  v48[2] = v26;
  v48[3] = v25 + *(_DWORD *)(v24 + 36);
  ERECTL::operator*=(&v56.left, v48);
  if ( ERECTL::bWrapped(v27) )
  {
    v34 = (REGION *)v40;
    if ( !v40 )
      goto LABEL_15;
    goto LABEL_81;
  }
  LODWORD(v37) = v56.left;
  top = (SFMLOGICALSURFACE *)v56.top;
  if ( *(_DWORD *)(v57.cx + 500) )
  {
    v56.left -= v12[459];
    v56.right -= v12[459];
    v56.top -= v12[460];
    v56.bottom -= v12[460];
  }
  else
  {
    v56.right -= v44;
    v56.left -= v44;
    v56.bottom -= v45;
    v56.top -= v45;
  }
  v57.cx = *(_DWORD *)(*(_DWORD *)(v57.cx + 504) + 20);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v49);
  if ( v50[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v50);
  v28 = v39;
  v29 = 0;
  do
  {
    memset(v54, 0, sizeof(v54));
    LOWORD(v55) = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v53, v28, 0);
    v30 = *(_DWORD *)(*(_DWORD *)v28 + 36);
    if ( v30 )
    {
      v31 = *(int (__stdcall **)(_DWORD, HWND *))(v30 + 2288);
      if ( v31 )
      {
        v29 = v31(*(_DWORD *)(v30 + 1108), &v46);
        if ( v29 == 258 )
        {
          KeDelayExecutionThread(0, 0, _gpLockShortDelay);
          --v41;
        }
      }
    }
    else
    {
      v29 = -1073741823;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v53);
    if ( v54[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v54);
  }
  while ( v29 == 258 && v41 );
  if ( v29 >= 0 && (v29 != 258 || v41) )
    return bSpDwmUpdateSurface(
             v46,
             __PAIR64__(v57.cx, v47),
             COERCE_STRUCT_XDCOBJ_(1.0),
             (HSURF)v37,
             *(float *)&top,
             (int)&v56,
             v40,
             v35,
             v36);
  if ( v40 )
    REGION::vDeleteREGION((REGION *)v40);
  return v8;
}
