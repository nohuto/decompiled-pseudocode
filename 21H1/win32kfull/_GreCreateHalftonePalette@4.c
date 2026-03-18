/*
 * XREFs of _GreCreateHalftonePalette@4 @ 0x21E27D
 * Callers:
 *     _CreateDIBPalette@8 @ 0x182CEE (_CreateDIBPalette@8.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x7C296 (--1DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 *     ??1NEEDGRELOCK@@QAE@XZ @ 0x1CC63F (--1NEEDGRELOCK@@QAE@XZ.c)
 *     ??1SEMOBJ@@QAE@XZ @ 0x1CCD37 (--1SEMOBJ@@QAE@XZ.c)
 */

int __thiscall GreCreateHalftonePalette(HDC this)
{
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ecx
  int Palette; // eax
  DYNAMICMODECHANGESHARELOCK *v7; // ecx
  _DWORD v9[3]; // [esp+8h] [ebp-28h] BYREF
  int *v10; // [esp+14h] [ebp-1Ch] BYREF
  int v11; // [esp+18h] [ebp-18h]
  _BYTE v12[4]; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-Ch] BYREF
  int v15; // [esp+28h] [ebp-8h] BYREF
  char v16; // [esp+2Fh] [ebp-1h] BYREF

  v1 = 0;
  memset(v9, 0, sizeof(v9));
  XDCOBJ::vLock((XDCOBJ *)v9, this);
  if ( v9[0] )
  {
    v15 = *(_DWORD *)(v9[0] + 36);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v12, (struct PDEVOBJ *)&v15);
    v13 = _ghsemHT;
    GreAcquireSemaphore(_ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v15) || PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v15, 0) )
    {
      v2 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v15);
      LOBYTE(v3) = 8;
      v4 = HmgShareLockCheck(*v2, v3);
      v14 = v4;
      v11 = 0;
      v10 = 0;
      if ( v4 && (v5 = *(_DWORD *)(v4 + 20)) != 0 )
        Palette = PALMEMOBJ::bCreatePalette(
                    (PALMEMOBJ *)&v10,
                    1u,
                    v5,
                    *(const unsigned int **)(v4 + 76),
                    0,
                    0,
                    0,
                    0x100500u,
                    0);
      else
        Palette = PALMEMOBJ::bCreatePalette(
                    (PALMEMOBJ *)&v10,
                    1u,
                    SHIWORD(logDefaultPal[0]),
                    &logDefaultPal[1],
                    0,
                    0,
                    0,
                    0x100500u,
                    0);
      if ( Palette )
      {
        v11 = 1;
        v1 = *v10;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v14);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v13);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v1;
}
