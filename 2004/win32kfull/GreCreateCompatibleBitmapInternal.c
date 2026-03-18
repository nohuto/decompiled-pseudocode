/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0018AAC
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0079160 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C0106CF0 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C01173D8 (GreCreateDIBitmapComp.c)
 *     RecolorDeskPattern @ 0x1C012B560 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C014BEB8 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C021F580 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C022241C (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023ED30 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023F7AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0243330 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C029F458 (GreEscCreateScaledCompatibleBitmap.c)
 * Callees:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0018F9C (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
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
  __int64 v14; // r8
  __int64 v15; // rbx
  struct SURFACE *v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  DC *v19; // r14
  __int64 v20; // r13
  unsigned int v21; // esi
  __int64 *v22; // rax
  float v23; // xmm7_4
  float v24; // xmm8_4
  int v25; // eax
  float v26; // xmm0_4
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  __int64 v29; // rdi
  DC *v30; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v32; // rbx
  struct SURFACE *v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 *v38; // rax
  __int64 v39; // r8
  unsigned __int64 v40; // rbx
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  DC *v46; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+90h] [rbp-78h]
  unsigned int v48; // [rsp+94h] [rbp-74h]
  unsigned __int64 v49; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp-68h] BYREF
  int v51; // [rsp+A8h] [rbp-60h]
  BOOL v52; // [rsp+ACh] [rbp-5Ch]
  _BYTE v53[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h]
  int v56; // [rsp+D0h] [rbp-38h]
  _QWORD v57[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  __int64 v60; // [rsp+F8h] [rbp-10h]
  int v61; // [rsp+180h] [rbp+78h] BYREF
  int v62; // [rsp+188h] [rbp+80h]
  BOOL v63; // [rsp+190h] [rbp+88h]

  v6 = 0LL;
  v7 = 0;
  v9 = (int)a3;
  v10 = (int)a2;
  v62 = 0;
  v50 = __PAIR64__(a3, a2);
  v63 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v7 = 1;
      v62 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v51 = a4 & 0x4000000;
  v12 = (a4 & 0x4000000) != 0;
  v13 = (a4 >> 27) & 1;
  v52 = v12;
  if ( (int)v10 <= 0 || (int)v9 <= 0 || (unsigned __int64)(v9 * v10) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a1 )
    {
      v46 = 0LL;
      v47 = 0;
      v48 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v46, a1);
      if ( !v46 )
        return 0LL;
      v15 = *((_QWORD *)v46 + 6);
      if ( (*(_DWORD *)(v15 + 40) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v46, v14, 0LL);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v16 = (struct SURFACE *)*((_QWORD *)v46 + 62);
        if ( !v16 )
          v16 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v53, (struct XDCOBJ *)&v46);
        v18 = *(_DWORD *)(v15 + 40);
        v57[1] = 0LL;
        v58 = 256;
        v54 = 0LL;
        v60 = 0LL;
        v59 = 0LL;
        v57[0] = 0LL;
        v56 = 1;
        if ( (v18 & 1) != 0 )
        {
          *(_QWORD *)&v54 = *(_QWORD *)(v15 + 48);
          v55 = v15;
          GreAcquireSemaphore(v54);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v54, 11LL);
        }
        v19 = v46;
        v20 = 0LL;
        if ( *((_DWORD *)v46 + 8) == 1 )
        {
          v22 = (__int64 *)*((_QWORD *)v16 + 16);
          v17 = *((unsigned int *)v16 + 24);
          v21 = *((_DWORD *)v16 + 24);
          if ( !v22 )
          {
LABEL_16:
            v23 = 0.0;
            v24 = 0.0;
            if ( a6 )
            {
              v17 = *a6;
              v26 = 0.0;
              if ( (_WORD)v17 == 96 )
                goto LABEL_19;
              ScaledLogPixels = GreGetScaledLogPixels();
              v19 = v46;
              v23 = (float)ScaledLogPixels / 96.0;
              v26 = v23;
              v24 = v23;
            }
            else
            {
              v25 = *((_DWORD *)v46 + 130);
              if ( (v25 & 1) == 0 || (v25 & 2) != 0 )
              {
                v26 = 0.0;
                goto LABEL_19;
              }
              v24 = *((float *)v46 + 132);
              v23 = *((float *)v46 + 131);
              v26 = v24;
            }
            if ( v23 != 0.0 )
            {
LABEL_65:
              v49 = __PAIR64__(v9, v10);
              bFToL(v17, &v49, 6LL);
              bFToL(v42, (char *)&v49 + 4, v43);
              LODWORD(v10) = v49;
              LODWORD(v9) = HIDWORD(v49);
LABEL_20:
              if ( v51 )
              {
                if ( (*(_DWORD *)(v15 + 40) & 0x4000000) != 0 )
                {
                  if ( a5 )
                  {
                    v44 = *(_QWORD *)(v15 + 1800);
                    if ( v44 )
                    {
                      *(_QWORD *)(v44 + 104) = *a5;
                      v19 = v46;
                    }
                  }
                }
              }
              CreateCompatibleSurface(
                &v49,
                *((_QWORD *)v19 + 6),
                v21,
                v20,
                v10,
                v9,
                v63,
                v62,
                v52,
                0,
                0,
                0,
                v13,
                0,
                0,
                0LL);
              v28 = v49;
              if ( v49 )
              {
                if ( v23 != 0.0 || v24 != 0.0 )
                {
                  v45 = v50;
                  *(_DWORD *)(v49 + 116) |= 0x800u;
                  *(_QWORD *)(v28 + 668) = v45;
                  *(float *)(v28 + 660) = v23;
                  *(float *)(v28 + 664) = v24;
                }
                LOBYTE(v27) = 5;
                HmgSetOwner(*(_QWORD *)(v28 + 32), 2147483650LL, v27);
                v29 = *(_QWORD *)(v28 + 32);
              }
              else
              {
                v29 = 0LL;
              }
              if ( v28 )
                DEC_SHARE_REF_CNT(v28);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v54);
              if ( v57[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v57);
              NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v53);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
LABEL_30:
              v30 = v46;
              if ( v46 )
              {
                if ( v47 && (*((_DWORD *)v46 + 11) & 2) != 0 )
                {
                  if ( !v48 )
                  {
                    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
                    v30 = v46;
                    if ( UserAttr )
                    {
                      DC::RestoreAttributes(v46, UserAttr);
                      v30 = v46;
                    }
                  }
                  *((_DWORD *)v30 + 11) &= ~2u;
                  v30 = v46;
                  v47 = 0;
                }
                v61 = 0;
                v32 = *(_QWORD *)v30;
                HmgDecrementExclusiveReferenceCountEx(v30, v48, &v61);
                if ( v61 )
                  bDeleteDCInternalEx(v32, 0LL);
              }
              return v29;
            }
LABEL_19:
            if ( v26 == 0.0 )
              goto LABEL_20;
            goto LABEL_65;
          }
        }
        else
        {
          v21 = *(_DWORD *)(v15 + 2108);
          if ( (*(_DWORD *)(v15 + 2172) & 0x100) != 0 )
            goto LABEL_16;
          v22 = *(__int64 **)(v15 + 1808);
        }
        v20 = *v22;
        goto LABEL_16;
      }
      v34 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v46);
      if ( *(_DWORD *)(v36 + 32) == 1 )
      {
        v37 = *((unsigned int *)v34 + 24);
        v38 = (__int64 *)*((_QWORD *)v34 + 16);
        if ( !v38 )
        {
LABEL_50:
          CreateCompatibleSurface(&v50, v15, v37, v6, v10, v9, v63, v7, v12, v35, v35, v35, v13, v35, v35, v35);
          v40 = v50;
          if ( v50 )
          {
            LOBYTE(v39) = 5;
            HmgSetOwner(*(_QWORD *)(v50 + 32), 2147483650LL, v39);
            v29 = *(_QWORD *)(v40 + 32);
          }
          else
          {
            v29 = 0LL;
          }
          if ( v40 )
            DEC_SHARE_REF_CNT(v40);
          goto LABEL_30;
        }
      }
      else
      {
        v37 = *(unsigned int *)(v15 + 2108);
        if ( (*(_DWORD *)(v15 + 2172) & 0x100) != 0 )
          goto LABEL_50;
        v38 = *(__int64 **)(v15 + 1808);
      }
      v6 = *v38;
      goto LABEL_50;
    }
    return GreCreateBitmap((unsigned int)v10, (unsigned int)v9, 1LL, 1LL, 0LL);
  }
}
