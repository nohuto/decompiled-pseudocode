/*
 * XREFs of ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C003B9F0
 * Callers:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0016A4C (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B21C (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C0016A0C (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWoLPatternEntry(
        struct _NDIS_PM_WOL_PATTERN *Src,
        unsigned int a2)
{
  unsigned int WoLPatternSize; // ebp
  unsigned int v5; // edi
  struct _NDIS_PACKET_PATTERN_ENTRY *PoolWithTag; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v7; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax
  unsigned __int16 v9; // r9

  WoLPatternSize = ndisGetWoLPatternSize(Src);
  v5 = WoLPatternSize + 108;
  if ( WoLPatternSize + 108 < 0x130 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 59;
      goto LABEL_8;
    }
  }
  else
  {
    PoolWithTag = (struct _NDIS_PACKET_PATTERN_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7770444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      memmove(&v7->48, Src, WoLPatternSize);
      v7->Priority = v7->Pattern.MaskSize;
      result = v7;
      v7->Size = v5;
      v7->PortNumber = a2;
      return result;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 60;
LABEL_8:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v9,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    }
  }
  return 0LL;
}
