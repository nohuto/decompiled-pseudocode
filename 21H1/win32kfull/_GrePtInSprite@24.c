/*
 * XREFs of _GrePtInSprite@24 @ 0x23540
 * Callers:
 *     _DCELayerHitTest@12 @ 0x25668 (_DCELayerHitTest@12.c)
 *     _LayerHitTest@12 @ 0x17B8DE (_LayerHitTest@12.c)
 * Callees:
 *     ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A (--0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?crSpGetShapePixel@@YGKPAU_SURFOBJ@@HHH@Z @ 0x1CD941 (-crSpGetShapePixel@@YGKPAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z @ 0x1DB02B (-GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z.c)
 */

int __fastcall GrePtInSprite(int a1, int a2, HDEV a3, HWND a4, int a5, int a6)
{
  int v6; // esi
  HSPRITE v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  bool v14; // zf
  int v15; // edx
  HWND v16; // ecx
  struct _SURFOBJ *v17; // ebx
  HDEV v18; // eax
  HWND v20; // [esp+0h] [ebp-78h]
  int v21; // [esp+4h] [ebp-74h]
  BLENDOBJ pBlendObj; // [esp+Ch] [ebp-6Ch] BYREF
  XLATEOBJ *v23; // [esp+10h] [ebp-68h]
  XLATEOBJ *v24; // [esp+14h] [ebp-64h]
  XLATEOBJ *v25; // [esp+18h] [ebp-60h]
  _DWORD v26[2]; // [esp+1Ch] [ebp-5Ch] BYREF
  int v27; // [esp+24h] [ebp-54h] BYREF
  int v28; // [esp+28h] [ebp-50h]
  int v29; // [esp+2Ch] [ebp-4Ch] BYREF
  _DWORD v30[2]; // [esp+30h] [ebp-48h] BYREF
  int v31; // [esp+38h] [ebp-40h]
  int v32; // [esp+3Ch] [ebp-3Ch]
  struct _SURFOBJ *v33; // [esp+40h] [ebp-38h]
  HDEV v34; // [esp+44h] [ebp-34h]
  int v35; // [esp+48h] [ebp-30h]
  HWND v36; // [esp+4Ch] [ebp-2Ch]
  char v37; // [esp+53h] [ebp-25h]
  RECTL prclDest; // [esp+54h] [ebp-24h] BYREF
  RECTL prclSrc; // [esp+64h] [ebp-14h] BYREF

  v35 = 0;
  v31 = a1;
  v28 = 1;
  v26[1] = a2;
  v26[0] = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v36 = a4;
    v18 = a3;
    goto LABEL_35;
  }
  GreAcquireSemaphoreSharedInternal(_ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemSprite);
  v27 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v29, _ghsemDwmState, 1);
  v28 = 0;
  v6 = 0;
  v7 = DWMALTSPRITEREF::hspLookupWindow(v20);
  if ( v7 )
  {
    LOBYTE(v8) = 15;
    v9 = HmgShareLockCheck(v7, v8);
    v6 = v9;
    if ( v9 )
    {
      v32 = *(_DWORD *)(v9 + 136);
      v34 = a3;
      v36 = a4;
      v11 = PtInRect(a3, a4);
      v12 = *(_DWORD *)(v6 + 48);
      v35 = v11;
      if ( !v12 || v12 == 4 || v12 == 2 && !*(_BYTE *)(v6 + 55) && *(_BYTE *)(v6 + 54) || !v11 )
        goto LABEL_30;
      v34 = (HDEV)(v10 - *(_DWORD *)(v6 + 32));
      v33 = *(struct _SURFOBJ **)(v32 + 112);
      v36 = (HWND)((char *)a4 - *(_DWORD *)(v6 + 36));
      if ( (v12 & 2) != 0 )
      {
        if ( v12 != 3 || (v14 = *(_BYTE *)(v6 + 55) == 0, v37 = 1, !v14) )
          v37 = 0;
        v30[0] = 0;
        SURFREFVIEW::bMap((SURFREFVIEW *)v30, v33);
        if ( v30[0] && v33->iBitmapFormat == 6 )
        {
          if ( v37 )
          {
            v11 = (crSpGetShapePixel((struct _SURFOBJ *)v36, a5, (int)v20, v21) & 0xFFFFFF) != (*(_DWORD *)(v6 + 56) & 0xFFFFFF)
                ? v11
                : 0;
            v35 = v11;
          }
          if ( !v11 )
            goto LABEL_18;
          v15 = v31;
          v16 = v36;
          v17 = *(struct _SURFOBJ **)(*(_DWORD *)(v31 + 704) + 32);
          v33 = v17;
          v17->dhsurf = 0;
          prclDest.left = 0;
          prclDest.top = 0;
          prclDest.right = 1;
          prclDest.bottom = 1;
          prclSrc.left = (LONG)v34;
          prclSrc.right = (LONG)v34 + 1;
          prclSrc.top = (LONG)v16;
          prclSrc.bottom = (LONG)v16 + 1;
          pBlendObj = *(BLENDOBJ *)(v6 + 52);
          v23 = xloIdent;
          v24 = xloIdent;
          v25 = xloIdent;
          EngAlphaBlend(
            *(SURFOBJ **)(v15 + 704),
            *(SURFOBJ **)(v32 + 112),
            0,
            xloIdent,
            &prclDest,
            &prclSrc,
            &pBlendObj);
          if ( v17->dhsurf )
            goto LABEL_18;
          v17->dhsurf = (DHSURF)-1;
          EngAlphaBlend(
            *(SURFOBJ **)(v31 + 704),
            *(SURFOBJ **)(v32 + 112),
            0,
            xloIdent,
            &prclDest,
            &prclSrc,
            &pBlendObj);
          v13 = v33->dhsurf != (DHSURF)-1;
          goto LABEL_16;
        }
      }
      else
      {
        if ( v12 != 1 )
          goto LABEL_30;
        v30[0] = 0;
        SURFREFVIEW::bMap((SURFREFVIEW *)v30, v33);
        if ( v30[0] && v33->iBitmapFormat == 6 )
        {
          v13 = (crSpGetShapePixel((struct _SURFOBJ *)v36, a5, (int)v20, v21) & 0xFFFFFF) != (*(_DWORD *)(v6 + 56) & 0xFFFFFF)
              ? v11
              : 0;
LABEL_16:
          v35 = v13;
LABEL_18:
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v30);
          goto LABEL_30;
        }
      }
      v35 = 0;
      goto LABEL_18;
    }
  }
  v36 = a4;
  v34 = a3;
LABEL_30:
  if ( v6 )
    DEC_SHARE_REF_CNT(v6);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v29);
  GreReleaseSemaphoreInternal(v29);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v27);
  EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemSprite);
  GreReleaseSemaphoreInternal(_ghsemSprite);
  if ( v28 )
  {
    v18 = v34;
LABEL_35:
    v35 = GdiPtInSprite(v18, v36, (int)v20, v21);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v26);
  return v35;
}
