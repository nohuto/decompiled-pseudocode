/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0356238
 * Callers:
 *     ProcessChannelSuspended @ 0x1C0356980 (ProcessChannelSuspended.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(PRKEVENT *this, __int64 a2)
{
  PRKEVENT *v3; // rdi
  PRKEVENT v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (struct DXGFASTMUTEX *const)(this + 9), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = (PRKEVENT *)this[6];
  while ( v3 != this + 6 )
  {
    v4 = v3[15];
    v3 = (PRKEVENT *)*v3;
    (*(void (__fastcall **)(PRKEVENT))(*(_QWORD *)&v4->Header.Lock + 32LL))(v4);
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  *((_BYTE *)this + 25) = 1;
  if ( this[4] )
  {
    if ( *((_BYTE *)this + 26) )
    {
      WdLogSingleEntry1(3LL, this);
      KeSetEvent(this[4], 0, 0);
    }
  }
}
