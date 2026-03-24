/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1402C2120
 * Callers:
 *     CcScanDpc @ 0x1402C2100 (CcScanDpc.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindEx @ 0x140384778 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x14038DE20 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x1404EC154 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
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
