/*
 * XREFs of _NtGdiGetPixel@12 @ 0xBFE70
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE (-SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall NtGdiGetPixel(HDC a1, struct _POINTL a2)
{
  int v2; // edx
  DEVLOCKOBJ *v3; // ecx
  int v4; // esi
  DC *v5; // edi
  DC *v6; // ecx
  struct REGION *v7; // eax
  int IsCMYKColor; // ebx
  struct _SURFOBJ *v9; // eax
  int (__stdcall *v10)(struct _SURFOBJ *, int, _DWORD, XLATEOBJ *const, int *, struct _POINTL *); // edx
  int v12; // [esp+44h] [ebp-130h]
  int v13; // [esp+48h] [ebp-12Ch]
  int v14; // [esp+54h] [ebp-120h] BYREF
  DC *v15[3]; // [esp+58h] [ebp-11Ch] BYREF
  struct _POINTL v16; // [esp+64h] [ebp-110h] BYREF
  SURFACE *v17; // [esp+6Ch] [ebp-108h] BYREF
  int v18; // [esp+70h] [ebp-104h]
  int v19; // [esp+74h] [ebp-100h]
  _DWORD v20[6]; // [esp+78h] [ebp-FCh] BYREF
  _BYTE v21[20]; // [esp+90h] [ebp-E4h] BYREF
  _DWORD v22[3]; // [esp+A4h] [ebp-D0h] BYREF
  __int16 v23; // [esp+B0h] [ebp-C4h]
  _DWORD v24[3]; // [esp+C0h] [ebp-B4h] BYREF
  int v25; // [esp+CCh] [ebp-A8h] BYREF
  int v26; // [esp+D0h] [ebp-A4h]
  int v27; // [esp+D4h] [ebp-A0h]
  int v28; // [esp+D8h] [ebp-9Ch]
  struct _POINTL v29; // [esp+DCh] [ebp-98h] BYREF
  int v30; // [esp+E4h] [ebp-90h]
  int v31; // [esp+E8h] [ebp-8Ch]
  _BYTE v32[4]; // [esp+ECh] [ebp-88h] BYREF
  _BYTE v33[64]; // [esp+F0h] [ebp-84h] BYREF
  int v34; // [esp+130h] [ebp-44h]
  int v35; // [esp+134h] [ebp-40h]
  int v36; // [esp+15Ch] [ebp-18h]
  int v37; // [esp+164h] [ebp-10h]

  v14 = -1;
  v15[1] = 0;
  v15[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    bSpDwmValidateSurface(a2.x, (struct XDCOBJ *)v15, (struct XDCOBJ *)a2.y, 1, 1, v12, v13);
    v23 = 256;
    memset(v22, 0, sizeof(v22));
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v21);
    if ( DEVLOCKOBJ::bLock(v3, (struct XDCOBJ *)v15, v2) )
    {
      v4 = *((_DWORD *)v15[0] + 126);
      if ( v4 )
      {
        if ( SrcSurfaceAccessCheck(*((_DWORD **)v15[0] + 126)) )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v24, (struct XDCOBJ *)v15, 516);
          v16 = a2;
          EXFORMOBJ::bXform((EXFORMOBJ *)v24, &v16, 1u);
          v5 = v15[0];
          v29 = v16;
          v30 = v16.x + 1;
          v31 = v16.y + 1;
          ERECTL::bOffsetAdd((ERECTL *)&v29, (const struct _POINTL *)v15[0] + (*((_DWORD *)v15[0] + 7) & 1) + 131, 0);
          v7 = DC::prgnRao(v5) ? DC::prgnRao(v6) : DC::prgnVisSnap(v6);
          v34 = 0;
          v35 = 0;
          v36 = 1;
          v37 = 0;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v7, (struct ERECTL *)&v29, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v33) )
          {
            IsCMYKColor = DC::bIsCMYKColor(v15[0]);
            v25 = 0;
            v14 = 0;
            v20[3] = 0;
            v20[1] = 1;
            v26 = 0;
            v20[2] = 1;
            v20[4] = 0;
            v20[5] = 1;
            v27 = 0;
            v28 = 0;
            v20[0] = *(_DWORD *)(v4 + 60);
            if ( v20[0] == 1 )
            {
              v25 = 7;
              v27 = 8;
            }
            else if ( v20[0] == 2 )
            {
              v25 = 1;
              v27 = 2;
            }
            else
            {
              v27 = 1;
            }
            v17 = 0;
            LOBYTE(v18) = 0;
            v19 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v17, (struct _DEVBITMAPINFO *)v20, &v14, 0, 0, 0, 0, 0, 1, 0, 0) )
            {
              v26 = 0;
              v28 = 1;
              v9 = SURFACE::pSurfobj(v17);
              if ( v10(v9, v4 + 16, 0, xloIdent, &v25, &v29) )
              {
                if ( !IsCMYKColor )
                  v14 = ulIndexToRGB(*(_DWORD *)(v4 + 88), *((_DWORD *)v15[0] + 15), v14);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v17);
          }
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    if ( v22[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v22);
  }
  return v14;
}
