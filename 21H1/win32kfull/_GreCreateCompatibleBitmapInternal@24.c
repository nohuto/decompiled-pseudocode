/*
 * XREFs of _GreCreateCompatibleBitmapInternal@24 @ 0x21480
 * Callers:
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _NtGdiCreateCompatibleBitmap@12 @ 0x9DCC2 (_NtGdiCreateCompatibleBitmap@12.c)
 *     _RecolorDeskPattern@0 @ 0xAEE98 (_RecolorDeskPattern@0.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YGPAUHBITMAP__@@HHI@Z @ 0x181910 (-CreateScreenBitmap@@YGPAUHBITMAP__@@HHI@Z.c)
 *     _MNCreateAnimationBitmap@12 @ 0x1844E8 (_MNCreateAnimationBitmap@12.c)
 *     ?CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z @ 0x19C88E (-CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z @ 0x1A073D (-CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 *     _GreEscCreateScaledCompatibleBitmap@4 @ 0x1FD305 (_GreEscCreateScaledCompatibleBitmap@4.c)
 *     _GreCreateDIBitmapComp@44 @ 0x226A90 (_GreCreateDIBitmapComp@44.c)
 * Callees:
 *     ?bIsZero@EPOINTFL@@QBEHXZ @ 0x219BA (-bIsZero@EPOINTFL@@QBEHXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ??XEFLOATEXT@@QAEXJ@Z @ 0x89976 (--XEFLOATEXT@@QAEXJ@Z.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     ?vSetPID@SURFREF@@QAEXK@Z @ 0xF5D18 (-vSetPID@SURFREF@@QAEXK@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z @ 0x1E9A26 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z.c)
 */

int __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct _LUID *a5,
        unsigned __int16 *a6)
{
  int v6; // eax
  int v7; // ebx
  unsigned int v9; // edi
  unsigned int v10; // eax
  HDC v12; // esi
  struct SURFACE *v13; // eax
  int v14; // edx
  int v15; // edx
  int *v16; // eax
  SURFREF *v17; // ecx
  int *v18; // eax
  bool v19; // zf
  int v20; // eax
  unsigned __int16 ScaledLogPixels; // ax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int *v25; // ecx
  _DWORD *v26; // eax
  int *v27; // esi
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // [esp-10h] [ebp-C0h]
  unsigned int v31[2]; // [esp+Ch] [ebp-A4h] BYREF
  int v32; // [esp+14h] [ebp-9Ch]
  int v33; // [esp+18h] [ebp-98h]
  struct SURFACE *v34; // [esp+1Ch] [ebp-94h]
  HDC v35; // [esp+20h] [ebp-90h] BYREF
  _DWORD v36[3]; // [esp+24h] [ebp-8Ch] BYREF
  unsigned int v37; // [esp+30h] [ebp-80h] BYREF
  int v38; // [esp+34h] [ebp-7Ch] BYREF
  int v39; // [esp+38h] [ebp-78h]
  int v40; // [esp+3Ch] [ebp-74h]
  int v41; // [esp+40h] [ebp-70h]
  BOOL v42; // [esp+44h] [ebp-6Ch]
  BOOL v43; // [esp+48h] [ebp-68h]
  unsigned __int16 *v44; // [esp+4Ch] [ebp-64h] BYREF
  int v45; // [esp+50h] [ebp-60h]
  unsigned int v46; // [esp+54h] [ebp-5Ch]
  int v47; // [esp+58h] [ebp-58h]
  int v48; // [esp+5Ch] [ebp-54h]
  int v49; // [esp+60h] [ebp-50h]
  int v50; // [esp+64h] [ebp-4Ch]
  char v51[4]; // [esp+68h] [ebp-48h] BYREF
  _BYTE v52[20]; // [esp+6Ch] [ebp-44h] BYREF
  _DWORD v53[3]; // [esp+80h] [ebp-30h] BYREF
  __int16 v54; // [esp+8Ch] [ebp-24h]
  unsigned __int16 *v55; // [esp+9Ch] [ebp-14h] BYREF
  int v56; // [esp+A0h] [ebp-10h]
  unsigned int v57; // [esp+A4h] [ebp-Ch] BYREF
  int v58; // [esp+A8h] [ebp-8h]

  v6 = a3;
  v35 = a1;
  v7 = 0;
  v44 = a6;
  v31[0] = a2;
  v33 = a3;
  v32 = 0;
  v41 = 0;
  v49 = a2;
  v50 = a3;
  v43 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v41 = 1;
    }
    else
    {
      _DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
      v6 = v33;
    }
  }
  v48 = a4 & 0x4000000;
  v9 = (a4 >> 27) & 1;
  v42 = (a4 & 0x4000000) != 0;
  if ( a2 > 0 && v6 > 0 )
  {
    v30 = v6;
    v10 = v6 * v31[0];
    if ( is_mul_ok(v30, v31[0]) && v10 <= 0x3FFFFFFF )
    {
      if ( !v35 )
        return GreCreateBitmap(v31[0], v33, 1, 1, 0);
      memset(v36, 0, sizeof(v36));
      XDCOBJ::vLock((XDCOBJ *)v36, v35);
      if ( !v36[0] )
        goto LABEL_50;
      v12 = *(HDC *)(v36[0] + 36);
      v37 = (unsigned int)v12;
      v35 = v12;
      if ( ((_DWORD)v12[6] & 0x8000) != 0 )
      {
        v13 = XDCOBJ::pSurfaceEff((XDCOBJ *)v36);
        if ( *(_DWORD *)(v14 + 20) == 1 )
        {
          v15 = *((_DWORD *)v13 + 15);
          v16 = (int *)*((_DWORD *)v13 + 22);
          if ( v16 )
            goto LABEL_18;
        }
        else
        {
          v15 = *((_DWORD *)v12 + 351);
          if ( ((_DWORD)v12[364] & 0x100) == 0 )
          {
            v16 = (int *)*((_DWORD *)v12 + 278);
LABEL_18:
            v32 = *v16;
          }
        }
        CreateCompatibleSurface(v31, v12, v15, v32, v31[0], v33, v43, v41, v42, 0, 0, 0, v9, 0, 0, 0);
        if ( SURFREF::bValid((SURFREF *)v31) )
        {
          SURFREF::vSetPID(v17, 0x80000002);
          v7 = *(_DWORD *)(v31[0] + 20);
        }
        SURFREF::vUnlock((SURFREF *)v31);
LABEL_50:
        DCOBJ::~DCOBJ((DCOBJ *)v36);
        return v7;
      }
      GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      v34 = *(struct SURFACE **)(v36[0] + 504);
      if ( !v34 )
        v34 = SURFACE::pdibDefault;
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v51, (struct XDCOBJ *)v36);
      memset(v53, 0, sizeof(v53));
      v54 = 256;
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v52, (struct PDEVOBJ *)&v35);
      v32 = 0;
      if ( *(_DWORD *)(v36[0] + 20) == 1 )
      {
        v18 = (int *)*((_DWORD *)v34 + 22);
        v34 = (struct SURFACE *)*((_DWORD *)v34 + 15);
        if ( !v18 )
          goto LABEL_30;
      }
      else
      {
        v19 = ((_DWORD)v12[364] & 0x100) == 0;
        v34 = (struct SURFACE *)*((_DWORD *)v12 + 351);
        if ( !v19 )
          goto LABEL_30;
        v18 = (int *)*((_DWORD *)v12 + 278);
      }
      v32 = *v18;
LABEL_30:
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      if ( v44 )
      {
        v20 = *v44;
        if ( (_WORD)v20 == 96 )
        {
LABEL_37:
          if ( !EPOINTFL::bIsZero((EPOINTFL *)&v55) )
          {
            v38 = v33;
            v37 = v31[0];
            ltoef_c(v31[0], &v44);
            ltoef_c(v38, v31);
            mulff3_c(&v44, &v44, &v55);
            mulff3_c(v31, v31, &v57);
            eftol_c(&v44, &v37, 1);
            eftol_c(v31, &v38, 1);
            v24 = v36[0];
            v31[0] = v37;
            v33 = v38;
          }
          if ( v48 && ((_DWORD)v12[6] & 0x4000000) != 0 && a5 )
          {
            PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v35, a5);
            v24 = v36[0];
          }
          CreateCompatibleSurface(
            v31,
            *(_DWORD *)(v24 + 36),
            v34,
            v32,
            v31[0],
            v33,
            v43,
            v41,
            v42,
            0,
            0,
            0,
            v9,
            0,
            0,
            0);
          if ( SURFREF::bValid((SURFREF *)v31) )
          {
            if ( !EPOINTFL::bIsZero((EPOINTFL *)&v55) )
            {
              v26 = (_DWORD *)v31[0];
              v27 = v25;
              v28 = v49;
              v37 = *v27++;
              v38 = *v27++;
              v39 = *v27;
              v40 = v27[1];
              *(_DWORD *)(v31[0] + 76) |= 0x800u;
              v26[119] = v28;
              v29 = v50;
              v26[115] = v37;
              v26[120] = v29;
              v26[116] = v38;
              v26[117] = v39;
              v26[118] = v40;
            }
            SURFREF::vSetPID((SURFREF *)v31, 0x80000002);
            v7 = *(_DWORD *)(v31[0] + 20);
          }
          SURFREF::vUnlock((SURFREF *)v31);
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v52);
          if ( v53[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v53);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v51);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
          goto LABEL_50;
        }
        v37 = 0x40000000;
        v38 = 2;
        ScaledLogPixels = GreGetScaledLogPixels(v20);
        EFLOATEXT::operator*=(ScaledLogPixels);
        EFLOATEXT::operator/=(96);
        v22 = v38;
        v55 = (unsigned __int16 *)v37;
        v56 = v38;
        v57 = v37;
      }
      else
      {
        v23 = *(_DWORD *)(v36[0] + 520);
        if ( (v23 & 1) == 0 || (v23 & 2) != 0 )
          goto LABEL_37;
        v44 = *(unsigned __int16 **)(v36[0] + 524);
        v45 = *(_DWORD *)(v36[0] + 528);
        v46 = *(_DWORD *)(v36[0] + 532);
        v47 = *(_DWORD *)(v36[0] + 536);
        v55 = v44;
        v56 = v45;
        v44 = *(unsigned __int16 **)(v36[0] + 524);
        v45 = *(_DWORD *)(v36[0] + 528);
        v46 = *(_DWORD *)(v36[0] + 532);
        v47 = *(_DWORD *)(v36[0] + 536);
        v12 = (HDC)v37;
        v57 = v46;
        v22 = v47;
      }
      v58 = v22;
      goto LABEL_37;
    }
  }
  EngSetLastError(0x57u);
  return 0;
}
