/*
 * XREFs of ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C0023948
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0023444 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     ndisRssPmObjectHeaderFixup @ 0x1C00239DC (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

__int64 __fastcall ndisMSetRssCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_RECEIVE_SCALE_CAPABILITIES *a2)
{
  _NDIS_RECEIVE_SCALE_CAPABILITIES *p_RecvScaleCapabilities; // rsi
  int v5; // r8d
  char v6; // r10
  int v7; // r9d
  __int16 v9; // [rsp+20h] [rbp-18h]

  p_RecvScaleCapabilities = &a1->RecvScaleCapabilities;
  *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type = 0LL;
  *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries = 0;
  v5 = 18;
  v6 = 3;
  v7 = a2->Header.Revision - 1;
  if ( a2->Header.Revision == 1 )
  {
    v6 = 1;
    v5 = 16;
  }
  else
  {
    v7 = a2->Header.Revision - 2;
    if ( a2->Header.Revision == 2 )
      v6 = 2;
  }
  v9 = v5;
  LOBYTE(v5) = -120;
  LOBYTE(v7) = v6;
  if ( (unsigned __int8)ndisRssPmObjectHeaderFixup((unsigned int)"RecvScaleCapabilities", (_DWORD)a2, v5, v7, v9)
    && (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x50u) )
  {
    return 3223519276LL;
  }
  memmove(p_RecvScaleCapabilities, a2, a2->Header.Size);
  return 0LL;
}
