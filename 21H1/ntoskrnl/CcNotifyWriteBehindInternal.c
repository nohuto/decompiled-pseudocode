/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x140312440
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x140312420 (CcScanDpc.c)
 *     CcNotifyWriteBehindEx @ 0x14037F530 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x14038A350 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x1404E6A84 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
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
