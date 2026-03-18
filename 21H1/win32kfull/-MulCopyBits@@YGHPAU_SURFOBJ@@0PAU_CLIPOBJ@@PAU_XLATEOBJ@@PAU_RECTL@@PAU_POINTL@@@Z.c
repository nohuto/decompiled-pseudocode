/*
 * XREFs of ?MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x202500
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z @ 0x201818 (-IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 */

int __stdcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  struct _CLIPOBJ *v6; // edx
  struct _SURFOBJ *v7; // ecx
  int v8; // esi
  HDEV hdev; // esi
  int v10; // eax
  SURFOBJ *v11; // edx
  int v12; // ecx
  SURFOBJ *v13; // ecx
  int v14; // eax
  SURFOBJ *v15; // edx
  bool v16; // zf
  DHSURF dhsurf; // eax
  int v18; // eax
  int v20; // [esp+34h] [ebp-C4h]
  DHSURF v21; // [esp+44h] [ebp-B4h] BYREF
  _DWORD v22[2]; // [esp+48h] [ebp-B0h] BYREF
  struct _SURFOBJ *v23; // [esp+50h] [ebp-A8h]
  int v24; // [esp+54h] [ebp-A4h] BYREF
  _BYTE v25[48]; // [esp+58h] [ebp-A0h] BYREF
  int v26; // [esp+88h] [ebp-70h]
  struct _SURFOBJ *v27; // [esp+8Ch] [ebp-6Ch]
  CLIPOBJ *v28; // [esp+90h] [ebp-68h]
  _BYTE v29[68]; // [esp+A0h] [ebp-58h] BYREF
  SURFOBJ *v30; // [esp+E4h] [ebp-14h]

  v23 = a2;
  if ( !IsMetaRedirectionBitmap((int)a2) )
    return MulBitBlt(a1, v7, 0, v6, a4, a5, a6, 0, 0, 0, 0xCCCCu);
  v8 = 1;
  v20 = 1;
  if ( MSURF::bFindSurface((MSURF *)v25, v7, v6, a5) )
  {
    do
    {
      v22[0] = 0;
      hdev = v27->hdev;
      v21 = (DHSURF)hdev;
      if ( ((_DWORD)hdev[354] & 0x8000) == 0 )
      {
        if ( ((int)v23[1].dhpdev & 0x10) != 0 )
          SURFREFVIEW::bMap((SURFREFVIEW *)v22, v27);
        if ( IsMetaDevBitmapForMirroring((int)a1) )
        {
          MULTISURF::MULTISURF((MULTISURF *)v29, a1);
          if ( ((int)v27[1].hsurf & 0x400) != 0 )
            v10 = (*(int (__stdcall **)(SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_DWORD *)(v26 + 40) + 1976))(
                    v30,
                    v27,
                    v28,
                    a4,
                    a5,
                    a6);
          else
            v10 = EngCopyBits(v30, v27, v28, a4, a5, a6);
          v20 &= v10;
          MULTISURF::~MULTISURF((MULTISURF *)v29);
        }
      }
      if ( IsMetaDevBitmapForMirroring((int)a1) )
      {
        v13 = *(SURFOBJ **)(*((_DWORD *)a1->dhsurf + 1) + 4 * *(_DWORD *)(v26 + 8));
        if ( !v13 )
          goto LABEL_28;
        if ( ((int)v11[1].hsurf & 0x400) != 0 )
          v14 = (*(int (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_DWORD *)(v26 + 40) + 1976))(
                  v13,
                  v11,
                  v28,
                  a4,
                  a5,
                  a6);
        else
          v14 = EngCopyBits(v13, v11, v28, a4, a5, a6);
      }
      else
      {
        if ( !IsMetaRedirectionBitmap(v12) )
        {
          if ( ((_DWORD)hdev[354] & 0x8000) == 0 || v15->iType )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)&v24,
              (struct PDEVOBJ *)&v21,
              a1);
            if ( ((int)v27[1].hsurf & 0x400) != 0 )
              v18 = (*(int (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_DWORD *)(v26 + 40) + 1976))(
                      a1,
                      v27,
                      v28,
                      a4,
                      a5,
                      a6);
            else
              v18 = EngCopyBits(a1, v27, v28, a4, a5, a6);
            v8 = v18 & v20;
            v20 &= v18;
            if ( v24 )
              *(_WORD *)(v24 + 50) &= ~0x8000u;
            goto LABEL_29;
          }
LABEL_28:
          v8 = v20;
          goto LABEL_29;
        }
        v16 = ((int)v15[1].hsurf & 0x400) == 0;
        dhsurf = a1->dhsurf;
        v21 = a1->dhsurf;
        if ( v16 )
          v14 = EngCopyBits(*(SURFOBJ **)(*((_DWORD *)dhsurf + 1) + 4 * *(_DWORD *)(v26 + 8)), v15, v28, a4, a5, a6);
        else
          v14 = (*(int (__stdcall **)(_DWORD, SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_DWORD *)(v26 + 40) + 1976))(
                  *(_DWORD *)(*((_DWORD *)v21 + 1) + 4 * *(_DWORD *)(v26 + 8)),
                  v15,
                  v28,
                  a4,
                  a5,
                  a6);
      }
      v8 = v14 & v20;
      v20 &= v14;
LABEL_29:
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v22);
      v22[0] = 0;
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v22);
    }
    while ( MSURF::bNextSurface((MSURF *)v25) );
  }
  return v8;
}
