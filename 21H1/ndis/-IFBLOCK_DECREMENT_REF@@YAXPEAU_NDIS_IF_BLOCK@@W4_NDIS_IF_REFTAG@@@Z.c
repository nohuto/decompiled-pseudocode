/*
 * XREFs of ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187E4
 * Callers:
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x1C00186C0 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00212F0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002B46C (ndisIfRegisterInterfaceEx.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003EDD0 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00B1334 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x1C00B1980 (ndisIfDetachMiniportBlock.c)
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B1B54 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ndisNsiQueuedTimestampingChangeNotification @ 0x1C00B2E40 (ndisNsiQueuedTimestampingChangeNotification.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B2F88 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B31A4 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B3620 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B3C10 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B3F00 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000EFB0 (NdisDereferenceWithTag.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B0BC0 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00B41D0 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C00B520C (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE2F0 (NdisFreeRefCount.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *v9; // rcx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx

  NdisDereferenceWithTag((ULONG_PTR)a1->RefCountTracker, a2);
  if ( a1->Ref-- == 1 )
  {
    ndisIfDeleteStackEntries(a1);
    Flink = a1->Link.Flink;
    if ( Flink->Blink != &a1->Link )
      goto LABEL_16;
    Blink = a1->Link.Blink;
    if ( Blink->Flink != &a1->Link )
      goto LABEL_16;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v6 = a1->ProviderLink.Flink;
    if ( v6->Blink != &a1->ProviderLink
      || (v7 = a1->ProviderLink.Blink, v7->Flink != &a1->ProviderLink)
      || (v7->Flink = v6, v6->Blink = v7, v8 = a1->NetworkLink.Flink, v8->Blink != &a1->NetworkLink)
      || (v9 = a1->NetworkLink.Blink, v9->Flink != &a1->NetworkLink) )
    {
LABEL_16:
      __fastfail(3u);
    }
    v9->Flink = v8;
    v8->Blink = v9;
    NETWORKBLOCK_DECREMENT_REF(a1->Network);
    ndisIfFreeIfIndex(a1->ifIndex);
    RefCountTracker = a1->RefCountTracker;
    --ndisInterfaceCount;
    NdisFreeRefCount((ULONG_PTR)RefCountTracker);
    ifL2NetworkInfo = a1->ifL2NetworkInfo;
    a1->RefCountTracker = 0LL;
    if ( ifL2NetworkInfo )
    {
      ExFreePoolWithTag(ifL2NetworkInfo, 0);
      a1->ifL2NetworkInfo = 0LL;
    }
    ifRcvAddressTable = a1->ifRcvAddressTable;
    if ( ifRcvAddressTable )
    {
      ExFreePoolWithTag(ifRcvAddressTable, 0);
      a1->ifRcvAddressTable = 0LL;
      a1->ifRcvAddressCount = 0;
      a1->ifMaxRcvAddressCount = 0;
    }
    AsyncEvent = a1->AsyncEvent;
    if ( AsyncEvent )
      KeSetEvent(AsyncEvent, 0, 0);
    ExFreePoolWithTag(a1, 0);
  }
}
