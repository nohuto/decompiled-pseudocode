/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02B78FC
 * Callers:
 *     CreateDIBPalette @ 0x1C0220148 (CreateDIBPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078350 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CA064 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00D085C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00D4FF8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026DFB0 (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026E694 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  HPALETTE *v5; // rax
  unsigned int v6; // r8d
  const unsigned int *v7; // r9
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  _BYTE v10[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp-20h]
  _QWORD v13[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v4 = 0LL;
  if ( v13[0] )
  {
    v15 = *(_QWORD *)(v13[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14, v1, v2, v3);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v10, (struct PDEVOBJ *)&v15);
    v16 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v15) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v15, 0LL) )
    {
      v5 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v15);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v14, *v5);
      v12 = 0;
      v11 = 0LL;
      if ( v14 && (v6 = *(_DWORD *)(v14 + 28)) != 0 )
      {
        v7 = *(const unsigned int **)(v14 + 112);
      }
      else
      {
        v6 = logDefaultPal[1];
        v7 = (const unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v11, 1u, v6, v7, 0, 0, 0, 0x100500u, 0) )
      {
        v12 = 1;
        v4 = *v11;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v11);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v14);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v16);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v10);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v4;
}
