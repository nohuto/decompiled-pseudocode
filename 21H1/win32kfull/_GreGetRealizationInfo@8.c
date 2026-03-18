/*
 * XREFs of _GreGetRealizationInfo@8 @ 0xF6E26
 * Callers:
 *     _NtGdiGetRealizationInfo@8 @ 0x61AE0 (_NtGdiGetRealizationInfo@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QAEHPAUtagFONT_REALIZATION_INFO2@@@Z @ 0x619DC (-GetRealizationInfo@RFONTOBJ@@QAEHPAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

int __fastcall GreGetRealizationInfo(HDC a1, struct _IFIMETRICS *a2)
{
  int RealizationInfo; // esi
  _DWORD v5[3]; // [esp+8h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-4h] BYREF

  RealizationInfo = 0;
  v5[1] = 0;
  v5[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v6 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v6, (struct XDCOBJ *)v5, 0, 2u) )
      GreAcquireSemaphore(*(_DWORD *)(v6 + 548));
    if ( v6 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v6, a2, (struct tagFONT_REALIZATION_INFO2 *)a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  }
  return RealizationInfo;
}
