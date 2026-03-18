/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1403208E0
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x1403208C0 (CcScanDpc.c)
 *     CcNotifyWriteBehindEx @ 0x140381C50 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x14038D700 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x1404EA5C4 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(__int64 a1, char a2)
{
  LONG result; // eax

  if ( CcInitializationComplete )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 376), 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 400), 0, 0);
    if ( (a2 & 4) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 424), 0, 0);
    if ( (a2 & 8) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
    if ( (a2 & 0x10) != 0 )
      return KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  return result;
}
