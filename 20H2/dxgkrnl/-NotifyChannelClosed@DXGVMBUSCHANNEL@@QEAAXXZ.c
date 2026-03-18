/*
 * XREFs of ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B20DC
 * Callers:
 *     ProcessChannelClosed @ 0x1C02B2930 (ProcessChannelClosed.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02B1F3C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
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
