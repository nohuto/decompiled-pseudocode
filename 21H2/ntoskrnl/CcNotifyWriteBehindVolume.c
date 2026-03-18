/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x14053D2E4
 * Callers:
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 *     CcNotifyWriteBehindHelper @ 0x1403992C0 (CcNotifyWriteBehindHelper.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x1405398C0 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcReapPrivateVolumeCachemap @ 0x14053D880 (CcReapPrivateVolumeCachemap.c)
 *     CcScheduleLazyWriteScanVolume @ 0x14053DA58 (CcScheduleLazyWriteScanVolume.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LONG __fastcall CcNotifyWriteBehindVolume(__int64 a1, char a2)
{
  LONG result; // eax

  if ( *(_BYTE *)(a1 + 1173) && *(_BYTE *)(a1 + 1236) )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    if ( (a2 & 4) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 984) )
        KeBugCheckEx(0x34u, 0x5EBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = KiSetTimerEx(a1 + 920, 0LL, 0, 0, 0LL);
    }
    if ( (a2 & 8) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
    if ( (a2 & 0x10) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    if ( (a2 & 0x20) != 0 )
      return KeSetEvent((PRKEVENT)(a1 + 1560), 0, 0);
  }
  return result;
}
