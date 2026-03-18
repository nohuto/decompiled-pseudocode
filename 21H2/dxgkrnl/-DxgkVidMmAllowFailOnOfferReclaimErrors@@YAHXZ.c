/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C02CF500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  return !Current || (*((_DWORD *)Current + 106) & 4) == 0;
}
