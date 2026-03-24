/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C023AAFC
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0238F80 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C0040C90 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int *v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, this + 1, 0);
  DXGPUSHLOCK::AcquireShared(v19);
  v11 = *((_BYTE *)this + 56) == 0;
  v20 = 1;
  if ( v11 )
    goto LABEL_6;
  if ( a3 > 0x20000 || (v9 = a5, *a5 > 0x20000) )
  {
    v16 = WdLogNewEntry5_WdWarning(v9, 1LL, v10);
    *(_QWORD *)(v16 + 24) = 13549LL;
    WdLogEvent5_WdWarning(v16);
LABEL_6:
    v12 = -1073741811;
    goto LABEL_7;
  }
  v12 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, int, void *, unsigned int *, _QWORD))qword_1C00B4340)(
          *this,
          a2,
          a3,
          0LL,
          1,
          a4,
          a5,
          0LL);
  Global = DXGGLOBAL::GetGlobal(v14, v13);
  DXGGLOBAL::CheckDebugBreak(Global);
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v12;
}
