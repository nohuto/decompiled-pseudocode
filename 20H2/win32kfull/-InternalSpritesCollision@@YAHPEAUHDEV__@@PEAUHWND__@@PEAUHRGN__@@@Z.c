/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0275BC8
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0276E40 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00859E4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008608C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00D36FC (GreDeleteSpriteOverlapPresent.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027DB48 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027E5AC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // ebx
  HRGN RectRgn; // rsi
  HRGN v6; // r14
  HRGN v7; // rax
  HRGN v8; // r13
  HRGN v9; // r12
  int v10; // edi
  HRGN v11; // rax
  HRGN hrgn; // [rsp+30h] [rbp-49h]
  unsigned int v14; // [rsp+38h] [rbp-41h]
  unsigned int v15; // [rsp+3Ch] [rbp-3Dh]
  _QWORD v17[3]; // [rsp+48h] [rbp-31h] BYREF
  HANDLE hrgnSrc2; // [rsp+60h] [rbp-19h]
  _QWORD v19[3]; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT prcl; // [rsp+80h] [rbp+7h] BYREF

  hrgnSrc2 = a3;
  v4 = 0;
  v15 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a3, 0);
  if ( !v17[0]
    || (prcl = (struct tagRECT)*((_OWORD *)a1 + 8),
        ERECTL::bOffsetAdd((ERECTL *)&prcl, (const struct _POINTL *)a1 + 323, 0),
        RGNOBJ::bInside((RGNOBJ *)v17, (struct _RECTL *)&prcl) == 2) )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
    if ( *((_DWORD *)a1 + 36) )
    {
      RectRgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      if ( RectRgn )
      {
        hrgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v6 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v7 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v8 = hrgn;
        v9 = v7;
        if ( hrgn )
        {
          if ( v6 )
          {
            if ( v7 )
            {
              v14 = 0;
              if ( EngSetRectRgn(
                     hrgn,
                     *((_DWORD *)a1 + 32),
                     *((_DWORD *)a1 + 33),
                     *((_DWORD *)a1 + 34),
                     *((_DWORD *)a1 + 35)) )
              {
                SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 52));
                if ( *((_QWORD *)a1 + 141) )
                  vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 22), 0);
                SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 52));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, RectRgn, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, hrgn, 1);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 98);
                if ( v19[0] && v17[0] )
                  v14 = RGNOBJAPI::iCombine((RGNOBJAPI *)v19, (struct RGNOBJ *)v17, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
                if ( v14 > 1 )
                {
                  v10 = 0;
                  EngSetRectRgn(v6, 0, 0, 0, 0);
                  if ( !g_pDwmState )
                    GdiGetSpriteClipRgns(a1, v6);
                  EngGetRgnBox(v6, &prcl);
                  if ( !ERECTL::bEmpty((ERECTL *)&prcl) && (unsigned int)EngCombineRgn(v9, RectRgn, v6, 1) > 1 )
                  {
                    v11 = RectRgn;
                    v10 = 1;
                    RectRgn = v9;
                    v9 = v11;
                  }
                  if ( (unsigned int)EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 646), *((_DWORD *)a1 + 647)) > 1 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, hrgnSrc2, 1) <= 1 )
                    {
                      if ( v10 )
                        GreAddSpriteOverlapPresent(a1, a2);
                    }
                    else
                    {
                      v15 = 1;
                      GreDeleteSpriteOverlapPresent(a1, a2);
                    }
                  }
                }
                v8 = hrgn;
              }
            }
          }
          EngDeleteRgn(v8);
        }
        if ( v6 )
          EngDeleteRgn(v6);
        if ( v9 )
          EngDeleteRgn(v9);
        EngDeleteRgn(RectRgn);
      }
    }
    return v15;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
  }
  return v4;
}
