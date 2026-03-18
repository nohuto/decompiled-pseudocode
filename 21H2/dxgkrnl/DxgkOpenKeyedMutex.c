/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C0342C50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C033F5C8 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C03406F4 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v12; // rbx
  __int64 v13; // rbx
  DXGGLOBAL *v14; // rcx
  ULONG64 v15; // rdx
  _DWORD *v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h]
  char v27; // [rsp+60h] [rbp-38h]
  unsigned int v28; // [rsp+A8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v29; // [rsp+B0h] [rbp+18h] BYREF
  struct DXGPROCESS *v30; // [rsp+B8h] [rbp+20h]

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2052);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2052);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v30 = Current;
  if ( Current )
  {
    v12 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (__int64 *)MmUserProbeAddress;
    v13 = *v12;
    v29 = 0LL;
    v28 = 0;
    DXGGLOBAL_GetGlobal();
    v18 = DXGGLOBAL::OpenKeyedMutex(v14, v13, &v29, &v28, 0LL, 0);
    if ( v18 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 4);
      v15 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = v28;
    }
    if ( v18 < 0 )
    {
      if ( v28 )
        DXGKEYEDMUTEX::DestroyHandle(v28, v15, (__int64)v16, v17);
    }
    else
    {
      v19 = v28;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v20 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 < *((_DWORD *)Current + 74) )
      {
        v21 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
          && (*(_DWORD *)(v21 + 16 * v20 + 8) & 0x1F) != 0 )
        {
          v22 = 2 * ((v19 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v21 + 8 * v22 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v21 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v21 + 8 * v22 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v25);
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v25);
    }
    return 3221225485LL;
  }
}
