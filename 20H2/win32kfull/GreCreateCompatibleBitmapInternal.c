/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C009AB10
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0036D3C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00951E8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C0106FC0 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C0118928 (GreCreateDIBitmapComp.c)
 *     RecolorDeskPattern @ 0x1C012D450 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C014E6C8 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C021E6F0 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C022158C (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023DA90 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0242090 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C029E008 (GreEscCreateScaledCompatibleBitmap.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C009B670 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rsi
  int v7; // r14d
  __int64 v9; // r15
  __int64 v10; // r12
  BOOL v12; // r13d
  int v13; // edi
  __int64 v14; // rbx
  struct SURFACE *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  DC *v20; // r14
  __int64 v21; // r13
  unsigned int v22; // esi
  __int64 *v23; // rax
  float v24; // xmm7_4
  float v25; // xmm8_4
  int v26; // eax
  float v27; // xmm0_4
  __int64 v28; // r8
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  DC *v31; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v33; // rbx
  struct SURFACE *v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 *v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  DC *v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+90h] [rbp-78h]
  unsigned int v49; // [rsp+94h] [rbp-74h]
  unsigned __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  int v52; // [rsp+A8h] [rbp-60h]
  BOOL v53; // [rsp+ACh] [rbp-5Ch]
  _BYTE v54[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-40h]
  int v57; // [rsp+D0h] [rbp-38h]
  _QWORD v58[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v59; // [rsp+E8h] [rbp-20h]
  __int64 v60; // [rsp+F0h] [rbp-18h]
  __int64 v61; // [rsp+F8h] [rbp-10h]
  int v62; // [rsp+180h] [rbp+78h] BYREF
  int v63; // [rsp+188h] [rbp+80h]
  BOOL v64; // [rsp+190h] [rbp+88h]

  v6 = 0LL;
  v7 = 0;
  v9 = (int)a3;
  v10 = (int)a2;
  v63 = 0;
  v51 = __PAIR64__(a3, a2);
  v64 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v7 = 1;
      v63 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v52 = a4 & 0x4000000;
  v12 = (a4 & 0x4000000) != 0;
  v13 = (a4 >> 27) & 1;
  v53 = v12;
  if ( (int)v10 <= 0 || (int)v9 <= 0 || (unsigned __int64)(v9 * v10) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a1 )
    {
      v47 = 0LL;
      v48 = 0;
      v49 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v47, a1);
      if ( !v47 )
        return 0LL;
      v14 = *((_QWORD *)v47 + 6);
      if ( (*(_DWORD *)(v14 + 40) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v15 = (struct SURFACE *)*((_QWORD *)v47 + 62);
        if ( !v15 )
          v15 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v54, (struct XDCOBJ *)&v47);
        v19 = *(_DWORD *)(v14 + 40);
        v58[1] = 0LL;
        v59 = 256;
        v55 = 0LL;
        v61 = 0LL;
        v60 = 0LL;
        v58[0] = 0LL;
        v57 = 1;
        if ( (v19 & 1) != 0 )
        {
          *(_QWORD *)&v55 = *(_QWORD *)(v14 + 48);
          v56 = v14;
          GreAcquireSemaphore(v55);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v55, 11LL);
        }
        v20 = v47;
        v21 = 0LL;
        if ( *((_DWORD *)v47 + 8) == 1 )
        {
          v23 = (__int64 *)*((_QWORD *)v15 + 16);
          v16 = *((unsigned int *)v15 + 24);
          v22 = *((_DWORD *)v15 + 24);
          if ( !v23 )
          {
LABEL_16:
            v24 = 0.0;
            v25 = 0.0;
            if ( a6 )
            {
              v16 = *a6;
              v27 = 0.0;
              if ( (_WORD)v16 == 96 )
                goto LABEL_19;
              ScaledLogPixels = GreGetScaledLogPixels(v16, 0LL, v17, v18);
              v20 = v47;
              v24 = (float)ScaledLogPixels / 96.0;
              v27 = v24;
              v25 = v24;
            }
            else
            {
              v26 = *((_DWORD *)v47 + 130);
              if ( (v26 & 1) == 0 || (v26 & 2) != 0 )
              {
                v27 = 0.0;
                goto LABEL_19;
              }
              v25 = *((float *)v47 + 132);
              v24 = *((float *)v47 + 131);
              v27 = v25;
            }
            if ( v24 != 0.0 )
            {
LABEL_65:
              v50 = __PAIR64__(v9, v10);
              bFToL(v16, &v50, 6LL);
              bFToL(v43, (char *)&v50 + 4, v44);
              LODWORD(v10) = v50;
              LODWORD(v9) = HIDWORD(v50);
LABEL_20:
              if ( v52 )
              {
                if ( (*(_DWORD *)(v14 + 40) & 0x4000000) != 0 )
                {
                  if ( a5 )
                  {
                    v45 = *(_QWORD *)(v14 + 1800);
                    if ( v45 )
                    {
                      *(_QWORD *)(v45 + 104) = *a5;
                      v20 = v47;
                    }
                  }
                }
              }
              CreateCompatibleSurface(
                &v50,
                *((_QWORD *)v20 + 6),
                v22,
                v21,
                v10,
                v9,
                v64,
                v63,
                v53,
                0,
                0,
                0,
                v13,
                0,
                0,
                0LL);
              v29 = v50;
              if ( v50 )
              {
                if ( v24 != 0.0 || v25 != 0.0 )
                {
                  v46 = v51;
                  *(_DWORD *)(v50 + 116) |= 0x800u;
                  *(_QWORD *)(v29 + 668) = v46;
                  *(float *)(v29 + 660) = v24;
                  *(float *)(v29 + 664) = v25;
                }
                LOBYTE(v28) = 5;
                HmgSetOwner(*(_QWORD *)(v29 + 32), 2147483650LL, v28);
                v30 = *(_QWORD *)(v29 + 32);
              }
              else
              {
                v30 = 0LL;
              }
              if ( v29 )
                DEC_SHARE_REF_CNT(v29);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v55);
              if ( v58[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v58);
              NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v54);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
LABEL_30:
              v31 = v47;
              if ( v47 )
              {
                if ( v48 && (*((_DWORD *)v47 + 11) & 2) != 0 )
                {
                  if ( !v49 )
                  {
                    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v47);
                    v31 = v47;
                    if ( UserAttr )
                    {
                      DC::RestoreAttributes(v47, UserAttr);
                      v31 = v47;
                    }
                  }
                  *((_DWORD *)v31 + 11) &= ~2u;
                  v31 = v47;
                  v48 = 0;
                }
                v62 = 0;
                v33 = *(_QWORD *)v31;
                HmgDecrementExclusiveReferenceCountEx(v31, v49, &v62);
                if ( v62 )
                  bDeleteDCInternalEx(v33, 0LL);
              }
              return v30;
            }
LABEL_19:
            if ( v27 == 0.0 )
              goto LABEL_20;
            goto LABEL_65;
          }
        }
        else
        {
          v22 = *(_DWORD *)(v14 + 2108);
          if ( (*(_DWORD *)(v14 + 2172) & 0x100) != 0 )
            goto LABEL_16;
          v23 = *(__int64 **)(v14 + 1808);
        }
        v21 = *v23;
        goto LABEL_16;
      }
      v35 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v47);
      if ( *(_DWORD *)(v37 + 32) == 1 )
      {
        v38 = *((unsigned int *)v35 + 24);
        v39 = (__int64 *)*((_QWORD *)v35 + 16);
        if ( !v39 )
        {
LABEL_50:
          CreateCompatibleSurface(&v51, v14, v38, v6, v10, v9, v64, v7, v12, v36, v36, v36, v13, v36, v36, v36);
          v41 = v51;
          if ( v51 )
          {
            LOBYTE(v40) = 5;
            HmgSetOwner(*(_QWORD *)(v51 + 32), 2147483650LL, v40);
            v30 = *(_QWORD *)(v41 + 32);
          }
          else
          {
            v30 = 0LL;
          }
          if ( v41 )
            DEC_SHARE_REF_CNT(v41);
          goto LABEL_30;
        }
      }
      else
      {
        v38 = *(unsigned int *)(v14 + 2108);
        if ( (*(_DWORD *)(v14 + 2172) & 0x100) != 0 )
          goto LABEL_50;
        v39 = *(__int64 **)(v14 + 1808);
      }
      v6 = *v39;
      goto LABEL_50;
    }
    return GreCreateBitmap((unsigned int)v10, (unsigned int)v9, 1LL, 1LL, 0LL);
  }
}
