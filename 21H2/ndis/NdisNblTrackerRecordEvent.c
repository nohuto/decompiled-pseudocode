/*
 * XREFs of NdisNblTrackerRecordEvent @ 0x1C0074680
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall NdisNblTrackerRecordEvent(struct _NET_BUFFER_LIST *a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, a3, a2, a4);
}
