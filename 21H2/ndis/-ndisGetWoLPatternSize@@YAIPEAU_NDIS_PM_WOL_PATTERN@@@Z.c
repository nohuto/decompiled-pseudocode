/*
 * XREFs of ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C0016C1C
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00169B0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016ECC (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C003BD50 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093D8C (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetWoLPatternSize(struct _NDIS_PM_WOL_PATTERN *a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d

  result = 196LL;
  if ( a1->WoLPacketType == NdisPMWoLPacketBitmapPattern )
  {
    v2 = a1->WoLPattern.WoLBitMapPattern.MaskSize + a1->WoLPattern.WoLBitMapPattern.MaskOffset;
    if ( v2 <= a1->WoLPattern.WoLBitMapPattern.PatternOffset + a1->WoLPattern.WoLBitMapPattern.PatternSize )
      v2 = a1->WoLPattern.WoLBitMapPattern.PatternOffset + a1->WoLPattern.WoLBitMapPattern.PatternSize;
    if ( v2 > 0xC4 )
      return v2;
  }
  return result;
}
