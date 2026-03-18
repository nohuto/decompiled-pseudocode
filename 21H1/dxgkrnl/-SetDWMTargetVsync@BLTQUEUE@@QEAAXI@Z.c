/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C005D2AC
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0141110 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C0210E24 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0039DA0 (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  struct _KEVENT *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v4 = (struct _KEVENT *)*((_QWORD *)this + 47);
  v9 = 2;
  KeResetEvent(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqq_EtwWriteTransfer(v5, &EventDWMVsyncCountWait, v6, a2, *((_DWORD *)this + 110), 0, 0);
  *((_DWORD *)this + 96) = a2;
  if ( a2 <= *((_DWORD *)this + 110) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 47), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
