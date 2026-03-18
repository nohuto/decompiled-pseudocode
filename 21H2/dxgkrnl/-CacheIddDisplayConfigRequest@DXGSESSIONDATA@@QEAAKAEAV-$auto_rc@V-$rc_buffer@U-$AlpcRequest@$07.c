/*
 * XREFs of ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02EBF24
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001E3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

__int64 __fastcall DXGSESSIONDATA::CacheIddDisplayConfigRequest(__int64 a1, volatile signed __int32 **a2)
{
  volatile signed __int32 *v4; // rdx
  unsigned int v5; // ebx
  bool v6; // zf
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(a1 + 19024), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = *a2;
  if ( *a2 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = *a2;
  }
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)(a1 + 19080), (ReferenceCounted *)v4);
  v5 = *(_DWORD *)(a1 + 19072) + 1;
  v6 = v8[8] == 0;
  *(_DWORD *)(a1 + 19072) = v5;
  if ( !v6 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v5;
}
