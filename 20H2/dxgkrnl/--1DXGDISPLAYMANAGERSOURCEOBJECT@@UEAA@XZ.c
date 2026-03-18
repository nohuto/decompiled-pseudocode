/*
 * XREFs of ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C02AF94C
 * Callers:
 *     ??_EDXGDISPLAYMANAGERSOURCEOBJECT@@UEAAPEAXI@Z @ 0x1C004C5F0 (--_EDXGDISPLAYMANAGERSOURCEOBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A22C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001AE24 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C02B0340 (-OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z.c)
 */

void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::~DXGDISPLAYMANAGERSOURCEOBJECT(DXGDISPLAYMANAGERSOURCEOBJECT *this)
{
  struct DXGFASTMUTEX *v1; // rdx
  __int64 v3; // rdx
  DXGDISPLAYMANAGEROBJECT *v4; // rcx
  DXGFASTMUTEX *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 8);
  *(_QWORD *)this = &DXGDISPLAYMANAGERSOURCEOBJECT::`vftable';
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, v1, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v4 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 6);
  if ( v4 )
    DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(v4, this);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6, v3);
  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 8);
  if ( v5 )
    DXGFASTMUTEX::`scalar deleting destructor'(v5, v3);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)this + 6, 0LL);
  *(_QWORD *)this = &SetElement::`vftable';
}
