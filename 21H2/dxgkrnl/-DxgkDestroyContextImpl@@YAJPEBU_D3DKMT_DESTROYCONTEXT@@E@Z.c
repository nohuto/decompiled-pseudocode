/*
 * XREFs of ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00E5948
 * Callers:
 *     DxgkDestroyContext @ 0x1C00E5930 (DxgkDestroyContext.c)
 *     DxgkDestroyContextInternal @ 0x1C016F01C (DxgkDestroyContextInternal.c)
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023FE60 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002AC0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004280 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C026C9BC (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_DESTROYCONTEXT *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hContext; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v26[2]; // [rsp+20h] [rbp-68h] BYREF
  int v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  char v29; // [rsp+40h] [rbp-48h]
  _BYTE v30[24]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-28h] BYREF

  v4 = a1;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2040);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2040LL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v21 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_30;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYCONTEXT *)MmUserProbeAddress;
    hContext = v4->hContext;
  }
  else
  {
    hContext = v4->hContext;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v30,
    (struct _KTHREAD **)Current);
  v12 = (hContext >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)Current + 64) )
    goto LABEL_16;
  v11 = *((_QWORD *)Current + 30);
  v9 = *(unsigned int *)(v11 + 16LL * v12 + 8);
  v10 = (hContext >> 25) & 0x60;
  if ( ((hContext >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v12 + 8) & 0x60) || (v9 & 0x2000) != 0 || (v9 & 0x1F) == 0 )
    goto LABEL_16;
  v9 &= 0x1Fu;
  if ( (_BYTE)v9 != 7 )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = 316LL;
    WdLogEvent5_WdError(v14);
LABEL_16:
    v13 = 0LL;
    goto LABEL_17;
  }
  v13 = *(_QWORD *)(v11 + 16LL * v12);
LABEL_17:
  if ( v13 )
  {
    if ( v12 < *((_DWORD *)Current + 64) )
    {
      v15 = *((_QWORD *)Current + 30);
      v16 = *(_DWORD *)(v15 + 16LL * v12 + 8);
      if ( ((hContext >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v12 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        *(_DWORD *)(v15 + 16LL * ((hContext >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    if ( (*(_DWORD *)(v13 + 420) & 0x10) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
        *(struct DXGDEVICE **)(v13 + 16));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v31,
        (struct DXGPUSHLOCK *const)(*(_QWORD *)(v13 + 16) + 144LL));
      DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
      if ( v26[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    }
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v13);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v17);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v27);
    }
    return 0LL;
  }
  v23 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  *(_QWORD *)(v23 + 24) = hContext;
  *(_QWORD *)(v23 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v23);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v22);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v27);
  return 3221225485LL;
}
