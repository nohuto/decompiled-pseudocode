/*
 * XREFs of ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C00170EC
 * Callers:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0016A4C (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B21C (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 */

bool __fastcall ndisCompareWoLPatterns(struct _NDIS_PM_WOL_PATTERN *a1, struct _NDIS_PM_WOL_PATTERN *a2)
{
  _NDIS_PM_WOL_PACKET WoLPacketType; // r8d
  char v3; // bl
  __int32 v7; // r8d
  unsigned int MaskSize; // eax
  unsigned int PatternSize; // ebp
  __int32 v10; // r8d
  __int32 v11; // r8d
  int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx

  WoLPacketType = a1->WoLPacketType;
  v3 = 0;
  if ( WoLPacketType != a2->WoLPacketType )
    return 0;
  v7 = WoLPacketType - 1;
  if ( !v7 )
  {
    MaskSize = a1->WoLPattern.WoLBitMapPattern.MaskSize;
    if ( MaskSize == a2->WoLPattern.WoLBitMapPattern.MaskSize )
    {
      PatternSize = a1->WoLPattern.WoLBitMapPattern.PatternSize;
      if ( PatternSize == a2->WoLPattern.WoLBitMapPattern.PatternSize
        && !memcmp(
              &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.MaskOffset,
              &a2->Header.Type + a2->WoLPattern.WoLBitMapPattern.MaskOffset,
              MaskSize) )
      {
        return memcmp(
                 &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.PatternOffset,
                 &a2->Header.Type + a2->WoLPattern.WoLBitMapPattern.PatternOffset,
                 PatternSize) == 0;
      }
    }
    return v3;
  }
  v10 = v7 - 1;
  if ( !v10 )
    return 1;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return v3;
      v13 = a1->WoLPattern.IPv4TcpSynParameters.Flags == a2->WoLPattern.IPv4TcpSynParameters.Flags;
    }
    else
    {
      v13 = memcmp(&a1->WoLPattern, &a2->WoLPattern, 0x28uLL) == 0;
    }
  }
  else
  {
    v14 = *(_QWORD *)&a1->WoLPattern.IPv4TcpSynParameters.Flags - *(_QWORD *)&a2->WoLPattern.IPv4TcpSynParameters.Flags;
    if ( !v14 )
      v14 = *(_QWORD *)&a1->WoLPattern.WoLBitMapPattern.MaskSize - *(_QWORD *)&a2->WoLPattern.WoLBitMapPattern.MaskSize;
    v13 = v14 == 0;
  }
  if ( v13 )
    return 1;
  return v3;
}
