/*
 * XREFs of _MNGetpItem@8 @ 0x1975F9
 * Callers:
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 * Callees:
 *     <none>
 */

int __fastcall MNGetpItem(int a1, unsigned int a2)
{
  if ( **(_DWORD **)a1 )
    return MNGetpItemFromIndex(*(_DWORD *)(**(_DWORD **)a1 + 20), a2);
  else
    return 0;
}
