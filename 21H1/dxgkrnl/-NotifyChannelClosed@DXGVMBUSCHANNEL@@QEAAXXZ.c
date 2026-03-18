/*
 * XREFs of ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02AEB7C
 * Callers:
 *     ProcessChannelClosed @ 0x1C02AF3D0 (ProcessChannelClosed.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02AE9DC (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelClosed(struct _EX_RUNDOWN_REF *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  DXGVMBUSCHANNEL *Count; // rbx
  unsigned __int64 v7; // rdx
  DXGVMBUSCHANNEL *v8; // rax
  struct _KEVENT *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  ExWaitForRundownProtectionRelease(this + 8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)&this[9], 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  Count = (DXGVMBUSCHANNEL *)this[6].Count;
  while ( Count != (DXGVMBUSCHANNEL *)&this[6] )
  {
    v7 = (unsigned __int64)Count - 16;
    v8 = Count;
    Count = *(DXGVMBUSCHANNEL **)Count;
    DXGCHANNELENDPOINTPROXY::NotifyChannelClosed((DXGCHANNELENDPOINTPROXY *)(v7 & -(__int64)(v8 != 0LL)));
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v5);
  v9 = (struct _KEVENT *)this[4].Count;
  if ( v9 )
    KeSetEvent(v9, 0, 0);
}
