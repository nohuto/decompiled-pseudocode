/*
 * XREFs of BgkSetDisplayOwnership @ 0x1403CBFD0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(char a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
