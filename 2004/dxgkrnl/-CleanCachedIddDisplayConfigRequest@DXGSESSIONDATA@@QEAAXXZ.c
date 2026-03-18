/*
 * XREFs of ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C004A0B8
 * Callers:
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C029E2D4 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A1CC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

void __fastcall DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(ReferenceCounted **this)
{
  __int64 v2; // rdx
  bool v3; // zf
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGFASTMUTEX *const)(this + 2374), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(this + 2380, 0LL);
  ++*((_DWORD *)this + 4758);
  v3 = v4[8] == 0;
  *((_DWORD *)this + 4759) = *((_DWORD *)this + 4758);
  if ( !v3 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4, v2);
}
