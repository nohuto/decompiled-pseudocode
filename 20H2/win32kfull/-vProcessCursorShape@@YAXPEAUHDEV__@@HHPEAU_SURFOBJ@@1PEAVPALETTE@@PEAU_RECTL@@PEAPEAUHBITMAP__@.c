/*
 * XREFs of ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C0086FD8
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00CE308 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00865A0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C0087364 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1C00875F0 (EngEraseSurface.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall vProcessCursorShape(
        HDEV a1,
        int a2,
        int a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct PALETTE *a6,
        struct _RECTL *a7,
        HBITMAP *a8)
{
  HBITMAP v8; // rcx
  LONG v9; // r12d
  LONG cy; // eax
  LONG v13; // edx
  LONG v14; // eax
  LONG cx; // ecx
  LONG v16; // edx
  HDEV hdev; // rax
  SURFOBJ *v18; // r15
  XLATEOBJ *v19; // rbx
  __int64 v20; // r8
  struct _RECTL *v21; // rdi
  LONG bottom; // ecx
  int v23; // eax
  __int64 v25; // [rsp+70h] [rbp-71h] BYREF
  char v26; // [rsp+78h] [rbp-69h]
  int v27; // [rsp+7Ch] [rbp-65h]
  LONG v28; // [rsp+80h] [rbp-61h]
  int v29; // [rsp+84h] [rbp-5Dh]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-59h] BYREF
  XLATEOBJ *v31; // [rsp+90h] [rbp-51h] BYREF
  _DWORD v32[4]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-39h]
  int v34; // [rsp+B0h] [rbp-31h]
  int v35; // [rsp+B4h] [rbp-2Dh]
  HBITMAP *v36; // [rsp+B8h] [rbp-29h]
  RECTL prcl; // [rsp+C0h] [rbp-21h] BYREF
  RECTL v38; // [rsp+D0h] [rbp-11h] BYREF
  RECTL prclDest; // [rsp+E0h] [rbp-1h] BYREF

  v8 = *a8;
  v9 = a2 != 0 ? 3 : 0;
  v29 = a2;
  *(_QWORD *)&v38.left = a7;
  v36 = a8;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v32[3] = 0;
  v35 = 0;
  *(_QWORD *)&prcl.right = 0LL;
  prclDest = 0LL;
  if ( v8 )
  {
    GreDeleteObject(v8);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v13 = a4->sizlBitmap.cy >> 31;
  cy = a4->sizlBitmap.cy;
  *(_QWORD *)&prcl.left = 0LL;
  v14 = __SPAIR64__(v13, cy) / 2;
  cx = a4->sizlBitmap.cx;
  v28 = v14;
  v16 = v14;
  prcl.bottom = v14;
  prcl.right = cx;
  if ( a2 )
  {
    cx += 9;
    v16 = v14 + 7;
    prcl.right = cx;
    prcl.bottom = v14 + 7;
  }
  v32[1] = cx;
  v34 = 1;
  v32[2] = v16;
  v32[0] = 6;
  if ( psoSrc && (hdev = psoSrc[1].hdev) != 0LL )
    v33 = *(_QWORD *)hdev;
  else
    v33 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v25, (struct _DEVBITMAPINFO *)v32, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    v18 = (SURFOBJ *)((v25 + 24) & -(__int64)(v25 != 0));
    v19 = 0LL;
    v31 = 0LL;
    pxlo = 0LL;
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v31,
                         0LL,
                         0LL,
                         ppalMono,
                         gppalRGB,
                         ppalDefault,
                         ppalDefault,
                         0,
                         0xFFFFFF,
                         0,
                         0) )
    {
      if ( !psoSrc )
      {
        v21 = *(struct _RECTL **)&v38.left;
LABEL_15:
        if ( v29 )
        {
          EngEraseSurface(v18, &prcl, 0);
          v23 = bShadowAlphaCursor(v18, a4, psoSrc, v31, v19, v21, a3);
        }
        else
        {
          v23 = a3;
        }
        if ( v23 )
        {
          LOBYTE(v20) = 5;
          v26 |= 1u;
          HmgSetOwner(*(_QWORD *)(v25 + 32), 0LL, v20);
          *v36 = *(HBITMAP *)(v25 + 32);
        }
        goto LABEL_19;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&pxlo, 0LL, 0LL, a6, gppalRGB, ppalDefault, ppalDefault, 0, 0, 0, 0) )
      {
        v19 = pxlo;
        prclDest.right = a4->sizlBitmap.cx;
        prclDest.bottom = v28;
        EngCopyBits(v18, psoSrc, 0LL, pxlo, &prclDest, &gptlZero);
        v21 = *(struct _RECTL **)&v38.left;
        vCalculateCursorBounds(a4, v18, *(struct _RECTL **)&v38.left);
        if ( (v19->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
        {
          EngEraseSurface(v18, &prcl, 0);
          v38.right = v9 + v21->right;
          bottom = v21->bottom;
          v38.left = v9;
          v38.bottom = v9 + bottom;
          v38.top = v9;
          EngCopyBits(v18, psoSrc, 0LL, 0LL, &v38, &gptlZero);
        }
        goto LABEL_15;
      }
    }
LABEL_19:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v25);
}
