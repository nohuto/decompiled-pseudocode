/*
 * XREFs of MNGetpItem @ 0x1C02375D0
 * Callers:
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024B1A0 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  if ( **(_QWORD **)a1 )
    return MNGetpItemFromIndex(*(_QWORD *)(**(_QWORD **)a1 + 40LL), a2);
  else
    return 0LL;
}
