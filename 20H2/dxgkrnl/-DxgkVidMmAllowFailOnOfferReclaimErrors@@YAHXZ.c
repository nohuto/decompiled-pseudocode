/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C0220800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rcx

  Current = DXGPROCESS::GetCurrent(a1, a2);
  return !Current || *((_BYTE *)Current + 346) == 0;
}
