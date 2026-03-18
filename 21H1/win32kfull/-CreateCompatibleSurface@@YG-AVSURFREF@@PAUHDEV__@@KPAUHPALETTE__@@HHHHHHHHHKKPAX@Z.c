/*
 * XREFs of ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90
 * Callers:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94 (-vProfileDriver@PDEVOBJ@@QAEXXZ.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 * Callees:
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ??0EPALOBJ@@QAE@PAUHPALETTE__@@@Z @ 0xA9642 (--0EPALOBJ@@QAE@PAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z @ 0xAEAAA (-bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z.c)
 *     _GreDwmUseDeviceBitmaps@0 @ 0xCEFCA (_GreDwmUseDeviceBitmaps@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?pfnBitBlt@SURFACE@@QAEP6GHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@ZXZ @ 0x1D48BD (-pfnBitBlt@SURFACE@@QAEP6GHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU.c)
 */

_DWORD *__fastcall CreateCompatibleSurface(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        HPALETTE a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        _DWORD *a15,
        int a16)
{
  int v17; // edx
  bool v19; // zf
  int v20; // ebx
  int v21; // ebx
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // eax
  SURFREF *v25; // ecx
  int (__stdcall *v26)(int, int, int, int, int, _DWORD, int, _DWORD *, int *); // ebx
  int v27; // eax
  int v28; // eax
  int v29; // edx
  int (__stdcall *v30)(_DWORD, int, int, int); // ecx
  _DWORD *v31; // eax
  _DWORD *v32; // esi
  int v33; // eax
  int (__stdcall *v34)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // eax
  int v35; // eax
  _DWORD *v37; // [esp-4h] [ebp-64h]
  _DWORD v38[4]; // [esp+10h] [ebp-50h] BYREF
  HPALETTE v39; // [esp+20h] [ebp-40h]
  int v40; // [esp+24h] [ebp-3Ch]
  int v41; // [esp+28h] [ebp-38h] BYREF
  int (__stdcall *v42)(_DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD *, int *); // [esp+2Ch] [ebp-34h] BYREF
  int v43; // [esp+30h] [ebp-30h] BYREF
  _DWORD *v44; // [esp+34h] [ebp-2Ch] BYREF
  char v45; // [esp+38h] [ebp-28h]
  int v46; // [esp+3Ch] [ebp-24h]
  int v47; // [esp+40h] [ebp-20h] BYREF
  _DWORD *v48; // [esp+44h] [ebp-1Ch] BYREF
  int v49; // [esp+48h] [ebp-18h] BYREF
  _DWORD v50[4]; // [esp+4Ch] [ebp-14h] BYREF

  v38[3] = 0;
  v49 = a14;
  v48 = a15;
  v43 = a16;
  v17 = a3;
  v38[1] = a5;
  v38[2] = a6;
  v39 = a4;
  v38[0] = a3;
  v40 = 1;
  v19 = (a2[6] & 0x8000) == 0;
  v47 = (int)a2;
  if ( !v19 )
    v40 = (int)&loc_40001;
  v20 = a7;
  if ( !a7 )
  {
    if ( !a9 )
    {
LABEL_50:
      v35 = a8;
      goto LABEL_51;
    }
    v20 = bRemoteDriverNeedsDeviceBitmaps(&v47);
    a7 = v20;
    if ( !v20 )
      goto LABEL_47;
    v17 = v38[0];
  }
  if ( a9 )
  {
    v20 = GreDwmUseDeviceBitmaps();
    a7 = v20;
  }
  if ( v20 )
  {
    v21 = 0;
    if ( a9 )
    {
      if ( !v49 )
        v49 = 87;
      v42 = (int (__stdcall *)(_DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD *, int *))a2[569];
      if ( v42 )
      {
        v41 = 0;
        v22 = 4 * (a12 != 0) + 1;
        v47 = v22;
        if ( a13 )
        {
          v22 |= 8u;
          v47 = v22;
        }
        v23 = v42(a2[277], a5, a6, v17, v22, 0, 0, v48, &v41);
        v21 = v23;
        if ( v23 )
        {
          LOBYTE(v17) = 5;
          v24 = (_DWORD *)HmgShareLockCheck(v23, v17);
          v48 = v24;
          if ( v24 )
          {
            if ( a13 )
              v24[19] |= 0x400u;
            v24[19] |= 1u;
            v24[101] = v41;
            v24[21] = v49;
            goto LABEL_21;
          }
          goto LABEL_22;
        }
      }
      if ( a10 )
        goto LABEL_25;
    }
    else
    {
      if ( a11 )
      {
        v26 = (int (__stdcall *)(int, int, int, int, int, _DWORD, int, _DWORD *, int *))a2[569];
        if ( v26 )
        {
          v27 = a2[277];
          v47 = 4 * (a12 != 0) + 2;
          v28 = v26(v27, a5, a6, v17, v47, 0, v49, v48, &v43);
          v21 = v28;
          if ( v28 )
          {
            LOBYTE(v29) = 5;
            v24 = (_DWORD *)HmgShareLockCheck(v28, v29);
            v48 = v24;
            if ( v24 )
            {
              v24[19] |= 8u;
              v24[101] = v43;
LABEL_21:
              v24[20] = v47;
              SURFREF::vUnlock((SURFREF *)&v48);
              goto LABEL_34;
            }
LABEL_22:
            *a1 = 0;
            v25 = (SURFREF *)&v48;
LABEL_23:
            SURFREF::vUnlock(v25);
            return a1;
          }
        }
LABEL_25:
        *a1 = 0;
        return a1;
      }
      v30 = (int (__stdcall *)(_DWORD, int, int, int))a2[485];
      if ( !v30 )
      {
        v20 = a7;
        goto LABEL_50;
      }
      v21 = v30(a2[277], a5, a6, v17);
    }
    if ( !v21 )
    {
LABEL_46:
      v20 = a7;
      goto LABEL_47;
    }
LABEL_34:
    if ( v21 != -1 )
    {
      LOBYTE(v17) = 5;
      v31 = (_DWORD *)HmgShareLockCheck(v21, v17);
      v32 = v31;
      if ( v31 )
      {
        v31[18] |= 0x4804000u;
        if ( v39 )
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v49, v39);
          v33 = v49;
          if ( v49 )
          {
            v49 = 0;
            v32[22] = v33;
          }
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v49);
        }
        if ( !a9 && (!a11 || !v43) )
        {
          v50[2] = a5;
          v50[3] = a6;
          v50[0] = 0;
          v50[1] = 0;
          v34 = SURFACE::pfnBitBlt((SURFACE *)v32);
          v34((struct _SURFOBJ *)(v32 + 4), 0, 0, 0, 0, (struct _RECTL *)v50, 0, 0, 0, 0, 0);
        }
        EtwPhysicalSurfCreateEvent(v21, v21 >> 31, 1, v32[101], (int)v32[101] >> 31, 1);
      }
      v42 = 0;
      v25 = (SURFREF *)&v42;
      *a1 = v32;
      goto LABEL_23;
    }
    goto LABEL_46;
  }
LABEL_47:
  if ( !a9 )
    goto LABEL_50;
  v35 = 1;
LABEL_51:
  v40 |= v35 != 0 ? 0x800 : 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v44, (struct _DEVBITMAPINFO *)v38, 0, 0, 0, 0, 0, 0, 1, 0, 0);
  if ( v44 )
  {
    v45 |= 1u;
    v44[18] |= 0x800000u;
    v44[18] |= 0x4000000u;
    v44[7] = a2;
    if ( v44[39] )
      v44[18] |= 0x4000u;
    else
      v44[18] |= 0x200u;
    EtwPhysicalSurfCreateEvent(v44[5], (int)v44[5] >> 31, 0, 0, 0, v20);
    if ( v44 )
    {
      v37 = v44;
      *a1 = v44;
      INC_SHARE_REF_CNT(v37);
    }
  }
  else
  {
    *a1 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v44);
  return a1;
}
