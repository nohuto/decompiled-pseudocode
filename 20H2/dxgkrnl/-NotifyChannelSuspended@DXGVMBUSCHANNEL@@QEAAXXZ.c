/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B2290
 * Callers:
 *     ProcessChannelSuspended @ 0x1C02B29D0 (ProcessChannelSuspended.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(PRKEVENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PRKEVENT *v8; // rdi
  PRKEVENT v9; // rcx
  __int64 v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(this + 9), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v8 = (PRKEVENT *)this[6];
  while ( v8 != this + 6 )
  {
    v9 = v8[14];
    v8 = (PRKEVENT *)*v8;
    (*(void (__fastcall **)(PRKEVENT))(*(_QWORD *)&v9->Header.Lock + 32LL))(v9);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v5);
  *((_BYTE *)this + 25) = 1;
  if ( this[4] )
  {
    if ( *((_BYTE *)this + 26) )
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v10 + 24) = this;
      WdLogEvent5_WdWarning(v10);
      KeSetEvent(this[4], 0, 0);
    }
  }
}
