/*
 * XREFs of ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C02B3504
 * Callers:
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C02B33F8 (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C02B359C (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProxyFromSubscriberTag(
        DXGVMBUSCHANNEL *this,
        int a2,
        struct DXGCHANNELENDPOINTPROXY **a3)
{
  unsigned int v6; // edi
  struct DXGCHANNELENDPOINTPROXY *v7; // rdx
  _QWORD **v8; // rbx
  _QWORD *i; // r9
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = -1073741275;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v8 = (_QWORD **)((char *)this + 48);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v7 = (struct DXGCHANNELENDPOINTPROXY *)((unsigned __int64)(i - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)i >> 64));
    if ( *((_DWORD *)v7 + 9) == a2 )
    {
      *a3 = v7;
      v6 = 0;
      break;
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, (__int64)v7);
  return v6;
}
