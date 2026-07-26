/*
 * XREFs of ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00681D4
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C001579C (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00185E4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A188 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A5DC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C003D888 (-NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

void __fastcall ndisFNotifyDetach(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  KIRQL v3; // dl
  unsigned __int8 v4[4]; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v5[3]; // [rsp+24h] [rbp-75h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v6; // [rsp+30h] [rbp-69h] BYREF

  v6.PortNumber = 0;
  v6.Header = (_NDIS_OBJECT_HEADER)10748288;
  v6.NetPnPEvent.NetEvent = NetEventFilterPreDetach;
  memset(&v6.NetPnPEvent.NetEvent + 1, 0, 0xA4uLL);
  FilterDriver = a1->FilterDriver;
  if ( (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion > 6u
     || FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == 6
     && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x1Eu)
    && (a1->Flags & 0x10000) == 0 )
  {
    v5[0] = 0;
    if ( ndisReferenceRefEx(&a1->PnPRef.SpinLock, 0x15u, (enum _NDIS_REFERENCE_STATUS *)v5) )
    {
      ndisFForwardNetPnPEventToFilter(a1, &v6);
      ndisDereferenceRef(&a1->PnPRef.SpinLock, 0x15u);
    }
  }
  v4[0] = 0;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, v4);
  v3 = v4[0];
  a1->Flags |= 0x10000u;
  NDIS_RELEASE_FILTER_SPIN_LOCK(a1, v3);
}
