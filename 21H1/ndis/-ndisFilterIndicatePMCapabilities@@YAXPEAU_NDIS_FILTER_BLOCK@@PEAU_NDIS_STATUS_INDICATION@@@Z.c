/*
 * XREFs of ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008F738
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001ACA4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisUpdatePMCurrentParameters@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C0094D44 (-ndisUpdatePMCurrentParameters@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 */

void __fastcall ndisFilterIndicatePMCapabilities(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // r8d
  unsigned __int16 *StatusBuffer; // rax
  unsigned int v5; // ecx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  unsigned int v9; // eax
  struct _NDIS_PM_CAPABILITIES v10; // [rsp+20h] [rbp-40h] BYREF

  StatusBufferSize = a2->StatusBufferSize;
  StatusBuffer = (unsigned __int16 *)a2->StatusBuffer;
  memset(&v10.Header.Revision, 0, 59);
  if ( StatusBufferSize >= 0x34 )
  {
    v5 = StatusBuffer[1];
    if ( StatusBufferSize >= v5 )
    {
      v6 = *((_OWORD *)StatusBuffer + 1);
      *(_OWORD *)&v10.Header.Type = *(_OWORD *)StatusBuffer;
      v7 = *((_OWORD *)StatusBuffer + 2);
      *(_OWORD *)&v10.MaxWoLPatternSize = v6;
      *(_OWORD *)&v10.NumArpOffloadIPv4Addresses = v7;
      if ( v5 >= 0x3C )
      {
        v8 = *((_QWORD *)StatusBuffer + 6);
        v9 = *((_DWORD *)StatusBuffer + 14);
        *(_QWORD *)&v10.MinLinkChangeWakeUp = v8;
        v10.MediaSpecificWakeUpEvents = v9;
      }
      else
      {
        v10.MinLinkChangeWakeUp = *((_DWORD *)StatusBuffer + 12);
      }
      ndisUpdatePMCurrentParameters(&v10, &a1->PMCurrentParameters);
    }
  }
}
