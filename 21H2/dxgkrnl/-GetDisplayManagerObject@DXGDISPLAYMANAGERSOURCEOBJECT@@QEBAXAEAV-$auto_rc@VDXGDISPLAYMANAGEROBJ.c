/*
 * XREFs of ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C02F3FFC
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01C414C (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001E3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(__int64 a1, ReferenceCounted **a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGFASTMUTEX *const)(a1 + 64), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(a2, *(ReferenceCounted **)(a1 + 48));
  if ( *a2 )
    _InterlockedIncrement((volatile signed __int32 *)*a2 + 2);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
