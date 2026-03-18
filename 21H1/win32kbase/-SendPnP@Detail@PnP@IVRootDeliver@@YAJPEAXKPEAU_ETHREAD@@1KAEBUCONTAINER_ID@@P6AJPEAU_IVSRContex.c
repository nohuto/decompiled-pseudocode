/*
 * XREFs of ?SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BE8E4
 * Callers:
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BE92C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BEBCC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BEF64 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCAA4 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCB5C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

int __fastcall IVRootDeliver::PnP::Detail::SendPnP(
        IVRootDeliver::PnP::Detail *this,
        void *a2,
        struct _ETHREAD *a3,
        struct _ETHREAD *a4,
        struct _ETHREAD *a5,
        struct CONTAINER_ID *a6)
{
  if ( *(_WORD *)a6 || *((_WORD *)a6 + 1) )
    return ivrIVSend(this, (unsigned int)a2, a3, a4, (unsigned int)a5, a6);
  else
    return ivrIVBroadcast(this, (unsigned int)a2, a3, a4, (unsigned int)a5, a6);
}
