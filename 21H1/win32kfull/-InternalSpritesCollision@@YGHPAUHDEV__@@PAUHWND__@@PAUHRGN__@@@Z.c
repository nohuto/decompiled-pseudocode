/*
 * XREFs of ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470
 * Callers:
 *     _DxgkEngDetectGDIPath@16 @ 0x1D42D7 (_DxgkEngDetectGDIPath@16.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     _GreDeleteSpriteOverlapPresent@8 @ 0x7193A (_GreDeleteSpriteOverlapPresent@8.c)
 *     ?vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA0730 (-vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1DA9EC (-GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z @ 0x1DB290 (-GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z.c)
 */

int __userpurge InternalSpritesCollision@<eax>(int a1@<edx>, int a2@<ecx>, HDEV a3, HWND a4, HRGN a5)
{
  int v6; // esi
  int v7; // edi
  struct _RECTL *v8; // ecx
  HANDLE RectRgn; // ebx
  HANDLE v10; // eax
  BOOL v11; // eax
  HANDLE v12; // edi
  void *v13; // eax
  void (__stdcall *v14)(HANDLE); // edi
  INT v16; // [esp-4h] [ebp-58h]
  HDEV v17; // [esp+0h] [ebp-54h]
  HWND v18; // [esp+4h] [ebp-50h]
  int v19; // [esp+14h] [ebp-40h] BYREF
  _DWORD v20[4]; // [esp+18h] [ebp-3Ch] BYREF
  HANDLE hrgnTrg; // [esp+28h] [ebp-2Ch]
  HANDLE hrgn; // [esp+2Ch] [ebp-28h]
  _DWORD *v23; // [esp+30h] [ebp-24h]
  unsigned int v24; // [esp+34h] [ebp-20h]
  HANDLE hrgnSrc1; // [esp+38h] [ebp-1Ch]
  struct tagRECT prcl; // [esp+3Ch] [ebp-18h] BYREF

  v20[3] = a1;
  v6 = 0;
  v23 = (_DWORD *)a2;
  v7 = a2 + 64;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, (HRGN)a3, 0);
  if ( !v20[0]
    || (prcl = *(struct tagRECT *)(v7 + 20),
        ERECTL::bOffsetAdd((ERECTL *)&prcl, (const struct _POINTL *)(a2 + 1836), 0),
        RGNOBJ::bInside((RGNOBJ *)v20, v8) == 2) )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
    if ( *(_DWORD *)(v7 + 36) )
    {
      hrgnSrc1 = EngCreateRectRgn(0, 0, 0, 0);
      if ( hrgnSrc1 )
      {
        hrgn = EngCreateRectRgn(0, 0, 0, 0);
        RectRgn = EngCreateRectRgn(0, 0, 0, 0);
        v10 = EngCreateRectRgn(0, 0, 0, 0);
        hrgnTrg = v10;
        if ( hrgn )
        {
          if ( RectRgn )
          {
            if ( v10 )
            {
              v16 = *(_DWORD *)(v7 + 32);
              v24 = 0;
              if ( EngSetRectRgn(hrgn, *(_DWORD *)(v7 + 20), *(_DWORD *)(v7 + 24), *(_DWORD *)(v7 + 28), v16) )
              {
                GreAcquireSemaphore(*(_DWORD *)(v7 + 88));
                EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v7 + 88), 8);
                if ( *(_DWORD *)(v7 + 648) )
                  vSpComputeUncoveredRegion((int *)v7, 0);
                EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v7 + 88));
                GreReleaseSemaphoreInternal(*(_DWORD *)(v7 + 88));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&prcl.top, (HRGN)hrgnSrc1, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, (HRGN)hrgn, 1);
                v19 = *(_DWORD *)(v7 + 380);
                if ( prcl.top && v20[0] )
                  v24 = RGNOBJAPI::iCombine((RGNOBJAPI *)&prcl.top, (struct RGNOBJ *)v20, (struct RGNOBJ *)&v19, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&prcl.top);
                if ( v24 >= 2 )
                {
                  v24 = 0;
                  EngSetRectRgn(RectRgn, 0, 0, 0, 0);
                  if ( !g_pDwmState )
                    GdiGetSpriteClipRgns(v17, (HRGN)v18);
                  EngGetRgnBox(RectRgn, &prcl);
                  v11 = ERECTL::bEmpty((ERECTL *)&prcl);
                  v12 = hrgnSrc1;
                  if ( !v11 && (unsigned int)EngCombineRgn(hrgnTrg, hrgnSrc1, RectRgn, 1) >= 2 )
                  {
                    v13 = v12;
                    v24 = 1;
                    v12 = hrgnTrg;
                    hrgnSrc1 = hrgnTrg;
                    hrgnTrg = v13;
                  }
                  if ( (unsigned int)EngOffsetRgn(v12, v23[459], v23[460]) >= 2 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, v12, a3, 1) < 2 )
                    {
                      if ( v24 )
                        GreAddSpriteOverlapPresent(v17, v18);
                    }
                    else
                    {
                      v6 = 1;
                      GreDeleteSpriteOverlapPresent(v23);
                    }
                  }
                }
              }
            }
          }
          v14 = EngDeleteRgn;
          EngDeleteRgn(hrgn);
        }
        else
        {
          v14 = EngDeleteRgn;
        }
        if ( RectRgn )
          v14(RectRgn);
        if ( hrgnTrg )
          v14(hrgnTrg);
        v14(hrgnSrc1);
      }
    }
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
  }
  return v6;
}
