/*
 * XREFs of ?UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ @ 0x1C02AF2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x1C02AF1E8 (-Release@DXGVMBUSCHANNEL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::UnregisterAsSubscriber(DXGCHANNELENDPOINTPROXY *this)
{
  __int64 v1; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(v1 + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v3 = (_QWORD *)((char *)this + 16);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  DXGVMBUSCHANNEL::Release((DXGVMBUSCHANNEL *)v1);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v6);
  return 0LL;
}
