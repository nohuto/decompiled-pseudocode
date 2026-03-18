/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C0342F70
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

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v12; // rax
  DXGGLOBAL *v13; // rcx
  ULONG64 v14; // rdx
  _DWORD *v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+58h] [rbp-50h]
  char v26; // [rsp+60h] [rbp-48h]
  void *v27[2]; // [rsp+68h] [rbp-40h]
  unsigned int v28[12]; // [rsp+78h] [rbp-30h]
  unsigned int v29; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v30; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGPROCESS *v31; // [rsp+C8h] [rbp+20h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2067;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2067);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2067);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v31 = Current;
  if ( Current )
  {
    v12 = a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_OWORD *)v27 = *(_OWORD *)v12;
    *(_QWORD *)v28 = *(_QWORD *)(v12 + 16);
    v30 = 0LL;
    v29 = 0;
    DXGGLOBAL_GetGlobal();
    v17 = DXGGLOBAL::OpenKeyedMutex(v13, (unsigned int)v27[0], &v30, &v29, (char *)v27[1], v28[0]);
    if ( v17 >= 0 )
    {
      v15 = (_DWORD *)(a1 + 4);
      v14 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v29;
    }
    if ( v17 < 0 )
    {
      if ( v29 )
        DXGKEYEDMUTEX::DestroyHandle(v29, v14, (__int64)v15, v16);
    }
    else
    {
      v18 = v29;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v19 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 < *((_DWORD *)Current + 74) )
      {
        v20 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
          && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0x1F) != 0 )
        {
          v21 = 2 * ((v18 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v20 + 8 * v21 + 8) & 0x2000) == 0 )
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
            v20 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v20 + 8 * v21 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v24);
    return (unsigned int)v17;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v24);
    }
    return 3221225485LL;
  }
}
