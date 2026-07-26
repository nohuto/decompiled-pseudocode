/*
 * XREFs of memcmp @ 0x1C003FFE0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00099E0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C870 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F830 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0012DF4 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C00172FC (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001BA78 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x1C0024A24 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FF9C (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00378FC (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006F244 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006F574 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089BCC (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1C008F74C (-ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z.c)
 *     ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009300C (-ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093730 (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093900 (-ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00942D4 (-ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00944E0 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094C20 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B1B68 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00BEA64 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ndisLwfSortPredicate @ 0x1C012500C (ndisLwfSortPredicate.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0126DD8 (ndisIfUpdateStringIfNeeded.c)
 *     ndisIfFindNextRcvAddress @ 0x1C0127764 (ndisIfFindNextRcvAddress.c)
 *     ndisIfFindRcvAddress @ 0x1C01277F4 (ndisIfFindRcvAddress.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C013A698 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
