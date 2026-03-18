/*
 * XREFs of _NtGdiSetPixel@16 @ 0xC0162
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC (-DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     ??0EBRUSHOBJ@@QAE@XZ @ 0xC054A (--0EBRUSHOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vUnlock@XDCOBJ@@QAEXXZ @ 0xF5D31 (-vUnlock@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiSetPixel(HDC a1, struct _POINTL a2, int a3)
{
  int v3; // ebx
  DC *v4; // eax
  int v5; // edx
  DEVLOCKOBJ *v6; // ecx
  DC *v7; // esi
  _DWORD *v8; // edi
  DC *v9; // ecx
  struct REGION *v10; // eax
  XCLIPOBJ *v11; // esi
  struct ECLIPOBJ *v12; // ecx
  DC *v13; // edi
  int v14; // edi
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // edx
  int v18; // eax
  _DWORD *v20; // [esp+3Ch] [ebp-E0h]
  int v21; // [esp+3Ch] [ebp-E0h]
  ROP4 v22; // [esp+3Ch] [ebp-E0h]
  DC *v23[3]; // [esp+40h] [ebp-DCh] BYREF
  XCLIPOBJ *IsCMYKColor; // [esp+4Ch] [ebp-D0h]
  struct _POINTL v25; // [esp+50h] [ebp-CCh] BYREF
  _BYTE v26[20]; // [esp+58h] [ebp-C4h] BYREF
  int v27; // [esp+6Ch] [ebp-B0h]
  int v28; // [esp+70h] [ebp-ACh]
  int v29; // [esp+74h] [ebp-A8h]
  __int16 v30; // [esp+78h] [ebp-A4h]
  _DWORD v31[3]; // [esp+88h] [ebp-94h] BYREF
  _DWORD v32[2]; // [esp+94h] [ebp-88h] BYREF
  int v33; // [esp+9Ch] [ebp-80h]
  int v34; // [esp+A0h] [ebp-7Ch]
  int v35; // [esp+A4h] [ebp-78h]
  struct _POINTL v36; // [esp+F8h] [ebp-24h] BYREF
  int v37; // [esp+100h] [ebp-1Ch]
  int v38; // [esp+104h] [ebp-18h]
  struct _POINTL v39; // [esp+108h] [ebp-14h] BYREF
  int v40; // [esp+110h] [ebp-Ch]
  int v41; // [esp+114h] [ebp-8h]

  v23[1] = 0;
  v23[2] = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)v23, a1);
  if ( !v23[0] || (*((_DWORD *)v23[0] + 6) & 0x10000) != 0 )
  {
    XDCOBJ::vUnlock((XDCOBJ *)v23);
    return v3;
  }
  v25 = a2;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v31, (struct XDCOBJ *)v23, 516);
  EXFORMOBJ::bXform((EXFORMOBJ *)v31, &v25, 1u);
  v39 = v25;
  v40 = v25.x + 1;
  v41 = v25.y + 1;
  v4 = v23[0];
  if ( (*((_BYTE *)v23[0] + 24) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate((XDCOBJ *)v23, (struct ERECTL *)&v39);
    v4 = v23[0];
  }
  if ( *((_DWORD *)v4 + 126) )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 256;
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v26);
    if ( DEVLOCKOBJ::bLock(v6, (struct XDCOBJ *)v23, v5) )
    {
      v7 = v23[0];
      v8 = (_DWORD *)*((_DWORD *)v23[0] + 126);
      v20 = v8;
      if ( !ERECTL::bOffsetAdd((ERECTL *)&v39, (const struct _POINTL *)v23[0] + (*((_DWORD *)v23[0] + 7) & 1) + 131, 1)
        || (unsigned int)(v39.x + 134217726) > 0xFFFFFFC
        || (unsigned int)(v40 + 134217726) > 0xFFFFFFC
        || (unsigned int)(v39.y + 134217726) > 0xFFFFFFC
        || (unsigned int)(v41 + 134217726) > 0xFFFFFFC )
      {
        EngSetLastError(0x57u);
        goto LABEL_44;
      }
      if ( v39.x >= *((_DWORD *)v7 + 258)
        && v40 <= *((_DWORD *)v7 + 260)
        && v39.y >= *((_DWORD *)v7 + 259)
        && v41 <= *((_DWORD *)v7 + 261)
        || ((IsCMYKColor = (DC *)((char *)v7 + 1568), !DC::prgnRao(v7))
          ? (v10 = DC::prgnVisSnap(v9))
          : (v10 = DC::prgnRao(v9)),
            v11 = IsCMYKColor,
            XCLIPOBJ::vSetup(IsCMYKColor, v10, (struct ERECTL *)&v39, 2),
            !ERECTL::bEmpty((XCLIPOBJ *)((char *)v11 + 4))) )
      {
        if ( !DestSurfaceAccessCheck(v8) )
        {
          EngSetLastError(5u);
LABEL_44:
          XDCOBJ::vUnlockFast((XDCOBJ *)v23);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v26);
          return v3;
        }
        v13 = v23[0];
        if ( (*((_BYTE *)v23[0] + 24) & 0xE0) != 0 )
        {
          v36 = v39;
          v37 = v40;
          v38 = v41;
          XDCOBJ::vAccumulateTight((XDCOBJ *)v23, v12, &v36.x);
          v13 = v23[0];
        }
        v14 = *((_DWORD *)v13 + 15);
        v15 = v20[22];
        EBRUSHOBJ::EBRUSHOBJ((EBRUSHOBJ *)v32);
        IsCMYKColor = (XCLIPOBJ *)DC::bIsCMYKColor(v23[0]);
        if ( IsCMYKColor )
        {
          v32[0] = a3;
          v33 = 6;
          if ( gbMultiMonMismatchColor )
          {
            v34 = a3;
            v35 = a3;
          }
        }
        else
        {
          v32[0] = ulGetNearestIndexFromColorref(v15, v14, a3, 1);
          v16 = *((_DWORD *)v23[0] + 20);
          if ( (v16 & 5) != 0 )
          {
            v33 = 2;
          }
          else if ( (v16 & 2) != 0 )
          {
            v33 = 1;
          }
          if ( gbMultiMonMismatchColor )
          {
            v34 = a3;
            v35 = rgbFromColorref(v15, v14, a3);
          }
        }
        v17 = v20;
        ++v20[14];
        v21 = (unsigned __int8)gaMix[*(_BYTE *)(*((_DWORD *)v23[0] + 255) + 232) & 0xF];
        v22 = (v21 << 8) | v21;
        if ( (v17[18] & 1) != 0 )
          v18 = (*(int (__stdcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, struct _POINTL *, _DWORD, _DWORD, _DWORD *, char *, ROP4))(v17[7] + 1972))(
                  v17 + 4,
                  0,
                  0,
                  0,
                  0,
                  &v39,
                  0,
                  0,
                  v32,
                  (char *)v23[0] + 1176,
                  v22);
        else
          v18 = EngBitBlt(
                  (SURFOBJ *)(v17 + 4),
                  0,
                  0,
                  0,
                  0,
                  (RECTL *)&v39,
                  0,
                  0,
                  (BRUSHOBJ *)v32,
                  (POINTL *)v23[0] + 147,
                  v22);
        if ( v18 )
        {
          if ( IsCMYKColor )
            v3 = v32[0];
          else
            v3 = ulIndexToRGB(v15, v14, v32[0]);
        }
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)v32);
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v26);
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v23);
  return v3;
}
