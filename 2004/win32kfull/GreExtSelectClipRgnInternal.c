/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C015AE98
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0051AE0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C005FF48 (_ExcludeUpdateRgn.c)
 *     NtGdiExtSelectClipRgn @ 0x1C00758A0 (NtGdiExtSelectClipRgn.c)
 *     DrawTextExWorker @ 0x1C025FC70 (DrawTextExWorker.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001C99C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075490 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00754BC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0075838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0075A3C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078350 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  DC *v8; // rcx
  DC *v10[2]; // [rsp+28h] [rbp-29h] BYREF
  struct REGION *v11; // [rsp+38h] [rbp-19h] BYREF
  struct REGION *v12[3]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+7h] BYREF
  char v14; // [rsp+70h] [rbp+1Fh]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v4;
  }
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = v10[0];
  if ( v10[0] )
  {
    if ( a4 )
      goto LABEL_6;
    if ( (*(_DWORD *)(HmgPentryFromPobj(v10[0]) + 8) & 0xFFFFFFFE) != 0 )
    {
      v8 = v10[0];
LABEL_6:
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a2, 1);
        if ( v12[0] )
        {
          v4 = DC::iSelect(v10[0], v12[0], a3);
          if ( v4 )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v10, 1);
            v4 = 0;
            if ( (v14 & 1) != 0 )
            {
              v11 = XDCOBJ::prgnEffRao(v10);
              v4 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
            }
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v12);
      }
      else if ( a3 == 5 )
      {
        v4 = DC::iSelect(v8, 0LL, 5);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v10, 1);
          v4 = 0;
          if ( (v14 & 1) != 0 )
          {
            v11 = DC::prgnVisSnap(v10[0]);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
        }
      }
      goto LABEL_19;
    }
  }
  EngSetLastError(6u);
LABEL_19:
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v4;
}
