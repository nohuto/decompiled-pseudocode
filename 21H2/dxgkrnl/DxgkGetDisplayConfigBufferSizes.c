/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C01A4FF0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01B0DF8 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01D4190 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C01A5158 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 *     DxgkGetPathsModality @ 0x1C01AE940 (DxgkGetPathsModality.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // eax
  __int64 (__fastcall *v12)(struct DXGADAPTER *, void *); // rbx
  struct DXGGLOBAL *v13; // rax
  int PathsModality; // eax
  int v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  char v17; // [rsp+60h] [rbp-10h]
  unsigned __int16 v18; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF

  v15 = -1;
  v4 = (unsigned int)a1;
  v16 = 0LL;
  v5 = 1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2174);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2174);
  v19 = (unsigned int)v4;
  Global = DXGGLOBAL_GetGlobal();
  LODWORD(v7) = QDC_CACHE::GetCachedBufferSizes(*((QDC_CACHE **)Global + 191), (unsigned int)v4 & 0xFFFFFFEF, a2);
  if ( (int)v7 < 0 )
  {
    if ( (v4 & 0x40000000) == 0 )
    {
      v11 = v4 & 7;
      if ( v11 == 1 )
      {
        v12 = CalcAllPathDisplayConfigBufferSizeCallback;
LABEL_10:
        v13 = DXGGLOBAL_GetGlobal();
        LODWORD(v7) = DXGGLOBAL::IterateAdaptersWithCallback(
                        (__int64)v13,
                        (__int64 (__fastcall *)(_QWORD *, __int64))v12,
                        (__int64)&v19,
                        4LL);
        if ( (int)v7 >= 0 )
        {
          v5 = HIDWORD(v19);
          goto LABEL_12;
        }
LABEL_14:
        WdLogSingleEntry3(4LL, v4, (int)v7, *a2);
        goto LABEL_4;
      }
      if ( v11 == 2 )
      {
        v12 = CalcActivePathDisplayConfigBufferSizeCallback;
        goto LABEL_10;
      }
      if ( v11 != 4 )
      {
        LODWORD(v7) = -1073741811;
        WdLogSingleEntry1(3LL, v4);
        goto LABEL_14;
      }
      v18 = 0;
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v18);
      v7 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        WdLogSingleEntry1(2LL, PathsModality);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unexpected status returned (expected STATUS_BUFFER_TOO_SMALL, obtained Status = 0x%I64x)",
          v7,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( (int)v7 >= 0 )
          LODWORD(v7) = -1073741823;
        goto LABEL_4;
      }
      v5 = v18;
    }
    HIDWORD(v19) = v5;
    LODWORD(v7) = 0;
LABEL_12:
    *a2 = v5;
    if ( !v5 )
      LODWORD(v7) = -1073741637;
    goto LABEL_14;
  }
LABEL_4:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v15);
  }
  return (unsigned int)v7;
}
