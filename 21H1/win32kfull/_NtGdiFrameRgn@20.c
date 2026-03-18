/*
 * XREFs of _NtGdiFrameRgn@20 @ 0x1FE62D
 * Callers:
 *     ?DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z @ 0x19CCF2 (-DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 *     ??0EBRUSHOBJ@@QAE@XZ @ 0xC054A (--0EBRUSHOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?mixBest@EBRUSHOBJ@@QBEKEE@Z @ 0x1E5756 (-mixBest@EBRUSHOBJ@@QBEKEE@Z.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z @ 0x1F4842 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z @ 0x1FCFB0 (-GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z.c)
 *     ?bSyncBrushObj@@YGHPAVBRUSH@@@Z @ 0x1FF612 (-bSyncBrushObj@@YGHPAVBRUSH@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QAEXAAVXDCOBJ@@JJPAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x23786C (-vWidenSetupForFrameRgn@EPATHOBJ@@QAEXAAVXDCOBJ@@JJPAVEXFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 */

int __stdcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  EPATHOBJ *v8; // ecx
  const struct _RECTL *v9; // ecx
  DC *v10; // esi
  int v11; // ecx
  DC *v12; // eax
  DC *v13; // eax
  int v14; // edi
  int *v15; // ecx
  DC *v16; // ecx
  struct REGION *v17; // eax
  DC *v18; // eax
  struct ECLIPOBJ *v19; // ecx
  DC *v20; // eax
  HBRUSH v21; // esi
  DC *v22; // ecx
  MIX v23; // eax
  DC *v24; // eax
  int v25; // eax
  int *v27; // [esp+48h] [ebp-280h]
  struct BRUSH *v28; // [esp+48h] [ebp-280h]
  unsigned int v29; // [esp+4Ch] [ebp-27Ch]
  DC *v30[3]; // [esp+54h] [ebp-274h] BYREF
  int v31; // [esp+60h] [ebp-268h] BYREF
  int v32; // [esp+64h] [ebp-264h]
  _DWORD v33[2]; // [esp+68h] [ebp-260h] BYREF
  int v34; // [esp+70h] [ebp-258h] BYREF
  int v35; // [esp+74h] [ebp-254h]
  int v36; // [esp+78h] [ebp-250h]
  int v37; // [esp+7Ch] [ebp-24Ch]
  HBRUSH v38[2]; // [esp+80h] [ebp-248h] BYREF
  int BackRect; // [esp+88h] [ebp-240h]
  _DWORD v40[3]; // [esp+8Ch] [ebp-23Ch] BYREF
  _XFORMOBJ v41; // [esp+98h] [ebp-230h] BYREF
  int v42; // [esp+A0h] [ebp-228h]
  _BYTE v43[20]; // [esp+A4h] [ebp-224h] BYREF
  _DWORD v44[3]; // [esp+B8h] [ebp-210h] BYREF
  __int16 v45; // [esp+C4h] [ebp-204h]
  _LINEATTRS v46; // [esp+DCh] [ebp-1ECh] BYREF
  _BYTE v47[12]; // [esp+FCh] [ebp-1CCh] BYREF
  _DWORD v48[18]; // [esp+108h] [ebp-1C0h] BYREF
  _DWORD v49[18]; // [esp+150h] [ebp-178h] BYREF
  BRUSHOBJ pbo; // [esp+198h] [ebp-130h] BYREF
  char *v51; // [esp+1C0h] [ebp-108h]
  _DWORD v52[4]; // [esp+1F8h] [ebp-D0h] BYREF
  CLIPOBJ pco; // [esp+208h] [ebp-C0h] BYREF
  int v54; // [esp+24Ch] [ebp-7Ch]
  int v55; // [esp+250h] [ebp-78h]
  int v56; // [esp+278h] [ebp-50h]
  int v57; // [esp+280h] [ebp-48h]
  _BYTE v58[60]; // [esp+288h] [ebp-40h] BYREF

  v38[0] = a3;
  v5 = 0;
  BackRect = 0;
  memset(v30, 0, sizeof(v30));
  XDCOBJ::vLock((XDCOBJ *)v30, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v40, a2, 1);
  v6 = abs32(a4);
  v37 = v6;
  v7 = abs32(a5);
  v36 = v7;
  if ( !v30[0] || (*((_DWORD *)v30[0] + 6) & 0x10000) != 0 || !v40[0] || v6 <= 0 || v7 <= 0 )
    goto LABEL_59;
  if ( RGNOBJ::iComplexity((RGNOBJ *)v40) == 1 )
  {
    v5 = 1;
    goto LABEL_59;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v48);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v49);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v30, -2147483132);
  if ( v48[2] )
  {
    if ( v49[2] )
    {
      if ( RGNOBJ::bCreate((RGNOBJ *)v40, (struct EPATHOBJ *)v48, (struct EXFORMOBJ *)v47) )
      {
        memset(&v46, 0, sizeof(v46));
        v42 = 0;
        memset(v58, 0, sizeof(v58));
        v41.ulReserved = (ULONG)v58;
        EPATHOBJ::vWidenSetupForFrameRgn(v8, (struct XDCOBJ *)v30, v37, v36, (struct EXFORMOBJ *)&v41, &v46);
        if ( EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v49, (struct EPATHOBJ *)v48, &v41, &v46) )
        {
          if ( EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v48, &v41, &v46) )
          {
            v35 = 0;
            RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v34, (struct EPATHOBJ *)v49, 2u, 0);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v33);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v33);
            if ( !v34 || !v33[0] )
              goto LABEL_53;
            if ( DC::bWorldToDeviceIdentity(v30[0]) )
            {
              v5 = RGNOBJ::bMerge((RGNOBJ *)v33, (struct RGNOBJ *)&v34, (struct RGNOBJ *)v40, 8u);
            }
            else
            {
              v32 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v48, 1u, 0);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
              v5 = v31 && RGNOBJ::bMerge((RGNOBJ *)v33, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v31, 8u);
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
              if ( v32 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
            }
            if ( !v5 )
              goto LABEL_53;
            v44[0] = v30;
            v52[0] = *(_DWORD *)(v33[0] + 64);
            v52[1] = *(_DWORD *)(v33[0] + 68);
            v52[2] = *(_DWORD *)(v33[0] + 72);
            v52[3] = *(_DWORD *)(v33[0] + 76);
            if ( !ERECTL::bEmpty((ERECTL *)v52) )
              BackRect = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v43, v9);
            v10 = v30[0];
            if ( (*((_BYTE *)v30[0] + 24) & 0xE0) != 0 )
            {
              XDCOBJ::vAccumulate((XDCOBJ *)v30, (struct ERECTL *)v52);
              v10 = v30[0];
            }
            if ( XDCOBJ::bFullScreen(v30) || !*((_DWORD *)v10 + 126) )
              goto LABEL_53;
            memset(v44, 0, sizeof(v44));
            v45 = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v43, (struct XDCOBJ *)v30, 0);
            v11 = v33[0];
            v12 = v30[0];
            if ( !v33[0] )
              *((_DWORD *)v30[0] + 6) |= 0x10u;
            *((_DWORD *)v12 + 286) = v11;
            v13 = v30[0];
            v14 = *((_DWORD *)v30[0] + 126);
            v37 = v14;
            if ( (v43[12] & 1) != 0 )
            {
              if ( DC::bTightenRao(v30[0]) )
              {
                ERECTL::bOffsetAdd(
                  (ERECTL *)v52,
                  (const struct _POINTL *)v30[0] + (*((_DWORD *)v30[0] + 7) & 1) + 131,
                  0);
                GreScaleValuesInternal(v15, v30, (struct XDCOBJ *)4, v27, v29);
                if ( DC::prgnRao(v30[0]) )
                  v17 = DC::prgnRao(v16);
                else
                  v17 = DC::prgnVisSnap(v16);
                v54 = 0;
                v55 = 0;
                v56 = 1;
                v57 = 0;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v17, (struct ERECTL *)v52, 0);
                if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
                {
                  v18 = v30[0];
                  *((_DWORD *)v30[0] + 6) |= 0x10u;
                  *((_DWORD *)v18 + 286) = 0;
                }
                else
                {
                  v36 = *(_DWORD *)(v14 + 88);
                  v31 = *((_DWORD *)v30[0] + 15);
                  EBRUSHOBJ::EBRUSHOBJ((EBRUSHOBJ *)&pbo);
                  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v38, v38[0]);
                  v20 = v30[0];
                  v5 = 0;
                  v21 = v38[0];
                  if ( v38[0] )
                  {
                    if ( (*((_BYTE *)v30[0] + 24) & 0xE0) != 0 && ((_DWORD)v38[0][6] & 0x100) == 0 )
                    {
                      v46.fl = pco.rclBounds.left;
                      v46.iJoin = pco.rclBounds.top;
                      v46.iEndCap = pco.rclBounds.right;
                      v46.elWidth.e = pco.rclBounds.bottom;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v30, v19, (LONG *)&v46);
                      v21 = v38[0];
                      v14 = v37;
                    }
                    bSyncBrushObj(v28);
                    EBRUSHOBJ::vInitBrush(&pbo, v30[0], v21, v31, v36, v14, 1);
                    v22 = v30[0];
                    v51 = (char *)v30[0] + 112;
                    if ( ((_DWORD)v21[6] & 0x100) != 0 )
                    {
                      *((_DWORD *)v30[0] + 6) |= 0x10u;
                      *((_DWORD *)v22 + 286) = 0;
                    }
                    else
                    {
                      v23 = EBRUSHOBJ::mixBest(
                              (EBRUSHOBJ *)&pbo,
                              *(_BYTE *)(*((_DWORD *)v30[0] + 255) + 232),
                              *(_BYTE *)(*((_DWORD *)v30[0] + 255) + 233));
                      ++*(_DWORD *)(v14 + 56);
                      EngPaint((SURFOBJ *)(v14 + 16), &pco, &pbo, (POINTL *)v30[0] + 147, v23);
                      v24 = v30[0];
                      *((_DWORD *)v30[0] + 286) = 0;
                      *((_DWORD *)v24 + 6) |= 0x10u;
                      v5 = 1;
                    }
                    XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v38);
                    DEC_SHARE_REF_CNT_LAZY0((struct BRUSH *)v38[0]);
                  }
                  else
                  {
                    *((_DWORD *)v30[0] + 6) |= 0x10u;
                    *((_DWORD *)v20 + 286) = 0;
                  }
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
                }
                goto LABEL_51;
              }
              v13 = v30[0];
            }
            *((_DWORD *)v13 + 6) |= 0x10u;
            *((_DWORD *)v13 + 286) = 0;
            v5 = XDCOBJ::bFullScreen(v30);
LABEL_51:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v43);
            if ( v44[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v44);
LABEL_53:
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v33);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v33);
            if ( v33[1] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v33);
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v34);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
            if ( v35 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
          }
        }
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v49);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v48);
  if ( BackRect )
  {
    v25 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v25);
  }
LABEL_59:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v40);
  if ( v30[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v30);
  return v5;
}
