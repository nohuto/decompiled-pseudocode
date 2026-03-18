/*
 * XREFs of GrePtInSprite @ 0x1C002D0E8
 * Callers:
 *     LayerHitTest @ 0x1C0006D34 (LayerHitTest.c)
 *     DCELayerHitTest @ 0x1C002D038 (DCELayerHitTest.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002D5D0 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0069E5C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     EngAlphaBlend @ 0x1C00D1A90 (EngAlphaBlend.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C026F940 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C027F800 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(HDEV a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // edi
  char v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v19; // r15d
  int v20; // r13d
  __int64 v21; // rsi
  struct _SURFOBJ *v22; // rdx
  unsigned int ShapePixel; // eax
  unsigned int v24; // ecx
  RECTL *p_prclSrc; // rcx
  struct _SURFOBJ *v26; // rdx
  HDEV v27; // r14
  RECTL si128; // xmm0
  _DWORD *v29; // rsi
  SURFOBJ *v30; // rdx
  SURFOBJ *v31; // rcx
  int v32; // [rsp+44h] [rbp-85h] BYREF
  HDEV v33; // [rsp+48h] [rbp-81h]
  HWND v34; // [rsp+50h] [rbp-79h]
  _BYTE v35[8]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v36[8]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v37; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-59h] BYREF
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-49h] BYREF
  XLATEOBJ *v40; // [rsp+88h] [rbp-41h]
  XLATEOBJ *v41; // [rsp+90h] [rbp-39h]
  XLATEOBJ *v42; // [rsp+98h] [rbp-31h]
  RECTL prclSrc; // [rsp+A0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+B0h] [rbp-19h] BYREF

  v33 = a1;
  v34 = a2;
  v10 = 0;
  v11 = 1;
  v37 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v10 = GdiPtInSprite(a1, a2, a3, a4);
    goto LABEL_10;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v36, ghsemSprite);
  v32 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v35, ghsemDwmState, 1);
  DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&prclSrc, a2);
  v12 = *(_QWORD *)&prclSrc.left;
  if ( *(_QWORD *)&prclSrc.left )
  {
    v13 = *(_QWORD *)(*(_QWORD *)&prclSrc.left + 168LL);
    v14 = *(_QWORD *)&prclSrc.left + 56LL;
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v10 = PtInRect(v14, __PAIR64__(a4, a3));
    v17 = *(_DWORD *)(v12 + 72);
    if ( (v17 & 0xFFFFFFFB) == 0
      || v17 == 2 && *(_BYTE *)(v12 + 79) == (_BYTE)v16 && *(_BYTE *)(v12 + 78) > (unsigned __int8)v16
      || !v10 )
    {
      goto LABEL_8;
    }
    v19 = a3 - *v15;
    v20 = a4 - *(_DWORD *)(v12 + 60);
    v21 = *(_QWORD *)(v13 + 184);
    if ( (v17 & 2) != 0 )
    {
      if ( v17 != 3 || *(_BYTE *)(v12 + 79) != (_BYTE)v16 )
        v11 = v16;
      v26 = *(struct _SURFOBJ **)(v13 + 184);
      v38[0] = v16;
      SURFREFVIEW::bMap((SURFREFVIEW *)v38, v26);
      if ( v38[0] && *(_DWORD *)(v21 + 72) == 6 )
      {
        if ( v11
          && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 184), v19, v20, a5) & 0xFFFFFF) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          v27 = v33;
          si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
          v29 = *(_DWORD **)(*((_QWORD *)v33 + 139) + 56LL);
          *v29 = 0;
          v30 = *(SURFOBJ **)(v13 + 184);
          v31 = (SURFOBJ *)*((_QWORD *)v27 + 139);
          prclSrc.right = v19 + 1;
          prclSrc.bottom = v20 + 1;
          pBlendObj = *(BLENDOBJ *)(v12 + 76);
          prclDest = si128;
          prclSrc.left = v19;
          prclSrc.top = v20;
          v40 = xloIdent;
          v41 = xloIdent;
          v42 = xloIdent;
          EngAlphaBlend(v31, v30, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
          if ( !*v29 )
          {
            *v29 = -1;
            EngAlphaBlend(
              *((SURFOBJ **)v27 + 139),
              *(SURFOBJ **)(v13 + 184),
              0LL,
              xloIdent,
              &prclDest,
              &prclSrc,
              &pBlendObj);
            v10 = *v29 != -1;
          }
        }
      }
      else
      {
        v10 = 0;
      }
      p_prclSrc = (RECTL *)v38;
    }
    else
    {
      if ( v17 != 1 )
      {
LABEL_8:
        DEC_SHARE_REF_CNT(v12);
        goto LABEL_9;
      }
      v22 = *(struct _SURFOBJ **)(v13 + 184);
      *(_QWORD *)&prclSrc.left = v16;
      SURFREFVIEW::bMap((SURFREFVIEW *)&prclSrc, v22);
      if ( *(_QWORD *)&prclSrc.left && *(_DWORD *)(v21 + 72) == 6 )
      {
        ShapePixel = crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 184), v19, v20, a5);
        v24 = 0;
        if ( (*(_DWORD *)(v12 + 80) & 0xFFFFFF) != (ShapePixel & 0xFFFFFF) )
          v24 = v10;
        v10 = v24;
      }
      else
      {
        v10 = 0;
      }
      p_prclSrc = &prclSrc;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)p_prclSrc);
    goto LABEL_8;
  }
LABEL_9:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v35);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v32);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v36);
LABEL_10:
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  return v10;
}
