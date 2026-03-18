/*
 * XREFs of ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B2194
 * Callers:
 *     ProcessChannelPostStarted @ 0x1C02B2960 (ProcessChannelPostStarted.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  char v9; // di
  struct _KEVENT *v10; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((struct _KTHREAD **)this + 16) != KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 112));
    v5 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v7 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v7 != (_QWORD *)((char *)this + 48) )
  {
    v8 = v7[14];
    v7 = (_QWORD *)*v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v6);
  v9 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v5 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14, v6);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v10 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    if ( v9 )
      KeSetEvent(v10, 0, 0);
  }
}
