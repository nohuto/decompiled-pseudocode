/*
 * XREFs of ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00AAA38
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A680 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AC64 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

char __fastcall ndisFIndicateTimestampChange(
        struct _NDIS_FILTER_BLOCK *a1,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  char v6; // bl
  size_t v7; // rdi
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rax

  v6 = 1;
  if ( a4 < 0x36 || *(_BYTE *)a3 != 0x80 || a3[1] < 0x36u || !*((_BYTE *)a3 + 1) )
    return 0;
  v7 = 56LL;
  if ( a2 == 1074073600 )
  {
    HwTimestampCapabilities = a1->HwTimestampCapabilities;
    if ( HwTimestampCapabilities )
      goto LABEL_13;
    HwTimestampCapabilities = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(
                                                                NonPagedPoolNx,
                                                                0x38uLL,
                                                                0x7374444Eu);
    a1->HwTimestampCapabilities = HwTimestampCapabilities;
  }
  else
  {
    HwTimestampCapabilities = a1->HwTimestampCurrentConfig;
    if ( HwTimestampCapabilities )
      goto LABEL_13;
    HwTimestampCapabilities = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(
                                                                NonPagedPoolNx,
                                                                0x38uLL,
                                                                0x7374444Eu);
    a1->HwTimestampCurrentConfig = HwTimestampCapabilities;
  }
  if ( !HwTimestampCapabilities )
    return 0;
LABEL_13:
  *(_OWORD *)&HwTimestampCapabilities->Header.Type = 0LL;
  *(_OWORD *)&HwTimestampCapabilities->CrossTimestamp = 0LL;
  *(_OWORD *)&HwTimestampCapabilities->Reserved2 = 0LL;
  *(_QWORD *)&HwTimestampCapabilities->TimestampFlags.AllReceiveHw = 0LL;
  if ( a3[1] < 0x38u )
    v7 = a3[1];
  memmove(HwTimestampCapabilities, a3, v7);
  return v6;
}
