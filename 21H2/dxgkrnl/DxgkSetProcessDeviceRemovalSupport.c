/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1C01E33A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rsi
  signed __int16 v4; // bx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rbx
  const wchar_t *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  char v20; // [rsp+60h] [rbp-18h]

  v3 = (_BYTE *)a1;
  v18 = -1;
  v19 = 0LL;
  v4 = 1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2155);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2155);
  v5 = 0;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( Current )
  {
    if ( !*((_BYTE *)Current + 336) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      if ( !*v3 )
        v4 = 2;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 288, v4, 0) )
      {
        v5 = -1073740528;
        WdLogSingleEntry1(2LL, -1073740528LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device removal support has been specified before, returning 0x%I64x",
          -1073740528LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
      if ( v20 )
      {
        LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v18);
      }
      return v5;
    }
    v14 = -1073741823LL;
    WdLogSingleEntry1(2LL, -1073741823LL);
    v15 = L"It is invalid to specify device removal support after device creation, returning 0x%I64x";
  }
  else
  {
    v14 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v15 = L"Invalid process context, returning 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v14, 0LL, 0LL, 0LL, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v18);
  }
  return (unsigned int)v14;
}
