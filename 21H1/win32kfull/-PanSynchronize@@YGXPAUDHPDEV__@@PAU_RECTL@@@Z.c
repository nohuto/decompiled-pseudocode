/*
 * XREFs of ?PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F6656
 * Callers:
 *     ?PanEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z @ 0x1F5CE7 (-PanEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@@Z @ 0x1F61B4 (-PanMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1PANSURFLOCK@@QAE@XZ @ 0x1F56B1 (--1PANSURFLOCK@@QAE@XZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1F6FC9 (-vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 */

void __stdcall PanSynchronize(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // edx
  int v3; // ecx
  int v4; // eax
  HSEMAPHORE v5; // esi
  _DWORD *v6; // ecx
  SURFOBJ *v7; // eax
  BOOL (__stdcall *v8)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // edx
  int v9; // eax
  struct REGION *v10; // [esp+Ch] [ebp-124h]
  int v11; // [esp+24h] [ebp-10Ch] BYREF
  _DWORD v12[4]; // [esp+28h] [ebp-108h] BYREF
  _DWORD v13[2]; // [esp+38h] [ebp-F8h] BYREF
  int v14; // [esp+40h] [ebp-F0h]
  int v15; // [esp+44h] [ebp-ECh]
  struct _CLIPOBJ v16; // [esp+48h] [ebp-E8h] BYREF
  int v17; // [esp+78h] [ebp-B8h]
  int v18; // [esp+8Ch] [ebp-A4h]
  int v19; // [esp+90h] [ebp-A0h]
  int v20; // [esp+B8h] [ebp-78h]
  int v21; // [esp+C0h] [ebp-70h]
  _DWORD v22[25]; // [esp+C8h] [ebp-68h] BYREF

  v2 = a2;
  v3 = *((_DWORD *)a1 + 13);
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v12[2] = *(_DWORD *)(v3 + 16);
  v4 = *(_DWORD *)(v3 + 20);
  v12[0] = 0;
  v12[1] = 0;
  v12[3] = v4;
  if ( !a2 )
    v2 = (struct _RECTL *)v12;
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = a1;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)v22, v2, 0, 1);
  v5 = (HSEMAPHORE)*((_DWORD *)a1 + 19);
  EngAcquireSemaphore(v5);
  if ( *((_DWORD *)a1 + 18) )
  {
    v18 = 0;
    v19 = 0;
    v21 = 0;
    v17 = 0;
    v10 = (struct REGION *)*((_DWORD *)a1 + 15);
    v20 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v16, v10, (struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v16.rclBounds) )
    {
      CLIPOBJ_vOffset(&v16, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      *(_DWORD *)(struct DHPDEV__ *)(*((_DWORD *)a1 + 14) + 8) = a1[8];
      v6 = *((_DWORD *)a1 + 14) != 0 ? (_DWORD *)(*((_DWORD *)a1 + 14) - 16) : 0;
      v14 = v6[8];
      v15 = v6[9];
      v7 = (SURFOBJ *)*((_DWORD *)a1 + 13);
      if ( v7 )
      {
        if ( (v6[18] & 0x400) != 0 )
          v8 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)a1 + 124);
        else
          v8 = EngCopyBits;
        v8(v6 != 0 ? (SURFOBJ *)(v6 + 4) : 0, v7, &v16, 0, (RECTL *)v13, (POINTL *)a1 + 2);
      }
    }
    v9 = *((_DWORD *)a1 + 15);
    *((_DWORD *)a1 + 18) = 0;
    v11 = v9;
    RGNOBJ::vSet((RGNOBJ *)&v11);
  }
  if ( v5 )
    EngReleaseSemaphore(v5);
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v22);
}
