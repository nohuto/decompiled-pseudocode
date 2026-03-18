/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1C0156A30
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rsi
  signed __int16 v4; // bx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  v3 = (_BYTE *)a1;
  v20 = -1;
  v21 = 0LL;
  v4 = 1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2155);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2155LL);
  v5 = 0;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v10 = (__int64)Current;
  if ( Current )
  {
    if ( !*((_BYTE *)Current + 296) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      if ( !*v3 )
        v4 = 2;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 232, v4, 0) )
      {
        v19 = WdLogNewEntry5_WdError(MmUserProbeAddress, Current);
        v5 = -1073740528;
        *(_QWORD *)(v19 + 24) = -1073740528LL;
        WdLogEvent5_WdError(v19);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v10);
      if ( v22 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v20);
      }
      return v5;
    }
    v14 = WdLogNewEntry5_WdError(v9, Current);
    v15 = -1073741823LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9, 0LL);
    v15 = -1073741811LL;
  }
  *(_QWORD *)(v14 + 24) = v15;
  WdLogEvent5_WdError(v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v16);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  return (unsigned int)v15;
}
