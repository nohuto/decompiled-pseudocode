/*
 * XREFs of ?TouchMessageFromState@@YGIW4TOUCHSTATE@@@Z @ 0x149520
 * Callers:
 *     ?CopyTouchInputListSorted@@YGHPBUtagTOUCHINPUTLIST@@PAU1@HPAIPAH@Z @ 0x149084 (-CopyTouchInputListSorted@@YGHPBUtagTOUCHINPUTLIST@@PAU1@HPAIPAH@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall TouchMessageFromState(int a1)
{
  int result; // eax

  if ( a1 == 1 )
    return 2;
  if ( a1 == 2 )
    return 1;
  if ( a1 <= 2 )
    return 0;
  result = 4;
  if ( a1 <= 4 )
    return result;
  return a1 <= 6;
}
