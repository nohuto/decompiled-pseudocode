/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C003E7D4
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C007438C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003E720 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E860 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rbx

  v7 = a4;
  if ( !a2 && !a1->SourceHandle )
    a1->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                 a3 & 0xFFFFFFFFFFFFFFFDuLL,
                                 0LL,
                                 a3 & 0xFFFFFFFFFFFFFFFDuLL,
                                 a4);
  if ( (a2 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(a1) )
  {
    v7 |= 4uLL;
  }
  else if ( a1->SourceHandle != a5 || a1->ParentNetBufferList )
  {
    ++*a6;
  }
  else
  {
    v7 = 24LL;
    ++*a7;
    ++*a6;
  }
  a1->NetBufferListInfo[27] = (void *)v7;
}
