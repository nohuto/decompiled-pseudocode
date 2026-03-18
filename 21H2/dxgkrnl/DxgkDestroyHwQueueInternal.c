/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1C0312EE8
 * Callers:
 *     DxgkDestroyHwQueue @ 0x1C0312ED0 (DxgkDestroyHwQueue.c)
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036BEE0 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C002BF7C (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rdi
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // sf
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  volatile signed __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+58h] [rbp-40h] BYREF
  __int64 v36; // [rsp+60h] [rbp-38h]
  char v37; // [rsp+68h] [rbp-30h]
  _BYTE v38[32]; // [rsp+70h] [rbp-28h] BYREF
  int v39; // [rsp+B0h] [rbp+18h] BYREF

  v4 = (unsigned int *)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2154);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2154);
  v39 = 0;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v39 = *v4;
    v4 = (unsigned int *)&v39;
  }
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v14 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v20 = PsGetCurrentProcess(v17, v16, v18, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v20,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_22;
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v38, Current);
  v24 = (*v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v24 >= *((_DWORD *)v14 + 74) )
    goto LABEL_18;
  v25 = *((_QWORD *)v14 + 35);
  v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
  if ( ((*v4 >> 25) & 0x60) != (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) || (v26 & 0x2000) != 0 || (v26 & 0x1F) == 0 )
    goto LABEL_18;
  if ( (v26 & 0x1F) != 0xF )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    v27 = 0LL;
    goto LABEL_19;
  }
  v27 = *(volatile signed __int64 **)(v25 + 16LL * (unsigned int)v24);
LABEL_19:
  v28 = *v4;
  if ( !v27 )
  {
    WdLogSingleEntry2(3LL, v28, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_22:
      if ( v23 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v35);
    }
    return 3221225485LL;
  }
  v30 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v30 < *((_DWORD *)v14 + 74) )
  {
    v31 = *((_QWORD *)v14 + 35);
    v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
    if ( (((unsigned int)v28 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60)
      && (v32 & 0x2000) == 0
      && (v32 & 0x1F) != 0 )
    {
      *(_DWORD *)(v31 + 16LL * (((unsigned int)v28 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  DXGHWQUEUE::ReleaseReference(v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v35);
  return 0LL;
}
