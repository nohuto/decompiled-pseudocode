/*
 * XREFs of ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00BEC1C
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0017A64 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE4D8 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE604 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1C0127DFC (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseStackTrace(ULONG_PTR Signature)
{
  ULONG_PTR v1; // rbx
  KIRQL v2; // di
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v3; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // rbx
  int v5; // r8d
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = (unsigned int)Signature;
  if ( LOBYTE(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1);
    if ( (_DWORD)v1 == 1 )
    {
      --LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
    }
    else
    {
      memset(&Context, 0, sizeof(Context));
      v3 = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v1, &Context);
      v4 = v3;
      if ( v3 )
      {
        v5 = LODWORD(v3[1].Linkage.Flink) ^ (LODWORD(v3[1].Linkage.Flink) ^ (LODWORD(v3[1].Linkage.Flink) - 1)) & 0x3FFFFFFF;
        LODWORD(v3[1].Linkage.Flink) = v5;
        if ( (v5 & 0x3FFFFFFF) == 0 )
        {
          RtlRemoveEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v3, &Context);
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1, v2);
  }
}
