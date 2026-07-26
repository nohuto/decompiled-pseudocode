/*
 * XREFs of ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C002563C
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C0025470 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025674 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C00622C4 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B0C90 (-ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B0E70 (-ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00B1334 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterface(int a1)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( HIDWORD(Flink[-77].Flink) == a1 )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v2;
}
