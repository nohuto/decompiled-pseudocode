/*
 * XREFs of GreGetFontUnicodeRanges @ 0x1C014E4A8
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C014E3E0 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00DCA44 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00DCB18 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  struct _FD_GLYPHSET *v4; // rax
  struct _FD_GLYPHSET *v5; // r8
  ULONG cRuns; // eax
  int v8; // eax
  __int64 v9; // r9
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+28h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v11 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v10, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
    if ( v11 )
    {
      v12 = *(__int64 **)(v11 + 120);
      v4 = PFEOBJ::pfdg(&v12);
      v5 = v4;
      if ( v4 )
      {
        v3 = 4 * v4->cRuns + 16;
        if ( a2 )
        {
          if ( *a2 == v3 )
          {
            *a2 = v3;
            a2[2] = v4->cGlyphsSupported;
            cRuns = v4->cRuns;
            a2[1] = 0;
            a2[3] = cRuns;
            v8 = a2[1];
            if ( (v5->flAccel & 2) != 0 )
              v8 = 1;
            v9 = 0LL;
            for ( a2[1] = v8; (unsigned int)v9 < v5->cRuns; v9 = (unsigned int)(v9 + 1) )
            {
              LOWORD(a2[v9 + 4]) = v5->awcrun[(unsigned int)v9].wcLow;
              HIWORD(a2[v9 + 4]) = v5->awcrun[(unsigned int)v9].cGlyphs;
            }
          }
          else
          {
            v3 = 0;
          }
        }
        PFEOBJ::vFreepfdg(&v12);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v3;
}
