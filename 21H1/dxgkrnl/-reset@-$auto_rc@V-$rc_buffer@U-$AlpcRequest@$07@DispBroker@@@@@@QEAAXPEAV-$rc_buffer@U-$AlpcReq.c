/*
 * XREFs of ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A27C
 * Callers:
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00490A8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ.c)
 *     DxgkDispMgrCreate @ 0x1C012B480 (DxgkDispMgrCreate.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C014F214 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01527B0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0152AB0 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02568F0 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0256B4C (DxgkIddHandleSetDisplayConfig.c)
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C02AC3EC (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 *     ??R?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C02AC4A0 (--R-$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGER.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C02ACC2C (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(ReferenceCounted **a1, __int64 a2)
{
  ReferenceCounted *v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && (ReferenceCounted *)a2 != v4 )
    result = ReferenceCounted::Release(v4, a2);
  *a1 = (ReferenceCounted *)a2;
  return result;
}
