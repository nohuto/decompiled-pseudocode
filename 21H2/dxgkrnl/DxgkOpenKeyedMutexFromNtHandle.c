/*
 * XREFs of DxgkOpenKeyedMutexFromNtHandle @ 0x1C031D980
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
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C03408B4 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutexFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  DXGGLOBAL *v13; // rcx
  int v14; // r14d
  _DWORD *v15; // r8
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+58h] [rbp-60h]
  char v24; // [rsp+60h] [rbp-58h]
  void *v25[2]; // [rsp+68h] [rbp-50h]
  void *v26[2]; // [rsp+78h] [rbp-40h]
  unsigned int v27; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v28; // [rsp+D0h] [rbp+18h] BYREF
  struct DXGPROCESS *v29; // [rsp+D8h] [rbp+20h]

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2159;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2159);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2159);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v29 = Current;
  if ( Current )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v25 = *v12;
    *(_OWORD *)v26 = v12[1];
    v28 = 0LL;
    v27 = 0;
    DXGGLOBAL_GetGlobal();
    v14 = DXGGLOBAL::OpenKeyedMutexFromNtHandle(v13, v25[0], &v28, &v27, v26[0], (unsigned int)v26[1]);
    if ( v14 >= 0 )
    {
      v15 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v27;
    }
    if ( v14 < 0 )
    {
      if ( v27 )
        DXGKEYEDMUTEX::DestroyHandle(v27);
    }
    else
    {
      v16 = v27;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v17 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *((_DWORD *)Current + 74) )
      {
        v18 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
          && (*(_DWORD *)(v18 + 16 * v17 + 8) & 0x1F) != 0 )
        {
          v19 = 2 * ((v16 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v18 + 8 * v19 + 8) & 0x2000) == 0 )
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
            v18 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v18 + 8 * v19 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v22);
    return (unsigned int)v14;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v22);
    }
    return 3221225485LL;
  }
}
