/*
 * XREFs of CcScheduleLazyWriteScanVolume @ 0x14053DA58
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x14053D99C (CcRescheduleLazyWriteScanOnVolume.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcNotifyWriteBehindVolume @ 0x14053D2E4 (CcNotifyWriteBehindVolume.c)
 */

char __fastcall CcScheduleLazyWriteScanVolume(_BYTE *a1, char a2, char a3)
{
  char result; // al
  char v6; // dl

  result = a1[1172];
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindVolume((__int64)a1, v6);
    }
    else if ( !a1[985] )
    {
      if ( !a1[984] )
        KeBugCheckEx(0x34u, 0x660uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = KiSetTimerEx((unsigned __int64)(a1 + 920), CcFirstDelay, 0, 0, 0LL);
    }
    if ( !a1[1172] )
      a1[985] = 1;
  }
  return result;
}
