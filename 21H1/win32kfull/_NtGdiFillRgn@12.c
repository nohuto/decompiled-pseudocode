/*
 * XREFs of _NtGdiFillRgn@12 @ 0x1FE14A
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
 *     ?mixBest@EBRUSHOBJ@@QBEKEE@Z @ 0x1E5756 (-mixBest@EBRUSHOBJ@@QBEKEE@Z.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z @ 0x1F4842 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z @ 0x1FCFB0 (-GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z.c)
 *     ?bSyncBrushObj@@YGHPAVBRUSH@@@Z @ 0x1FF612 (-bSyncBrushObj@@YGHPAVBRUSH@@@Z.c)
 */

int __stdcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  int v3; // ebx
  int v4; // esi
  const struct _RECTL *v5; // ecx
  REGION *v6; // ecx
  DC *v7; // eax
  DC *v8; // esi
  int v9; // edi
  int *v10; // ecx
  DC *v11; // ecx
  struct REGION *v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // edi
  struct ECLIPOBJ *v16; // ecx
  struct ECLIPOBJ *v17; // edx
  HBRUSH v18; // esi
  MIX v19; // eax
  int v20; // ecx
  int v21; // eax
  int v23; // [esp+30h] [ebp-1BCh]
  int *v24; // [esp+3Ch] [ebp-1B0h]
  struct BRUSH *v25; // [esp+3Ch] [ebp-1B0h]
  unsigned int v26; // [esp+40h] [ebp-1ACh]
  DC *v27[3]; // [esp+4Ch] [ebp-1A0h] BYREF
  struct ECLIPOBJ *v28; // [esp+58h] [ebp-194h] BYREF
  int v29; // [esp+5Ch] [ebp-190h]
  int v30; // [esp+60h] [ebp-18Ch]
  HBRUSH v31; // [esp+64h] [ebp-188h]
  REGION *v32[3]; // [esp+68h] [ebp-184h] BYREF
  int v33; // [esp+74h] [ebp-178h]
  BOOL v34; // [esp+78h] [ebp-174h]
  REGION *v35; // [esp+7Ch] [ebp-170h]
  int BackRect; // [esp+80h] [ebp-16Ch]
  int v37; // [esp+84h] [ebp-168h]
  int v38; // [esp+88h] [ebp-164h]
  _DWORD v39[3]; // [esp+8Ch] [ebp-160h] BYREF
  char v40; // [esp+98h] [ebp-154h]
  _DWORD v41[3]; // [esp+A0h] [ebp-14Ch] BYREF
  __int16 v42; // [esp+ACh] [ebp-140h]
  _DWORD v43[3]; // [esp+D8h] [ebp-114h] BYREF
  RECTL rclBounds; // [esp+E4h] [ebp-108h] BYREF
  BRUSHOBJ pbo; // [esp+F4h] [ebp-F8h] BYREF
  char *v46; // [esp+11Ch] [ebp-D0h]
  _DWORD v47[4]; // [esp+154h] [ebp-98h] BYREF
  CLIPOBJ pco; // [esp+164h] [ebp-88h] BYREF
  int v49; // [esp+1A8h] [ebp-44h]
  int v50; // [esp+1ACh] [ebp-40h]
  int v51; // [esp+1D4h] [ebp-18h]
  int v52; // [esp+1DCh] [ebp-10h]

  v3 = 0;
  v31 = a3;
  v4 = 0;
  BackRect = 0;
  memset(v27, 0, sizeof(v27));
  XDCOBJ::vLock((XDCOBJ *)v27, a1);
  v35 = 0;
  if ( v27[0] && (*((_DWORD *)v27[0] + 6) & 0x10000) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v27, -2147483132);
    v34 = DC::bWorldToDeviceIdentity(v27[0]);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v32, a2, 0);
    if ( !v32[0] )
    {
LABEL_54:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
      if ( BackRect )
      {
        v21 = UserReferenceDwmApiPort();
        DwmSyncFlushAndWaitForBatch(v21);
      }
      goto LABEL_56;
    }
    if ( !v34 )
    {
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v39);
      if ( !v39[2] )
      {
        EngSetLastError(8u);
LABEL_7:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v39);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
        goto LABEL_57;
      }
      if ( !v43[0] || !RGNOBJ::bCreate((RGNOBJ *)v32, (struct EPATHOBJ *)v39, (struct EXFORMOBJ *)v43) )
        goto LABEL_7;
      v29 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v28, (struct EPATHOBJ *)v39, 1u, 0);
      if ( !v28 )
      {
        EngSetLastError(8u);
        if ( v29 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
        goto LABEL_7;
      }
      v35 = v32[0];
      v32[0] = v28;
      if ( v29 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v39);
    }
    if ( RGNOBJ::iComplexity((RGNOBJ *)v32) == 1 )
      goto LABEL_51;
    v47[0] = *((_DWORD *)v32[0] + 16);
    v47[1] = *((_DWORD *)v32[0] + 17);
    v47[2] = *((_DWORD *)v32[0] + 18);
    v47[3] = *((_DWORD *)v32[0] + 19);
    if ( (*((_BYTE *)v27[0] + 24) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v27, (struct ERECTL *)v47);
    v41[0] = v27;
    if ( !ERECTL::bEmpty((ERECTL *)v47) )
      BackRect = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v39, v5);
    if ( !*((_DWORD *)v27[0] + 126) )
    {
LABEL_51:
      v4 = 1;
LABEL_52:
      if ( !v34 )
      {
        REGION::vDeleteREGION(v32[0]);
        v32[0] = v35;
      }
      goto LABEL_54;
    }
    memset(v41, 0, sizeof(v41));
    v42 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v39, (struct XDCOBJ *)v27, 0);
    v6 = v32[0];
    v7 = v27[0];
    if ( !v32[0] )
      *((_DWORD *)v27[0] + 6) |= 0x10u;
    *((_DWORD *)v7 + 286) = v6;
    v8 = v27[0];
    v9 = *((_DWORD *)v27[0] + 126);
    v33 = v9;
    if ( (v40 & 1) != 0 )
    {
      if ( DC::bTightenRao(v27[0]) )
      {
        ERECTL::bOffsetAdd((ERECTL *)v47, (const struct _POINTL *)v27[0] + (*((_DWORD *)v27[0] + 7) & 1) + 131, 0);
        GreScaleValuesInternal(v10, v27, (struct XDCOBJ *)4, v24, v26);
        if ( DC::prgnRao(v27[0]) )
          v12 = DC::prgnRao(v11);
        else
          v12 = DC::prgnVisSnap(v11);
        v49 = 0;
        v50 = 0;
        v51 = 1;
        v52 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)v47, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v8 = v27[0];
          v13 = 1;
LABEL_47:
          v30 = v13;
          goto LABEL_48;
        }
        v14 = *(_DWORD *)(v9 + 88);
        v37 = v14;
        v15 = *((_DWORD *)v27[0] + 15);
        v38 = v15;
        EBRUSHOBJ::EBRUSHOBJ((EBRUSHOBJ *)&pbo);
        BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v28, v31);
        v16 = v28;
        v17 = 0;
        v31 = 0;
        if ( v28 )
        {
          v17 = v28;
          v31 = (HBRUSH)v28;
        }
        v30 = 0;
        if ( (*((_BYTE *)v27[0] + 24) & 0xE0) != 0 )
        {
          if ( !v17 )
            goto LABEL_42;
          if ( (*((_DWORD *)v17 + 6) & 0x100) == 0 )
          {
            rclBounds = pco.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v27, v28, &rclBounds.left);
            v14 = v37;
            v15 = v38;
            v16 = v28;
          }
        }
        if ( v31 )
        {
          bSyncBrushObj(v25);
          v23 = v14;
          v18 = v31;
          EBRUSHOBJ::vInitBrush(&pbo, v27[0], v31, v15, v23, v33, 1);
          v46 = (char *)v27[0] + 112;
          if ( ((_DWORD)v18[6] & 0x100) == 0 )
          {
            v19 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)&pbo,
                    *(_BYTE *)(*((_DWORD *)v27[0] + 255) + 232),
                    *(_BYTE *)(*((_DWORD *)v27[0] + 255) + 233));
            v20 = v33;
            ++*(_DWORD *)(v33 + 56);
            EngPaint((SURFOBJ *)(v20 + 16), &pco, &pbo, (POINTL *)v27[0] + 147, v19);
            v30 = 1;
          }
          if ( !v28 )
            goto LABEL_44;
          XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)&v28);
          DEC_SHARE_REF_CNT_LAZY0(v28);
          v16 = 0;
          v28 = 0;
        }
LABEL_42:
        if ( v16 )
        {
          XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)&v28);
          DEC_SHARE_REF_CNT(v28);
        }
LABEL_44:
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        v8 = v27[0];
LABEL_48:
        *((_DWORD *)v8 + 6) |= 0x10u;
        *((_DWORD *)v8 + 286) = 0;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v39);
        if ( v41[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v41);
        v4 = v30;
        goto LABEL_52;
      }
      v8 = v27[0];
    }
    v13 = XDCOBJ::bFullScreen(v27);
    goto LABEL_47;
  }
LABEL_56:
  v3 = v4;
LABEL_57:
  if ( v27[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v27);
  return v3;
}
