/*
 * XREFs of ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008F988
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0090B0C (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094FF8 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreatePMProtocolOffloadEntry(
        struct _NDIS_PM_PROTOCOL_OFFLOAD *Src,
        unsigned int a2)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *PoolWithTag; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v5; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  PoolWithTag = (struct _NDIS_PACKET_PATTERN_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x130uLL, 0x706F444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _NDIS_PACKET_PATTERN_ENTRY));
    memmove(&v5->48, Src, 0x100uLL);
    v5->Priority = v5->Pattern.MaskSize;
    result = v5;
    v5->Size = 304;
    v5->PortNumber = a2;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x5Fu,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    return 0LL;
  }
  return result;
}
