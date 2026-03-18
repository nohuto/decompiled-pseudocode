/*
 * XREFs of ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1
 * Callers:
 *     ?bSpTransferShape@@YGHPAVSPRITE@@0@Z @ 0x1DE52B (-bSpTransferShape@@YGHPAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z @ 0x1DE69D (-bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950 (-bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 *     ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z @ 0xA135A (-psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ?bLoadSource@MULTISURF@@QAEHPAUHDEV__@@@Z @ 0x206199 (-bLoadSource@MULTISURF@@QAEHPAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 */

int __userpurge bSpCreateShape@<eax>(
        struct _POINTL *a1@<edx>,
        int *a2@<ecx>,
        struct SPRITE *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct PALETTE *a8,
        int *a9,
        unsigned int a10,
        struct _RECTL *a11)
{
  int v12; // esi
  int v13; // ecx
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // ecx
  struct _SPRITESTATE *v15; // edx
  unsigned int v16; // eax
  SURFOBJ *Surface; // eax
  int v18; // eax
  ULONG v19; // ecx
  int v20; // edx
  int v21; // ecx
  struct _SURFOBJ *v22; // edi
  struct _RECTL *v23; // ecx
  struct _SURFOBJ *v24; // esi
  HDEV v25; // esi
  int v26; // esi
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // eax
  LONG *p_lDelta; // edi
  HSURF v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // ecx
  int v34; // [esp+0h] [ebp-C4h]
  int v35; // [esp+4h] [ebp-C0h]
  _DWORD v36[4]; // [esp+Ch] [ebp-B8h] BYREF
  int v37; // [esp+1Ch] [ebp-A8h]
  struct _SPRITESTATE *v38; // [esp+20h] [ebp-A4h]
  int v39; // [esp+24h] [ebp-A0h] BYREF
  int v40; // [esp+28h] [ebp-9Ch] BYREF
  struct _POINTL *v41; // [esp+2Ch] [ebp-98h]
  unsigned int v42; // [esp+30h] [ebp-94h]
  int v43; // [esp+34h] [ebp-90h]
  int v44; // [esp+38h] [ebp-8Ch]
  struct _SURFOBJ *v45; // [esp+3Ch] [ebp-88h]
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [esp+40h] [ebp-84h]
  int v47; // [esp+44h] [ebp-80h]
  _BYTE v48[28]; // [esp+48h] [ebp-7Ch] BYREF
  int v49; // [esp+64h] [ebp-60h]
  char v50; // [esp+68h] [ebp-5Ch]
  int v51; // [esp+6Ch] [ebp-58h]
  int v52; // [esp+8Ch] [ebp-38h]
  int v53; // [esp+90h] [ebp-34h]
  int dhsurf; // [esp+9Ch] [ebp-28h] BYREF
  HSURF hsurf; // [esp+A0h] [ebp-24h]
  DHPDEV dhpdev; // [esp+A4h] [ebp-20h]
  HDEV hdev; // [esp+A8h] [ebp-1Ch]
  int v58[2]; // [esp+ACh] [ebp-18h] BYREF
  int v59; // [esp+B4h] [ebp-10h] BYREF
  int *v60; // [esp+B8h] [ebp-Ch]

  v45 = (struct _SURFOBJ *)a3;
  v37 = (int)a4;
  v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))a7;
  v12 = a2[3];
  v47 = (int)a8;
  v60 = a9;
  v13 = *(_DWORD *)(v12 + 88);
  v41 = a1;
  v43 = 0;
  v44 = v12;
  GreAcquireSemaphore(v13);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v12 + 88), 8);
  v39 = a2[25];
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v39);
  v14 = v46;
  a2[25] = (int)a6;
  v15 = (struct _SPRITESTATE *)((char *)a5->dhpdev - (char *)a5->dhsurf);
  v16 = (char *)a5->hdev - (char *)a5->hsurf;
  v38 = v15;
  v42 = v16;
  if ( !v14 )
  {
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_DWORD *)(a2[3] + 16)
                                                                                               + 44);
    v46 = v14;
  }
  Surface = (SURFOBJ *)a2[22];
  if ( !Surface
    || ((v12 = v44, Surface->iType) || (Surface->fjBitmap & 0x20) != 0) && v47
    || (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))Surface->iBitmapFormat != v14
    || Surface->sizlBitmap.cx < (int)v15
    || Surface->sizlBitmap.cy < (signed int)v42 )
  {
    if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      if ( (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))Surface->iBitmapFormat != v14 )
      {
        EngUnlockSurface((SURFOBJ *)a2[22]);
        *a2 &= ~0x40u;
        Surface = 0;
        a2[22] = 0;
        a2[44] = 0;
        v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))a2[2];
        if ( v14 )
          *((_DWORD *)v14 + 2) &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface((SURFOBJ *)a2[22]);
      v14 = 0;
      Surface = 0;
    }
    if ( (*(_BYTE *)a2 & 0x40) == 0 )
    {
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))a2[44];
      if ( v14 )
      {
        if ( v47 )
        {
          Surface = EngLockSurface((HSURF)a2[44]);
          if ( !Surface )
            goto LABEL_23;
          *a2 |= 0x40u;
        }
      }
    }
    if ( Surface )
    {
LABEL_24:
      a2[22] = (int)Surface;
      goto LABEL_25;
    }
LABEL_23:
    Surface = psoSpCreateSurface(
                (ULONG)v46,
                (HDEV *)a2[3],
                (SIZEL)__PAIR64__(v42, (unsigned int)v38),
                (int)v14,
                v34,
                v35);
    goto LABEL_24;
  }
LABEL_25:
  EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v12 + 88));
  GreReleaseSemaphoreInternal(*(_DWORD *)(v12 + 88));
  GreAcquireSemaphoreSharedInternal(*(_DWORD *)(v12 + 88));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_DWORD *)(v12 + 88));
  v47 = a2[22];
  if ( v47 )
  {
    v18 = -(int)a5->dhsurf;
    v43 = 1;
    a2[23] = v18;
    a2[24] = -(int)a5->hsurf;
    a2[26] = (int)v46;
    if ( a6 )
      v19 = *a6[3].pulXlate | a6[3].pulXlate[2];
    else
      v19 = 0;
    a2[27] = v19;
    dhsurf = (int)a5->dhsurf;
    hsurf = a5->hsurf;
    dhpdev = a5->dhpdev;
    hdev = a5->hdev;
    if ( v60 )
    {
      v58[0] = *v60;
      v58[1] = v60[1];
      v59 = v60[2];
      v60 = (int *)v60[3];
      ERECTL::bOffsetSubtract((ERECTL *)v58, (const struct _POINTL *)(a2 + 23), 0);
      ERECTL::operator*=(&dhsurf, v58);
    }
    if ( !ERECTL::bEmpty((ERECTL *)&dhsurf) )
    {
      v21 = *a2;
      if ( (*a2 & 0x40) == 0 || (v21 & 0x200) != 0 && *(HSURF *)(v20 + 204) == v45->hsurf )
      {
        v36[0] = dhsurf;
        v36[1] = hsurf;
        v36[2] = dhpdev;
        v36[3] = hdev;
        ERECTL::bOffsetAdd((ERECTL *)v36, v41, 0);
        v22 = v45;
        v49 = 0;
        v50 = 0;
        v51 = 0;
        MULTISURF::vInit((MULTISURF *)v48, v45, v23);
        v24 = (struct _SURFOBJ *)v47;
        v59 = 0;
        v40 = 0;
        if ( (*(_DWORD *)(v47 + 56) & 0x400) != 0 )
        {
          v25 = *(HDEV *)(v47 + 12);
          if ( !MULTISURF::bLoadSource((MULTISURF *)v48, v25) )
          {
            v26 = v44;
            EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v44 + 88));
            GreReleaseSemaphoreInternal(*(_DWORD *)(v26 + 88));
            GreAcquireSemaphore(*(_DWORD *)(v26 + 88));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v26 + 88), 8);
            vSpDeleteSurface((SURFOBJ *)a2[22]);
            a2[22] = 0;
            EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v26 + 88));
            GreReleaseSemaphoreInternal(*(_DWORD *)(v26 + 88));
            SURFREFVIEW::bUnMap((SURFREFVIEW *)&v40);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)&v59);
            MULTISURF::~MULTISURF((MULTISURF *)v48);
            return 0;
          }
          v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)v25 + 494);
          v24 = (struct _SURFOBJ *)v47;
          v46 = v28;
        }
        else if ( ((int)v22[1].hsurf & 0x400) != 0 )
        {
          v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)v22->hdev + 494);
        }
        else
        {
          v46 = EngCopyBits;
        }
        if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v59, (struct _SURFOBJ *)v52)
          && SURFREFVIEW::bMap((SURFREFVIEW *)&v40, v24) )
        {
          p_lDelta = 0;
          v30 = v24[1].hsurf;
          if ( ((unsigned int)v30 & 0x80004000) != 0 && ((unsigned __int16)v30 & 0x200) == 0 )
          {
            p_lDelta = &v24[-1].lDelta;
            GreLockDisplayDevice(v24->hdev);
          }
          v31 = 0;
          v32 = v52;
          if ( v52 )
          {
            v33 = *(_DWORD *)(v52 + 56);
            if ( (v33 & 0x80004000) != 0 && (v33 & 0x200) == 0 )
            {
              v31 = v52 - 16;
              GreLockDisplayDevice(*(_DWORD *)(v52 - 16 + 28));
              v32 = v52;
            }
          }
          OffCopyBits(v47, (int)&gptlZero, v32, 0, v37, (int)&dhsurf, v53);
          if ( (*a2 & 0x200) != 0 && a2[22] == v47 && *(HSURF *)(v47 + 204) == v45->hsurf )
            *a2 |= 0x80u;
          if ( v31 )
            GreUnlockDisplayDevice(*(_DWORD *)(v31 + 28));
          if ( p_lDelta )
            GreUnlockDisplayDevice(p_lDelta[7]);
        }
        else
        {
          v43 = 0;
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v40);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v59);
        MULTISURF::~MULTISURF((MULTISURF *)v48);
        v12 = v44;
      }
      else
      {
        *a2 = v21 | 0x80;
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v12 + 88));
  GreReleaseSemaphoreInternal(*(_DWORD *)(v12 + 88));
  return v43;
}
