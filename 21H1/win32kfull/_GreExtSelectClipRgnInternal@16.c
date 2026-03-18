/*
 * XREFs of _GreExtSelectClipRgnInternal@16 @ 0xF7316
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 *     _NtGdiExtSelectClipRgn@12 @ 0x9D99C (_NtGdiExtSelectClipRgn@12.c)
 *     __ExcludeUpdateRgn@8 @ 0x1964AE (__ExcludeUpdateRgn@8.c)
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QAEPAVREGION@@XZ @ 0x538D4 (-prgnEffRao@XDCOBJ@@QAEPAVREGION@@XZ.c)
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE (-iSelect@DC@@QAEHPAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x5A866 (--0DEVLOCKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  int v4; // esi
  struct REGION *v7; // [esp+Ch] [ebp-4Ch] BYREF
  DC *v8[3]; // [esp+10h] [ebp-48h] BYREF
  struct REGION *v9[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  _BYTE v10[12]; // [esp+28h] [ebp-30h] BYREF
  char v11; // [esp+34h] [ebp-24h]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v8, a1);
    if ( v8[0] && (a4 || (*(_DWORD *)(HmgPentryFromPobj(v8[0]) + 4) & 0xFFFFFFFE) != 0) )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 1);
        if ( v9[0] )
        {
          v4 = DC::iSelect(v8[0], v9[0], a3);
          if ( v4 )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, (struct XDCOBJ *)v8, 1);
            v4 = 0;
            if ( (v11 & 1) != 0 )
            {
              v7 = XDCOBJ::prgnEffRao(v8);
              v4 = RGNOBJ::iComplexity((RGNOBJ *)&v7);
            }
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v10);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
      }
      else if ( a3 == 5 )
      {
        v4 = DC::iSelect(v8[0], 0, 5);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, (struct XDCOBJ *)v8, 1);
          v4 = 0;
          if ( (v11 & 1) != 0 )
          {
            v7 = DC::prgnVisSnap(v8[0]);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v7);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v10);
        }
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v8[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v4;
}
