/*
 * XREFs of _MNIspItemValid@8 @ 0x19760F
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 */

bool __fastcall MNIspItemValid(int a1, int a2)
{
  return MNGetpItemIndex(a1, a2) != -1;
}
