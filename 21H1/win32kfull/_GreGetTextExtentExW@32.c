/*
 * XREFs of _GreGetTextExtentExW@32 @ 0xF83A4
 * Callers:
 *     _NtGdiGetTextExtentExW@32 @ 0x61BE0 (_NtGdiGetTextExtentExW@32.c)
 *     _GreGetCharacterPlacementW@24 @ 0x2221E7 (_GreGetCharacterPlacementW@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z @ 0x881A8 (-vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1ESTROBJ@@QAE@XZ @ 0xF7084 (--1ESTROBJ@@QAE@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QAEHAAVRFONTOBJ@@JPAUtagSIZE@@@Z @ 0xF85EB (-bTextExtent@ESTROBJ@@QAEHAAVRFONTOBJ@@JPAUtagSIZE@@@Z.c)
 */

unsigned int __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  unsigned int v8; // esi
  int *v9; // edi
  int *v11[3]; // [esp+Ch] [ebp-1DCh] BYREF
  int *v12; // [esp+18h] [ebp-1D0h]
  unsigned int *v13; // [esp+1Ch] [ebp-1CCh]
  struct tagSIZE *v14; // [esp+20h] [ebp-1C8h]
  unsigned __int16 *v15; // [esp+24h] [ebp-1C4h]
  _DWORD v16[3]; // [esp+28h] [ebp-1C0h] BYREF
  int v17; // [esp+34h] [ebp-1B4h] BYREF
  _BYTE v18[268]; // [esp+38h] [ebp-1B0h] BYREF
  char v19; // [esp+144h] [ebp-A4h] BYREF

  v14 = a7;
  v8 = 0;
  v15 = a2;
  v13 = a5;
  v9 = a6;
  if ( (a2 || !a3) && v14 )
  {
    if ( a3 )
    {
      memset(v16, 0, sizeof(v16));
      XDCOBJ::vLock((XDCOBJ *)v16, a1);
      if ( v16[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v16, 516);
        v17 = 0;
        if ( RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v16, 0, 2 * (a8 & 1) + 2) )
          GreAcquireSemaphore(*(_DWORD *)(v17 + 548));
        if ( v17 )
        {
          if ( (*(_BYTE *)(v17 + 56) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v17, v15, a3);
          v12 = 0;
          if ( !a6 && v13 )
          {
            if ( a3 > 0x28 )
            {
              v9 = (int *)PALLOCMEM2(4 * a3, 1954051143, 1);
              v12 = v9;
              if ( !v9 )
                EngSetLastError(8u);
            }
            else
            {
              v9 = (int *)&v19;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v18,
            v15,
            a3,
            (struct XDCOBJ *)v16,
            (struct RFONTOBJ *)&v17,
            v11,
            0,
            0,
            *(_DWORD *)(v16[0] + 1560),
            *(_QWORD *)(*(_DWORD *)(v16[0] + 1020) + 288),
            *(_DWORD *)(*(_DWORD *)(v16[0] + 1020) + 296),
            0,
            0,
            0,
            v9,
            0,
            0);
          if ( (v18[192] & 4) != 0 && ESTROBJ::bTextExtent((ESTROBJ *)v18, (struct RFONTOBJ *)&v17, 0, v14) )
          {
            if ( v13 && v9 )
            {
              do
              {
                if ( *v9 > a4 )
                  break;
                ++v8;
                ++v9;
              }
              while ( v8 < a3 );
              *v13 = v8;
            }
            v8 = 1;
          }
          if ( v12 )
            Win32FreePool(v12);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v18);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
      }
      else
      {
        EngSetLastError(6u);
      }
      if ( v16[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v16);
      return v8;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0;
  }
}
