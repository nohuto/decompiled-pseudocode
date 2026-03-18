/*
 * XREFs of DxgkGetYieldPercentage @ 0x1C0185930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0185E58 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetYieldPercentage(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v7; // rax
  size_t v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const void *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  int v22; // esi
  int v23; // r14d
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+20h] [rbp-58h] BYREF
  __int64 v41; // [rsp+28h] [rbp-50h]
  char v42; // [rsp+30h] [rbp-48h]
  unsigned int v43; // [rsp+38h] [rbp-40h]
  _BYTE v44[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v45; // [rsp+50h] [rbp-28h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2142;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2142);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2142LL);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v45 = 0LL;
    v7 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (unsigned int *)MmUserProbeAddress;
    v43 = *v7;
    v8 = v43;
    if ( v43 >= 0x10 )
    {
      if ( v43 > 0x10 )
        v8 = 16LL;
      v43 = v8;
      v14 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v14 = (const void *)MmUserProbeAddress;
      memmove(&v45, v14, v8);
      if ( DWORD1(v45) )
      {
        v36 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v36 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v36);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v37);
        if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v40);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v16, v15);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v44, (struct DXGGLOBAL *)((char *)Global + 472), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
        v21 = DXGGLOBAL::GetGlobal(v20, v19);
        v22 = (BYTE8(v45) ^ (unsigned __int8)*((_DWORD *)v21 + 76047)) & 1 ^ DWORD2(v45);
        DWORD2(v45) = v22;
        v23 = *((_DWORD *)v21 + 76044);
        HIDWORD(v45) = v23;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44, v24);
        v25 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v25 = (_DWORD *)MmUserProbeAddress;
        *v25 = v23;
        v26 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v26 = (_DWORD *)MmUserProbeAddress;
        *v26 = v22;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
          (DXGPROCESSCOPYPROTECTIONMUTEX *)v44,
          MmUserProbeAddress);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v27);
        if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v40);
        return 0LL;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v43);
      *(_QWORD *)(v9 + 24) = 4708LL;
      WdLogEvent5_WdWarning(v9);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v10);
      if ( v42 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v40);
      }
      return 3221225485LL;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v30 + 24) = DXGPROCESS::GetCurrent(v32, v31);
    *(_QWORD *)(v30 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v33);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v40);
    return 3221225506LL;
  }
}
