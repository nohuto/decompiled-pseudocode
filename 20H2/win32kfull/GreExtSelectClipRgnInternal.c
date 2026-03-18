/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C015E358
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C00382A4 (_ExcludeUpdateRgn.c)
 *     NtGdiExtSelectClipRgn @ 0x1C00A0F80 (NtGdiExtSelectClipRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00FA070 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DrawTextExWorker @ 0x1C025E650 (DrawTextExWorker.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A0B70 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00A0B9C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00A0F18 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // edi
  DC *v9; // rcx
  __int64 v10; // rax
  DC *v12[2]; // [rsp+38h] [rbp-39h] BYREF
  struct REGION *v13; // [rsp+48h] [rbp-29h] BYREF
  struct REGION *v14[3]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v15[24]; // [rsp+68h] [rbp-9h] BYREF
  char v16; // [rsp+80h] [rbp+Fh]

  v4 = 0;
  v8 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v8;
  }
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v9 = v12[0];
  if ( !v12[0] )
    goto LABEL_10;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v12[0]) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_10;
    v9 = v12[0];
  }
  if ( *((_WORD *)v9 + 6) <= 1u )
  {
    if ( a2 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, a2, 1);
      if ( v14[0] )
      {
        v8 = DC::iSelect(v12[0], v14[0], a3);
        if ( v8 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v12, 1);
          v8 = 0;
          if ( (v16 & 1) != 0 )
          {
            v13 = XDCOBJ::prgnEffRao(v12);
            v8 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v14);
    }
    else if ( a3 == 5 )
    {
      v8 = DC::iSelect(v9, 0LL, 5);
      if ( v8 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v12, 1);
        v8 = 0;
        if ( (v16 & 1) != 0 )
        {
          v13 = DC::prgnVisSnap(v12[0]);
          v8 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
      }
    }
    goto LABEL_11;
  }
  v10 = *((_QWORD *)v9 + 6);
  if ( v10 )
    v4 = *(_DWORD *)(v10 + 40);
  TraceLoggingWriteUnsupportedGdiUsage(11, v4, *((unsigned __int16 *)v9 + 6));
LABEL_10:
  EngSetLastError(6u);
LABEL_11:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v8;
}
