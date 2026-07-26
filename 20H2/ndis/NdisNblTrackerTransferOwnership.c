/*
 * XREFs of NdisNblTrackerTransferOwnership @ 0x1C0074530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerHandleFromNdisObjectHandle@@YAPEAUNDIS_NBL_TRACKER_HANDLE__@@PEAU1@@Z @ 0x1C0073D4C (-ndisNblTrackerHandleFromNdisObjectHandle@@YAPEAUNDIS_NBL_TRACKER_HANDLE__@@PEAU1@@Z.c)
 */

void __fastcall NdisNblTrackerTransferOwnership(
        __int64 a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  struct NDIS_NBL_TRACKER_HANDLE__ *v5; // r8
  struct NDIS_NBL_TRACKER_HANDLE__ *v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // r10
  struct _NET_BUFFER_LIST *v9; // r11

  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    ndisNblTrackerHandleFromNdisObjectHandle(a2);
    v6 = ndisNblTrackerHandleFromNdisObjectHandle(v5);
    ndisNblTrackerTransferOwnershipInternal(v9, v8, (unsigned __int64)v6, v7, a5);
  }
}
