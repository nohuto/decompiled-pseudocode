/*
 * XREFs of GreGetRealizationInfo @ 0x1C015D9E8
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C00A60F0 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00AA0A4 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int RealizationInfo; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF

  RealizationInfo = 0;
  v5[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v6 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v6, (struct XDCOBJ *)v5, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v6 + 504));
    if ( v6 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v6, a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  }
  return RealizationInfo;
}
