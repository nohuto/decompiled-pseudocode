/*
 * XREFs of ?bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z @ 0x1DCEF2
 * Callers:
 *     _bMoveDevPreviewRect@24 @ 0x1E3ABE (_bMoveDevPreviewRect@24.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z @ 0x1DA746 (-EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z.c)
 */

int __fastcall bSetPreviewRectContent(int a1, _DWORD *a2)
{
  int updated; // ebx
  struct tagPOINT *CompatibleDC; // eax
  struct tagPOINT *v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  LONG *y; // eax
  HDEV v9; // ebx
  LONG v10; // ecx
  LONG v11; // eax
  int v13; // [esp+80h] [ebp-10Ch]
  struct _RECTL *v14; // [esp+84h] [ebp-108h]
  int v15; // [esp+84h] [ebp-108h]
  struct _MARGINS *v16; // [esp+88h] [ebp-104h]
  int v17; // [esp+88h] [ebp-104h]
  struct tagPOINT v18; // [esp+90h] [ebp-FCh] BYREF
  _DWORD *v19; // [esp+98h] [ebp-F4h] BYREF
  int v20; // [esp+9Ch] [ebp-F0h]
  struct HDC__ v21; // [esp+A0h] [ebp-ECh] BYREF
  HDEV v22; // [esp+A4h] [ebp-E8h]
  int v23; // [esp+A8h] [ebp-E4h] BYREF
  int v24; // [esp+ACh] [ebp-E0h]
  int v25; // [esp+B0h] [ebp-DCh]
  struct XDCOBJ *v26[2]; // [esp+B4h] [ebp-D8h] BYREF
  _DWORD v27[6]; // [esp+BCh] [ebp-D0h] BYREF
  struct _RECTL v28; // [esp+D4h] [ebp-B8h] BYREF
  int v29; // [esp+E4h] [ebp-A8h]
  int v30; // [esp+E8h] [ebp-A4h]
  int v31[3]; // [esp+ECh] [ebp-A0h] BYREF
  int v32; // [esp+F8h] [ebp-94h] BYREF
  int v33; // [esp+FCh] [ebp-90h]
  int v34; // [esp+100h] [ebp-8Ch]
  _DWORD Parameter[15]; // [esp+104h] [ebp-88h] BYREF
  int v36; // [esp+140h] [ebp-4Ch]
  struct _SURFOBJ v37; // [esp+144h] [ebp-48h] BYREF
  int v38; // [esp+178h] [ebp-14h]
  int v39; // [esp+17Ch] [ebp-10h]
  int v40; // [esp+180h] [ebp-Ch]
  int v41; // [esp+184h] [ebp-8h]

  v29 = a1;
  v18.y = (LONG)a2;
  memset(v27, 0, sizeof(v27));
  updated = 0;
  v21.unused = a2[2] - *a2;
  v22 = (HDEV)(a2[3] - a2[1]);
  CompatibleDC = (struct tagPOINT *)GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
  v4 = CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0, 0, 0);
    v31[1] = 0;
    v31[2] = 0;
    XDCOBJ::vLock((XDCOBJ *)v31, (HDC)v4);
    if ( v31[0] )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v31);
      v26[1] = 0;
      v26[0] = 0;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v26, 8u, 0, 0, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v20 = 0;
        v19 = 0;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v19, 8u, 0, 0, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          v27[1] = v21.unused;
          v27[2] = v22;
          v27[3] = 0;
          v20 = 1;
          v27[0] = 6;
          v27[4] = *v19;
          v23 = 0;
          LOBYTE(v24) = 0;
          v25 = 0;
          v27[5] = 1;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v27, 0, 0, 0, 0, 0, 0, 1, 0, 0) && v23 )
          {
            HmgSetOwner(*(_DWORD *)(v23 + 20), 0, 5);
            *(_DWORD *)&v37.iType = 1174412344;
            v37.pvScan0 = (PVOID)-1946142608;
            v37.lDelta = -1946142608;
            v37.iUniq = -1946142608;
            v37.iBitmapFormat = -1946142608;
            v38 = -1946142608;
            v39 = -1946142608;
            v40 = -1946142608;
            v41 = -1946142608;
            v27[1] = 3;
            v27[2] = 3;
            v27[0] = 6;
            v27[3] = 36;
            v27[4] = *v19;
            v32 = 0;
            LOBYTE(v33) = 0;
            v34 = 0;
            v27[5] = 1;
            if ( SURFMEM::bCreateDIB(
                   (SURFMEM *)&v32,
                   (struct _DEVBITMAPINFO *)v27,
                   &v37.pvScan0,
                   0,
                   0,
                   0,
                   0,
                   0,
                   1,
                   0,
                   0) )
            {
              if ( v32 )
              {
                v37.dhpdev = (DHPDEV)v21.unused;
                v37.hdev = v22;
                v37.cjBits = 3;
                v37.pvBits = (PVOID)3;
                v37.dhsurf = 0;
                v28.left = 1;
                v28.top = 1;
                v28.right = 1;
                v28.bottom = 1;
                v37.hsurf = 0;
                v37.sizlBitmap.cx = 0;
                v37.sizlBitmap.cy = 0;
                updated = EngNineGridHelper(
                            v19,
                            v31,
                            v26[0],
                            (struct PALETTE *)(v23 + 16),
                            (struct PALETTE *)(v32 + 16),
                            &v37,
                            (struct _SURFOBJ *)&v37.sizlBitmap,
                            &v28,
                            v14,
                            v16);
                if ( updated )
                {
                  v5 = *(_DWORD *)(v23 + 20);
                  *(_DWORD *)(v23 + 72) |= 0x4000000u;
                  v6 = GreSelectBitmap(v4, v5);
                  v7 = v29;
                  v30 = v6;
                  y = (LONG *)v18.y;
                  *(_DWORD *)(v23 + 72) &= ~0x4000000u;
                  v9 = *(HDEV *)(v7 + 728);
                  v18.x = 33488896;
                  v10 = *y;
                  v11 = y[1];
                  v28.left = v10;
                  v28.top = v11;
                  v37.dhsurf = 0;
                  v37.hsurf = 0;
                  v18.y = UserGetHDEV();
                  if ( GreStackExpansionRequired(0x2000) )
                  {
                    Parameter[4] = &v28;
                    Parameter[5] = &v21;
                    Parameter[7] = &v37;
                    Parameter[8] = &v18;
                    Parameter[0] = v18.y;
                    Parameter[13] = 1;
                    Parameter[1] = 0;
                    Parameter[2] = v9;
                    Parameter[3] = 0;
                    Parameter[6] = v4;
                    memset(&Parameter[9], 0, 12);
                    Parameter[12] = 2;
                    Parameter[14] = 0;
                    v36 = 0;
                    if ( KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000u, 1u, 0) >= 0 )
                      updated = v36;
                    else
                      updated = 0;
                  }
                  else
                  {
                    updated = GreUpdateSpriteInternal(
                                0,
                                (HDEV)v18.y,
                                v9,
                                0,
                                &v28,
                                &v21,
                                v4,
                                (struct tagSIZE *)&v37,
                                0,
                                &v18,
                                2u,
                                0,
                                0,
                                (struct tagRECT *)1,
                                0,
                                v15,
                                v17);
                  }
                  v13 = v30;
                  *(_DWORD *)(v23 + 72) |= 0x4000000u;
                  GreSelectBitmap(v4, v13);
                  *(_DWORD *)(v23 + 72) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v32);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v19);
          SURFMEM::~SURFMEM((SURFMEM *)&v23);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v26);
    }
    GreSetDCOwnerEx(v4, -2147483646, 0, 0);
    GreDeleteDC(v4);
  }
  return updated;
}
