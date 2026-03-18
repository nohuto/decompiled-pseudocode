/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C0292110
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C02900BC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v14; // rbx
  __int64 v15; // rbx
  DXGGLOBAL *v16; // rcx
  ULONG64 v17; // rdx
  int v18; // r14d
  _DWORD *v19; // r8
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]
  char v30; // [rsp+40h] [rbp-28h]
  unsigned int v31; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v32; // [rsp+80h] [rbp+18h] BYREF
  struct DXGPROCESS *v33; // [rsp+88h] [rbp+20h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2052);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2052LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v33 = Current;
  if ( Current )
  {
    v14 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (__int64 *)MmUserProbeAddress;
    v15 = *v14;
    v32 = 0LL;
    v31 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
    v18 = DXGGLOBAL::OpenKeyedMutex(v16, (unsigned int)v15, &v32, &v31, 0LL, 0);
    if ( v18 >= 0 )
    {
      v19 = (_DWORD *)(a1 + 4);
      v17 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v31;
    }
    if ( v18 < 0 )
    {
      if ( v31 )
        DXGKEYEDMUTEX::DestroyHandle(v31, v17);
    }
    else
    {
      v20 = v31;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v21 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *((_DWORD *)Current + 64) )
      {
        v22 = *((_QWORD *)Current + 30);
        v23 = ((unsigned int)v20 >> 25) & 0x60;
        if ( (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16 * v21 + 8) & 0x1F) != 0 )
        {
          v24 = 2 * ((v20 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v22 + 8 * v24 + 8) & 0x2000) == 0 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v23, v22);
            *(_QWORD *)(v25 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v25);
            v22 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v22 + 8 * v24 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v17);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v28);
    return (unsigned int)v18;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v10);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v28);
    }
    return 3221225485LL;
  }
}
