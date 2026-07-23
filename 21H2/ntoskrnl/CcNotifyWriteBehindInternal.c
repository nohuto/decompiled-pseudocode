/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1402405C0
 * Callers:
 *     CcScanDpc @ 0x1402405A0 (CcScanDpc.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindEx @ 0x1403848C8 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x14038DF70 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x1404EC394 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
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
