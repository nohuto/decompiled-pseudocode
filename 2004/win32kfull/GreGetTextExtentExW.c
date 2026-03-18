/*
 * XREFs of GreGetTextExtentExW @ 0x1C015B7E4
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C007A460 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C02BC170 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00E21D4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015AAD4 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C015BA94 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  unsigned int v8; // r12d
  int *v10; // rbx
  int *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v16; // [rsp+98h] [rbp-78h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-70h] BYREF
  struct tagSIZE *v18; // [rsp+B0h] [rbp-60h]
  int *v19[3]; // [rsp+B8h] [rbp-58h] BYREF
  _BYTE v20[320]; // [rsp+D0h] [rbp-40h] BYREF
  char v21; // [rsp+210h] [rbp+100h] BYREF

  v8 = 0;
  v10 = a6;
  v16 = a4;
  v18 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v17, a1);
      if ( v17[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v17, 516);
        v15 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v17, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 84) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v15, a2, a3);
          v13 = 0LL;
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              v13 = (int *)PALLOCMEM2(4 * a3, 1954051143LL, 1);
              if ( !v13 )
                EngSetLastError(8u);
              v10 = v13;
            }
            else
            {
              v10 = (int *)&v21;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v20,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v15,
            v19,
            0LL,
            0,
            *(_DWORD *)(v17[0] + 1740LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 288LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v20[232] & 4) != 0
            && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v20, (struct RFONTOBJ *)&v15, 0, v18) )
          {
            if ( a5 && v10 )
            {
              v14 = 0;
              do
              {
                if ( *v10 > v16 )
                  break;
                ++v14;
                ++v10;
              }
              while ( v14 < a3 );
              *a5 = v14;
            }
            v8 = 1;
          }
          if ( v13 )
            Win32FreePool(v13);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v20);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      if ( v17[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v17);
      return v8;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
