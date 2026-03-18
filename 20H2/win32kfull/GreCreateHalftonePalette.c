/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02B635C
 * Callers:
 *     CreateDIBPalette @ 0x1C021F2B8 (CreateDIBPalette.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0069D68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C006D308 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0100B24 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026C990 (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D074 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rbx
  HPALETTE *v2; // rax
  unsigned int v3; // r8d
  const unsigned int *v4; // r9
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  _BYTE v7[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp-20h]
  _QWORD v10[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = 0LL;
  if ( v10[0] )
  {
    v12 = *(_QWORD *)(v10[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v7, (struct PDEVOBJ *)&v12);
    v13 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v12) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v12, 0LL) )
    {
      v2 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v12);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v11, *v2);
      v9 = 0;
      v8 = 0LL;
      if ( v11 && (v3 = *(_DWORD *)(v11 + 28)) != 0 )
      {
        v4 = *(const unsigned int **)(v11 + 112);
      }
      else
      {
        v3 = logDefaultPal[1];
        v4 = (const unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v8, 1u, v3, v4, 0, 0, 0, 0x100500u, 0) )
      {
        v9 = 1;
        v1 = *v8;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v8);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v11);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v13);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v7);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v1;
}
