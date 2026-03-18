/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x140389160
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindEx @ 0x14038AA18 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x1403992C0 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x14053E098 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x14053C3E4 (CcForEachPrivateVolumeCacheMap.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(__int64 a1, int a2)
{
  LONG result; // eax
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( CcInitializationComplete && *(_BYTE *)(a1 + 1300) )
  {
    if ( CcEnablePerVolumeLazyWriter == 1 )
    {
      return CcForEachPrivateVolumeCacheMap(a1, CcNotifyWriteBehindAllVolumesHelper, &v4);
    }
    else
    {
      if ( (a2 & 1) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 2) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 4) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 984) )
          KeBugCheckEx(0x34u, 0x12B3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx(a1 + 920, 0LL, 0, 0, 0LL);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 8) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 0x10) != 0 )
        return KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    }
  }
  return result;
}
