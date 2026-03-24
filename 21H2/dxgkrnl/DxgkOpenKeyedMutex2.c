/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C02938A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0290700 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0291600 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
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
  ULONG64 v14; // rax
  DXGGLOBAL *v15; // rcx
  ULONG64 v16; // rdx
  int v17; // r14d
  _DWORD *v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+40h] [rbp-38h]
  void *v30[2]; // [rsp+48h] [rbp-30h]
  unsigned int v31[8]; // [rsp+58h] [rbp-20h]
  unsigned int v32; // [rsp+88h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v33; // [rsp+90h] [rbp+18h] BYREF
  struct DXGPROCESS *v34; // [rsp+98h] [rbp+20h]

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2067;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2067);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2067LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v34 = Current;
  if ( Current )
  {
    v14 = a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = MmUserProbeAddress;
    *(_OWORD *)v30 = *(_OWORD *)v14;
    *(_QWORD *)v31 = *(_QWORD *)(v14 + 16);
    v33 = 0LL;
    v32 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
    v17 = DXGGLOBAL::OpenKeyedMutex(v15, LODWORD(v30[0]), &v33, &v32, (char *)v30[1], v31[0]);
    if ( v17 >= 0 )
    {
      v18 = (_DWORD *)(a1 + 4);
      v16 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = v32;
    }
    if ( v17 < 0 )
    {
      if ( v32 )
        DXGKEYEDMUTEX::DestroyHandle(v32, v16);
    }
    else
    {
      v19 = v32;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v20 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 < *((_DWORD *)Current + 64) )
      {
        v21 = *((_QWORD *)Current + 30);
        v22 = ((unsigned int)v19 >> 25) & 0x60;
        if ( (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
          && (*(_DWORD *)(v21 + 16 * v20 + 8) & 0x1F) != 0 )
        {
          v23 = 2 * ((v19 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v21 + 8 * v23 + 8) & 0x2000) == 0 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v22, v21);
            *(_QWORD *)(v24 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v24);
            v21 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v21 + 8 * v23 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v16);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v27);
    return (unsigned int)v17;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v10);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v27);
    }
    return 3221225485LL;
  }
}
