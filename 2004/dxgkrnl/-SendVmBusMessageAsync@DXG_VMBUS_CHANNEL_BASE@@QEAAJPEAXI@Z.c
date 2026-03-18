/*
 * XREFs of ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C023AE78
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0239210 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C003FE34 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(struct _KTHREAD **this, void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGGLOBAL *Global; // rax
  _BYTE v14[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, this + 1, 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v16 = 1;
  if ( *((_BYTE *)this + 56) )
  {
    if ( a3 <= 0x20000 )
    {
      v9 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))qword_1C00B3130)(
             *this,
             a2,
             a3,
             0LL,
             0,
             0LL,
             0LL,
             0LL);
      Global = DXGGLOBAL::GetGlobal(v12, v11);
      DXGGLOBAL::CheckDebugBreak(Global);
      goto LABEL_5;
    }
    v8 = WdLogNewEntry5_WdWarning(0LL, v6, v7);
    *(_QWORD *)(v8 + 24) = 13417LL;
    WdLogEvent5_WdWarning(v8);
  }
  v9 = -1073741811;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v9;
}
