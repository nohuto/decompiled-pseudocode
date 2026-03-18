/*
 * XREFs of _GreGetFontUnicodeRanges@8 @ 0x840D4
 * Callers:
 *     _NtGdiGetFontUnicodeRanges@8 @ 0x83FB4 (_NtGdiGetFontUnicodeRanges@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

unsigned int __fastcall GreGetFontUnicodeRanges(HDC a1, int *a2)
{
  unsigned int v2; // esi
  int v4; // ebx
  struct _FD_GLYPHSET *v5; // eax
  struct _FD_GLYPHSET *v6; // ecx
  USHORT *v8; // edi
  USHORT *p_cGlyphs; // edx
  USHORT v10; // ax
  _DWORD v11[3]; // [esp+Ch] [ebp-14h] BYREF
  int *v12; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  v2 = 0;
  memset(v11, 0, sizeof(v11));
  v4 = 0;
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  if ( !v11[0] )
    goto LABEL_9;
  v13 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v11, 0, 2u) )
    GreAcquireSemaphore(*(_DWORD *)(v13 + 548));
  if ( !v13 )
  {
LABEL_8:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
LABEL_9:
    v2 = v4;
    goto LABEL_10;
  }
  v12 = *(int **)(v13 + 80);
  v5 = PFEOBJ::pfdg((PFEOBJ *)&v12);
  v6 = v5;
  if ( v5 )
  {
    v4 = 4 * v5->cRuns + 16;
    if ( a2 )
    {
      if ( *a2 == v4 )
      {
        *a2 = v4;
        a2[2] = v5->cGlyphsSupported;
        a2[3] = v5->cRuns;
        a2[1] = 0;
        if ( (v5->flAccel & 2) != 0 )
          a2[1] = 1;
        if ( v5->cRuns )
        {
          v8 = (USHORT *)a2 + 9;
          p_cGlyphs = &v5->awcrun[0].cGlyphs;
          do
          {
            ++v2;
            *(v8 - 1) = *(p_cGlyphs - 1);
            v10 = *p_cGlyphs;
            p_cGlyphs += 4;
            *v8 = v10;
            v8 += 2;
          }
          while ( v2 < v6->cRuns );
        }
      }
      else
      {
        v4 = 0;
      }
    }
    PFEOBJ::vFreepfdg(&v12);
    goto LABEL_8;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
LABEL_10:
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v2;
}
